#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define M_ERR_OPEN "Error: cannot open file %s\n"
#define M_ERR_READ "Error: cannot read file %s\n"
#define M_ERR_NEXI "Error: cannot find file %s\n"
#define M_ERR_CLOS "Error: cannot close fd %d\n"
#define M_ERR_NELF "Error: Not an elf file\n"
#define M_ERR_MMEM "Error: Cannot allocat enough memory\n"

void cleanup(int elf);
void checkElf(unsigned char *ident);
void getMagic(unsigned char *magi);
void getClass(unsigned char *cla);
void getData(unsigned char *data);
void getVersion(unsigned char *version);
void getOsabi(unsigned char *osabi);
void getAbi(unsigned char *lordAbi);
void getType(unsigned int type, unsigned char *ident);
void getEntry(unsigned long int entry, unsigned char *ident);

/**
* main - entry point, code to read and display elf header file's content
* @argc: arguments count
* @argv: arguments value
* Return: on fail 98, on success 0.
**/
int main(int __attribute__((__unused__))argc, char **argv)
{
	int fileDesc, checkRead;
	Elf64_Ehdr *h;

	h = malloc(sizeof(Elf64_Ehdr));
	if (!h)
		dprintf(STDERR_FILENO, M_ERR_MMEM), exit(98);

	fileDesc = open(argv[1], O_RDONLY);
	if (fileDesc == -1)
		dprintf(STDERR_FILENO, M_ERR_OPEN, argv[1]), exit(98);
	checkRead = read(fileDesc, h, sizeof(Elf64_Ehdr));
	if (checkRead == -1)
	{
		dprintf(STDERR_FILENO, M_ERR_READ, argv[1]), free(h);
		cleanup(checkRead), exit(98);
	}
	checkElf(h->e_ident);
	printf("ELF Header:\n");
	getMagic(h->e_ident);
	getClass(h->e_ident);
	getData(h->e_ident);
	getVersion(h->e_ident);
	getOsabi(h->e_ident);
	getAbi(h->e_ident);
	getType(h->e_type, h->e_ident);
	getEntry(h->e_entry, h->e_ident);

	free(h);
	cleanup(fileDesc);
	return (0);
}
/**
* cleanup - function to close elf
* @elf: pointer to array containning elf data
* Return: void
**/
void cleanup(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, M_ERR_CLOS, elf);
		exit(98);
	}
}
/**
* checkElf - func to check if identefied matches elf file
* @ident: identified
* Return void
**/
void checkElf(unsigned char *ident)
{
	int i = 0;

	while (i < 4)
	{
		if (ident[i] != 127 &&
		ident[i] != 'E' &&
		ident[i] != 'L' &&
		ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, M_ERR_NELF);
			exit(98);
		}
		i++;
	}
}
/**
* getMagic - get magic data
* @magi: pointer to array containing magic
* Return: void.
**/
void getMagic(unsigned char *magi)
{
	int i = 0;

	printf("  Magic:   ");
	while (i < EI_NIDENT)
	{
		printf("%02x", magi[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		i++;
	}
}
/**
* getClass - get class data
* @cla: pointer to array containing class
* Return: void
**/
void getClass(unsigned char *cla)
{
	printf("  Class:                             ");
	if (cla[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (cla[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (cla[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", cla[EI_CLASS]);
}
/**
* getData - get elf Data section
* @data: pointer to array containing elf data
* Return: void
**/
void getData(unsigned char *data)
{
	printf("  Data:                              ");
	if (data[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (data[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (data[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", data[EI_CLASS]);
}
/**
* getVersion - gets elf version
* @version: pointer to array containing elf version
* Return: void
**/
void getVersion(unsigned char *version)
{
	printf("  Version:                           %d", version[EI_VERSION]);
	if (version[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
* getOsabi - gets elf osabi
* @osabi: pointer to array containing osabi
* Return: void
**/
void getOsabi(unsigned char *osabi)
{
	printf("  OS/ABI:                            ");
	if (osabi[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (osabi[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (osabi[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (osabi[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (osabi[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (osabi[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (osabi[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (osabi[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (osabi[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (osabi[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>", osabi[EI_OSABI]);
}
/**
* getAbi - get elf abi
* @lordAbi: pointer to array containing elf abi
* Return: void.
**/
void getAbi(unsigned char *lordAbi)
{
	printf("  ABI Version:                       %d\n",
		lordAbi[EI_ABIVERSION]);
}
/**
* getType - gets elf type
* @ident: pointer to array containing elf type
* @type: elf type
* Return: void
**/
void getType(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
	if (type == ET_NONE)
		printf("NONE (none)\n");
	else if (type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (type == ET_DYN)
		printf("DYN (Shared Object file)\n");
	else if (type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}
/**
* getEntry - Elf file entry
* @ident: pointer to array containing elf file entry
* @entry: elf entry point's address
* Return: void
**/
void getEntry(unsigned long int entry, unsigned char *ident)
{
	printf("  Entry point address:               ");
	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16 | entry >> 16);
	}
	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int) entry);
	else
		printf("%#lx\n", entry);
}
