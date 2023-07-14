#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print error message to stderr.
 * @message: The error message to print.
 */
void print_error(const char *message)
{
	write(STDERR_FILENO, message, strlen(message));
	write(STDERR_FILENO, "\n", 1);
}

/**
 * display_elf_header - Display the information in the ELF header.
 * @header: The ELF header structure.
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	char buffer[BUFFER_SIZE];

	/* Magic */
	write(STDOUT_FILENO, "  Magic:   ", 11);
	for (int i = 0; i < EI_NIDENT; i++) {
		sprintf(buffer, "%02x ", header->e_ident[i]);
		write(STDOUT_FILENO, buffer, strlen(buffer));
	}
	write(STDOUT_FILENO, "\n", 1);

	/* Class */
	write(STDOUT_FILENO, "  Class:                             ", 38);
	switch (header->e_ident[EI_CLASS]) {
	case ELFCLASS32:
		write(STDOUT_FILENO, "ELF32\n", 6);
		break;
	case ELFCLASS64:
		write(STDOUT_FILENO, "ELF64\n", 6);
		break;
	default:
		write(STDOUT_FILENO, "Invalid\n", 8);
	}

	/* Data */
	write(STDOUT_FILENO, "  Data:                              ", 38);
	switch (header->e_ident[EI_DATA]) {
	case ELFDATA2LSB:
		write(STDOUT_FILENO, "2's complement, little endian\n", 29);
		break;
	case ELFDATA2MSB:
		write(STDOUT_FILENO, "2's complement, big endian\n", 26);
		break;
	default:
		write(STDOUT_FILENO, "Invalid\n", 8);
	}

	/* Version */
	sprintf(buffer, "  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	write(STDOUT_FILENO, buffer, strlen(buffer));

	/* OS/ABI */
	write(STDOUT_FILENO, "  OS/ABI:                            ", 38);
	switch (header->e_ident[EI_OSABI]) {
	case ELFOSABI_SYSV:
		write(STDOUT_FILENO, "UNIX System V ABI\n", 18);
		break;
	case ELFOSABI_HPUX:
		write(STDOUT_FILENO, "HP-UX\n", 6);
		break;
	case ELFOSABI_NETBSD:
		write(STDOUT_FILENO, "NetBSD\n", 7);
		break;
	case ELFOSABI_LINUX:
		write(STDOUT_FILENO, "Linux\n", 6);
		break;
	case ELFOSABI_SOLARIS:
		write(STDOUT_FILENO, "Solaris\n", 8);
		break;
	case ELFOSABI_IRIX:
		write(STDOUT_FILENO, "IRIX\n", 5);
		break;
	case ELFOSABI_FREEBSD:
		write(STDOUT_FILENO, "FreeBSD\n", 8);
		break;
	case ELFOSABI_TRU64:
		write(STDOUT_FILENO, "TRU64 UNIX\n", 11);
		break;
	case ELFOSABI_ARM:
		write(STDOUT_FILENO, "ARM architecture\n", 17);
		break;
	case ELFOSABI_STANDALONE:
		write(STDOUT_FILENO, "Standalone (embedded) application\n", 33);
		break;
	default:
		write(STDOUT_FILENO, "Unknown\n", 8);
	}

	/* ABI Version */
	sprintf(buffer, "  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	write(STDOUT_FILENO, buffer, strlen(buffer));

	/* Type */
	write(STDOUT_FILENO, "  Type:                              ", 38);
	switch (header->e_type) {
	case ET_NONE:
		write(STDOUT_FILENO, "None (No file type)\n", 20);
		break;
	case ET_REL:
		write(STDOUT_FILENO, "Relocatable file\n", 17);
		break;
	case ET_EXEC:
		write(STDOUT_FILENO, "Executable file\n", 16);
		break;
	case ET_DYN:
		write(STDOUT_FILENO, "Shared object file\n", 19);
		break;
	case ET_CORE:
		write(STDOUT_FILENO, "Core file\n", 10);
		break;
	default:
		write(STDOUT_FILENO, "Unknown\n", 8);
	}

	/* Entry point address */
	sprintf(buffer, "  Entry point address:               0x%llx\n", (unsigned long long)header->e_entry);
	write(STDOUT_FILENO, buffer, strlen(buffer));
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 2) {
		print_error("Usage: elf_header elf_filename");
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		print_error("Error: Can't open file");
		return (98);
	}

	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1 || bytes_read != sizeof(Elf64_Ehdr) ||
	    header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
		print_error("Error: Not an ELF file");
		close(fd);
		return (98);
	}

	display_elf_header(&header);

	close(fd);
	return (0);
}

