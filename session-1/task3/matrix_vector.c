
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */

    a = calloc(n, sizeof(float *));
    for (int i = 0; i<n;i++)
    {
        a[i] = calloc(n, sizeof(float));
    }
    b = calloc(n, sizeof(float));
    c = calloc(n, sizeof(float));



    // a[i][j] = 1, b[i] = 1, c[i] = 0
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = i+j;
        }
        b[i] = 1;
        c[i] = 0;
    }

    // Output a
    printf("[[");
    for (int i =0; i<n;i++)
    {
        for (int j = 0; j<n;j++)
        {
        printf("%f, ", a[i][j]);
        }
        if (i !=(n-1))
        {
        printf("]\n[");
        }
    }
    printf("]]\n\n"); 
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i] += a[i][j] * b[j];
        }
    }

    // Output c
    printf("[");
    for (int i = 0; i<n;i++)
    {
      if (i!=n-1)
      {
         printf("%f, ", c[i]);
      }
      else{
         printf("%f", c[i]);
      }
      
    }
    printf("]\n");


    for (int i =0; i<n; i++)
    {
        free(a[i]);
    }

   
    free(a);
    free(b);
    free(c);


    
    return 0;
 }
