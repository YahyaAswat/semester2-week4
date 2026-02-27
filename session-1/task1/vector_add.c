
/*
 * Sum of 2 vectors
 */

 #include <stdio.h>

  void print_array(float array[], int ARRAY_SIZE);

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float c[5];

    /*
    Code to compute the sum
    Store your answer in array c
    Print your final answer
    */

    for (int i = 0; i<5; i++)
    {
      c[i] = a[i]+b[i];
    }
    print_array(c, 5);

    return 0;
 }

 void print_array(float array[], int ARRAY_SIZE)
 {
   printf("[");
    for (int i = 0; i<ARRAY_SIZE;i++)
    {
      if (i!=ARRAY_SIZE-1)
      {
         printf("%f, ", array[i]);
      }
      else{
         printf("%f", array[i]);
      }
      
    }
    printf("]\n");
 }