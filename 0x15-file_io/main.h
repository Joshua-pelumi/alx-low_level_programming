#ifndef MAIN_H
#define MAIN_H

/*
 * File:horlberton.h
 * Auth: Brennan D Baraban
 * Desc: Header file containing prototypes for all functions
 * written in thw 0x14-file_io directory.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /*MAIN_H */
