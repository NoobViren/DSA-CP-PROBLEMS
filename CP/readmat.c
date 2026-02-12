#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int row;
    int col;
    int value;
} Term;

typedef struct {
    Term *terms;
    int rows;
    int cols;
    int numTerms;
} SparseMatrix;

SparseMatrix* readMatrix() {
    SparseMatrix* matrix = (SparseMatrix*)malloc(sizeof(SparseMatrix));
    
    printf("Enter number of rows, columns, and non-zero terms: ");
    scanf("%d %d %d", &matrix->rows, &matrix->cols, &matrix->numTerms);
    
    matrix->terms = (Term*)malloc(matrix->numTerms * sizeof(Term));
    
    printf("Enter row, column, value for each term:\n");
    for(int i = 0; i < matrix->numTerms; i++) {
        scanf("%d %d %d", 
            &matrix->terms[i].row,
            &matrix->terms[i].col,
            &matrix->terms[i].value);
    }
    
    return matrix;
}

void printMatrix(SparseMatrix* matrix) {
    printf("\nMatrix (%d x %d) with %d non-zero elements:\n",
           matrix->rows, matrix->cols, matrix->numTerms);
    printf("Row\tColumn\tValue\n");
    
    for(int i = 0; i < matrix->numTerms; i++) {
        printf("%d\t%d\t%d\n",
               matrix->terms[i].row,
               matrix->terms[i].col,
               matrix->terms[i].value);
    }
}

// Example usage
int main() {
    SparseMatrix* matrix = readMatrix();
    printMatrix(matrix);
    
    free(matrix->terms);
    free(matrix);
    return 0;
}