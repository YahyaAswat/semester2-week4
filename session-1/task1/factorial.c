
/*
 * Factorial
 */

 #include <stdio.h>

 int fact(int i);

 int main( void ) {
    int ARRAY_SIZE = 20;
    unsigned long f[ARRAY_SIZE];

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    for(int i = 0; i<ARRAY_SIZE;i++)
    {
      f[i] = fact(i);
    }
    
    printf("[");
    for (int i = 0; i<ARRAY_SIZE;i++)
    {
      if (i!=ARRAY_SIZE-1)
      {
         printf("%lu, ", f[i]);
      }
      else{
         printf("%lu", f[i]);
      }
      
    }
    printf("]\n");
    return 0;
 }

  int fact(int i)
  {
   unsigned long result = 1;
   for (int j=i;j>0;j--)
   {
      if (j != 0)
      {
         result = result*j;
      }
   }
   return result;
  }
