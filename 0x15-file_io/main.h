#ifndef main_h
#define main_h

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void out_err(int create, char *word);
int main(int argc, char *argv[]);

#endif
