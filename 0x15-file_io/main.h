#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include<sys/stat.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <elf.h>

#define READ_BUF_SIZE 1024

#define handle_error(msg) \

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

size_t _strlen(char *s);

int append_text_to_file(const char *filename, char *text_content);

size_t _strlen2(char *s);
void error_and_exit(int code, const char *message, const char *arg);
int main(int argc, char *argv[]);
void error_and_exit(int code, const char *message, const char *arg);

#define ELF_HEADER_SIZE 64
#define ERROR "Error: can't read from file %s\n"
#define ERR "Error: can't write to %s/n"
#endif
