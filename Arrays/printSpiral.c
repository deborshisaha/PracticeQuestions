/**************************************
 *    Print a matrix in spiral form
 **************************************/

#include<stdio.h>
#include<stdlib.h>

void printSpiral(int matrix[4][4], int numberOfRows, int numberOfColumns) {
    int startRowIndex = 0;
    int startColumnIndex = 0;
    int endRowIndex = numberOfRows;
    int endColumnIndex = numberOfColumns;
    int iterator = 0;

    while ( startRowIndex < endRowIndex && startColumnIndex < endColumnIndex) {
        for ( iterator = startRowIndex ; iterator < endColumnIndex ; iterator++ ) {
            printf("%d ",matrix[startRowIndex][iterator]);
        }
        startRowIndex++;

        for ( iterator = startRowIndex ; iterator < endRowIndex ; iterator++ ) {
            printf("%d ",matrix[iterator][endColumnIndex-1]);
        }
        endColumnIndex--;

        if (startColumnIndex < endColumnIndex) {
            for ( iterator = endColumnIndex - 1; iterator >= startColumnIndex ; iterator-- ) {
                printf("%d ", matrix[endRowIndex - 1][iterator]);
            }
            endRowIndex--;
        }

        if (startColumnIndex < endColumnIndex) {
            for ( iterator = endRowIndex-1; iterator >= startRowIndex ; iterator-- ) {
                printf("%d ", matrix[iterator][startColumnIndex]);
            }
            startColumnIndex++;
        }
    }
}

int main() {
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printSpiral(matrix,4,4);
    return 0;
}
