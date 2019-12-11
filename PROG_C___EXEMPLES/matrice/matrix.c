#include <stdio.h>
#include <stdlib.h>


float **allocate_matrix(int n, int m) {
    float **res = (float **) malloc(sizeof(float *) * n);
    int i;
    for (i=0; i<n; i++)
        res[i] = malloc(sizeof(float) *m);
    printf("dans allocate_matrix:\n");
    printf("&res=%d ; res=%d ; *res=%f \n", &res, res, *res);
    return res;
}

void desallocate_matrix(float **mat, int n, int m) {
    int i;
    for (i=0; i<n; i++)
        free(mat[i]);
    free(mat);
}

void init_matrix(float **mat, int n, int m) {
    int i, j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            mat[i][j] = i+j*0.1;
        }
    }
}

void print_matrix(float **mat, int n, int m) {
    int i, j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%.1f  ", mat[i][j]);
        }
        printf("\n");
    }
}
