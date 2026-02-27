
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests

    // use 'strcmp' to compare 2 strings - print the return value
    printf("Compare: %i\n", strcmp(str1, str2));

    // use 'strcat' to concatenate 2 strings - print the resulting string
    printf("Concat: %s\n", strcat(str1, str2));

    // use 'strcpy' to copy a string into str3 - print string 3
    strcpy(str3, str1);
    printf("String 1: %s\n", str1);
    printf("String 3: %s\n", str3);

    return 0;
}
