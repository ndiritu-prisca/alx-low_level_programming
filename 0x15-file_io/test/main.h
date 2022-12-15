#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void errorMsg(int code, char *msg, const char *filename);
int close_fd(int fd);
void ELFcheck(char *ptr);
void printMagic(char *ptr);
void printClass(char *ptr);
void printData(char *ptr);
void printVersion(char *ptr);
void printABI(char *ptr);
void printType(char *ptr);
void printEntry(char *ptr);

#endif /*MAIN_H*/
