
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4] = {
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12},
      {13,14,15, 16},
    };
    float b[4][4] = {
      {1,2,3,4},
      {1,2,3,4},
      {1,2,3,4},
      {1,2,3,4},
    };
    float c[4][4];

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
         c[i][j] = a[i][j] + b[i][j];
      }
   }

   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
         printf("%.1f\n", c[i][j]);
      }
      printf("\n");
   }

    return 0;
 }
