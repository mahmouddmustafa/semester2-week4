
/*
Name: Mahmoud Mustafa
Student ID: 201868040
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[64] = "";           // Temporary storage 

    // process the command-line data using appropriate string functions
    for ( int i = 1; i < argc; ++i) {           // Iterates through the provided input
        strcat(buffer, argv[i]);
        if (i < argc - 1) {                     // So that the hyphens used are one less than the characters
            strcat(buffer, "-");                // Creates a string and connect using the hyphen '-' if true
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}