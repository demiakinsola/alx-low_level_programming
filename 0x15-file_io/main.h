#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include <fcntl.h>
#include <sys/stat.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int read_file(char *file_from, char *buffer);
int write_file(char *file_to, char *buffer, size_t bytes); 

#endif /* #define MAIN_H */
