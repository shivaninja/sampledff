
# Embedded Engineer Intern Task

This repository contains a C-based statistical analytics project
developed as part of an Embedded Engineer Intern assignment.

Author: Shiva Goud

# COMMIT 2

## This Commit includes 2 things. 
## 1. Creating all the skeliton functions in stats.c file
## 2. Declaring all the functions in used stats.c source file to stats.h header file


## Below are the newly declared fuctions in stats.h file
void print_statistics(unsigned char *data, unsigned int length);

void print_array(unsigned char *data, unsigned int length);

unsigned char find_median(unsigned char *data, unsigned int length);

unsigned char find_mean(unsigned char *data, unsigned int length);

unsigned char find_maximum(unsigned char *data, unsigned int length);

unsigned char find_minimum(unsigned char *data, unsigned int length);

void sort_array(unsigned char *data, unsigned int length);



## Below is the newly declared skeliton function in stats.c file

void print_statistics(unsigned char *data, unsigned int length){}

void print_array(unsigned char *data, unsigned int length){}

unsigned char find_median(unsigned char *data, unsigned int length){ return 0; }

unsigned char find_mean(unsigned char *data, unsigned int length){  return 0; }

unsigned char find_maximum(unsigned char *data, unsigned int length){  return 0; }

unsigned char find_minimum(unsigned char *data, unsigned int length){   return 0; }

void sort_array(unsigned char *data, unsigned int length){}
