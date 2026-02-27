#include <stdio.h>
#include <string.h>

int main()
{
    /*
    * Find a substring within a given string
    */

    // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

    /*  Hints:
    1. include the appropriate libraries
    2. create the main function
    3. define the program data as strings
    4. using the string library documentation find the appropriate string function
    5. implement the solution and compute the answer  
    6. print the answer appropriately as pointer, character and string
    */

    char sub_string[] = "ump";
    // Should be pos 21
    char main_string[] = "The quick brown fox jumped over the lazy dog" ;
    
    char* ptr = strstr(main_string, sub_string);
    if (ptr != NULL)
    {
        printf("Memory Location: %p\n", ptr);
        printf("Index: %li\n", ptr-main_string);
    }
    
}
