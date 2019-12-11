#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

float **allocate_matrix(int n, int m);
void desallocate_matrix(float **mat, int n, int m);
void init_matrix(float **mat, int n, int m);
void print_matrix(float **mat, int n, int m);

#endif // MATRIX_H_INCLUDED
