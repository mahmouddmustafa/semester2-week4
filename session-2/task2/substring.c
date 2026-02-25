/*
 * Find a substring within a given string
*/

#include <stdio.h>
#include <string.h>

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

 int main(void) {
    char str1[100] = "The quick brown fox jumped over the lazy dog";
    char search[] = "ump";

    char *sub = strstr(str1, search);

    if (sub != NULL) {
        printf("As a pointer (memory address): %p\n", (void*)sub);
        printf("As a single character (the first match): %c\n", *sub);
        printf("As a string: %s\n", sub);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
 }

