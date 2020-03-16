#include <stdio.h>
#include <stdlib.h>

// alloue une matrice de taille n x m
int **allocate_matrix(int n, int m)
{
    int **mat  = (int **) malloc(n * sizeof(int *));
    int i;
    for(i=0; i<n; i++)
        mat[i] = (int *) malloc(m * sizeof(int));
    return mat;
}

// desalloue une matrice de taille n x m
void deallocate_matrix(int** mat, int n, int m)
{
    int i;
    for (i=0 ; i<n; i++)
        free(mat[i]);
    free(mat);
}

// Affichage d'une matrice n x m
void affichage(int **mat, int n, int m)
{
    int i, j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    printf("\n");
}

int est_nulle(int **mat, int n, int m)
{
    int i, j;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            if (mat[i][j] != 0)
                return 0;
    return 1;
}

int ne_contient_que(int **mat, int n, int m, int x)
{
    int i, j;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            if (mat[i][j] != x)
                return 0;
    return 1;
}

int **mult_scalaire(int **mat, int n, int m, int k)
{
    int i, j;
    int **res = allocate_matrix(n, m);
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            res[i][j] = mat[i][j] * k;
    return res;
}

int **addition(int **mat1, int **mat2, int n, int m)
{
    int i, j;
    int **res = allocate_matrix(n, m);
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            res[i][j] = mat1[i][j] + mat2[i][j];
    return res;
}

int est_diagonale(int **mat, int n)
{
    int i, j;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            if (i!=j && mat[i][j]!=0)
                return 0;
    return 1;
}

int est_symetrique(int **mat, int n)
{
    int i, j;
    for (i=0; i<n; i++)
        for (j=i; j<n; j++)
            if (mat[i][j] != mat[j][i])
                return 0;
    return 1;
}

int nb_occurrences(int **mat, int n, int m, int x)
{
    int i, j, cpt=0;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            if (mat[i][j] == x)
                cpt++;
    return cpt;
}

int main()
{
    int i, j, cpt;
    int **mat1 = allocate_matrix(3, 3);
    int **mat2 = allocate_matrix(3, 3);
    int **mat3;

    // initialisation de la matrice mat1
    cpt=0;
    for (i=0; i<3 ; i++)
        for (j=0; j<3; j++)
            mat1[i][j] = cpt++;

    // initialisation de la matrice mat2
    for (i=0; i<3 ; i++)
        for (j=0; j<3; j++)
            mat2[i][j] = 0;

    affichage(mat1, 3, 3);
    affichage(mat2, 3, 3);

    //printf("%d \n", est_nulle(mat1, 3, 3));
    //printf("%d \n", est_nulle(mat2, 3, 3));

    //printf("%d \n", ne_contient_que(mat1, 3, 3, 0));
    //printf("%d \n", ne_contient_que(mat2, 3, 3, 0));

    //mat3 = mult_scalaire(mat1, 3, 3, 2);
    //affichage(mat3, 3, 3);
    //deallocate_matrix(mat3, 3, 3);

    //mat3 = addition(mat1, mat1, 3, 3);
    //affichage(mat3, 3, 3);
    //deallocate_matrix(mat3, 3, 3);

    /*
    // est_diagonale
    printf("%d \n", est_diagonale(mat1, 3));
    printf("%d \n", est_diagonale(mat2, 3));
    mat3 = allocate_matrix(3,3);
    mat3[0][0]=mat3[1][1]=mat3[2][2]=1;
    mat3[0][1]=mat3[0][2]=0;
    mat3[1][0]=mat3[1][2]=0;
    mat3[2][0]=mat3[2][1]=0;
    affichage(mat3, 3, 3);
    printf("%d \n", est_diagonale(mat3, 3));
    deallocate_matrix(mat3, 3, 3);
    */

    /*
    // est_symetrique
    printf("%d \n", est_symetrique(mat1, 3));
    printf("%d \n", est_symetrique(mat2, 3));
    mat3 = allocate_matrix(3,3);
    mat3[0][0]=mat3[1][1]=mat3[2][2]=1;
    mat3[0][1]=mat3[1][0]=2;
    mat3[0][2]=mat3[2][0]=3;
    mat3[1][2]=mat3[2][1]=4;
    affichage(mat3, 3, 3);
    printf("%d \n", est_symetrique(mat3, 3));
    deallocate_matrix(mat3, 3, 3);
    */

    // nb_occurrences
    printf("%d \n", nb_occurrences(mat1, 3, 3, 3));
    printf("%d \n", nb_occurrences(mat2, 3, 3, 3));
    mat3 = allocate_matrix(3,3);
    mat3[0][0]=1; mat3[0][1]=2; mat3[0][2]=3;
    mat3[1][0]=4; mat3[1][1]=3; mat3[1][2]=3;
    mat3[2][0]=7; mat3[2][1]=3; mat3[2][2]=9;
    affichage(mat3, 3, 3);
    printf("%d \n", nb_occurrences(mat3, 3, 3, 3));
    deallocate_matrix(mat3, 3, 3);


    deallocate_matrix(mat1, 3, 3);
    deallocate_matrix(mat2, 3, 3);

    return EXIT_SUCCESS;
}
