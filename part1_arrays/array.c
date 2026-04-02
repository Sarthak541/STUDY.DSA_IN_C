#include <stdio.h>
#include <stdlib.h>

int gcd(int p, int q) {
    if(q==0) return p;
    return gcd(q, p%q);
}

int main(){

    int my_gcd = gcd(30,20);
    printf("This is the gcd of 30 and 20 - %d\n", my_gcd);

    //arrays can be statically allocated
    printf("\n This is the statically allocated array\n");
    int array[8] = {1,2,3,4,5,6,7,8};
    for (int i = 0; i < 8; i++) {
        printf("The value of array[%d] is %d\n", i, array[i]);
    }
    //you can get the size of an array using sizeof, 
    //but you must use it in the same scope where you 
    //created the array
    printf("\n This is the statically allocated array accessed via sizeof\n");
    for (int i = 0; i < (sizeof(array)/sizeof(array[0])); i++){
        printf("The value of array[%d] is %d\n", i, array[i]);
    }

    //you can dynamically allocate an array
    //used if you do not know the size of the aray at compile time
    int size;
    printf("\nEnter the size of your dynamically allocated array \n");
    scanf("%d",&size);

    int* array2 = (int*) malloc(size*sizeof(int));
    for (int i = 0; i < size; i++) {
        array2[i] = i+1;
    }

    printf("\nPrinting the dynamically allocated array \n");
    for (int i = 0; i < size; i++) {
        printf("The value of array[%d] is %d\n",i,array2[i]);
    }
    free(array2);
    
    int two_d_array[5][5] = {{1,2,3,4,5},{1,2,3,4,5}};
    printf("\nPrinting the statically allocated 2d array\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ",two_d_array[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the number of rows:\n");
    int row;
    scanf("%d",&row);
    printf("\nEnter the number of Columns\n");
    int column;
    scanf("%d",&column);
    int** two_d_array2 = (int**)malloc(row*sizeof(int*));
    for (int i = 0; i < row; i++) {
        two_d_array2[i] = (int*)malloc(column*sizeof(int));
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            two_d_array2[i][j] = i+j;
        }
    }
    
    printf("\nPrinting the dynamically allocated 2d array\n");    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", two_d_array2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++) { 
        free(two_d_array2[i]);
    }
    free(two_d_array2);

    

    

    return 0;
}