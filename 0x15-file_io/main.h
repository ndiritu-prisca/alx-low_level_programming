#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void errorMsg(int code, char *msg, const char *filename);
int close_fd(int fd);
void ELFcheck(unsigned char *e_ident);
void printMagic(unsigned char *e_ident);
void printClass(unsigned char *e_ident);
void printData(unsigned char *e_ident);
void printVersion(unsigned char *e_ident);
void printOSABI(unsigned char *e_ident);
void printABI(unsigned char *e_ident);
void printType(unsigned int e_type, unsigned char *e_ident);
void printEntry(unsigned long int e_type, unsigned char *e_ident);

#endif /*MAIN_H*/
