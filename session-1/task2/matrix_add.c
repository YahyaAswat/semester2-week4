
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

   void print_matrix(float (*matrix)[4]);

 int main( void ) {
    float a[4][4] = {{1,1,1, 1},{1,1,1, 1},{1,1,1, 1},{1,1,1, 1}};
    float b[4][4]= {{1,1,1, 1},{1,1,1, 1},{1,1,1, 1},{1,1,1, 1}};;
    float c[4][4];

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
   for (int i =0; i<4;i++)
   {
      for (int j = 0; j<4;j++)
      {
         c[i][j] = a[i][j]+b[i][j];
      }
   }

    print_matrix(c);

    return 0;
 }

   void print_matrix(float (*matrix)[4])
   {
      printf("[[");
      for (int i =0; i<4;i++)
      {
         
         for (int j = 0; j<4;j++)
         {
            printf("%f, ", matrix[i][j]);
         }
         if (i !=3)
         {
            printf("]\n[");
         }
      }
      printf("]]\n");
   }