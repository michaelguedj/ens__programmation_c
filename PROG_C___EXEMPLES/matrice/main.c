#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

void main() {
    float **mat;
    int n, m;

    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);

    mat = allocate_matrix(n, m);
	// bonne pratique : verificatioon pointeur null ?

    printf("dans main:\n");
    printf("&mat=%d ; mat=%d ; *mat=%f \n", &mat, mat, *mat);

    init_matrix(mat, n, m);
    print_matrix(mat, n, m);
    desallocate_matrix(mat, n, m);
}
