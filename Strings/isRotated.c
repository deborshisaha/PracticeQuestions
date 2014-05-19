/***********************************************************************************************
 *    Assume you have a method isSubstring which checks if one word is a substring of
 *    another Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using
 *    only one call to isSubstring (i e , “waterbottle” is a rotation of “erbottlewat”)
 ***********************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include "isSubstring.h"
#include<string.h>

bool isRotated (char *string1, char *string2) {

    if (string2 == NULL && string1 == NULL) {
        return true;
    }

    if (string2 == NULL || string1 == NULL) {
        return false;
    }

    // Lengths of two strings should match
    if(strlen(string1) == strlen(string2)) {
        // String length matches. Safe to proceed with further analysis
        char *concatenatedString = (char *) malloc (2 * strlen(string1) * sizeof(char));
        if(isSubstring(concatenatedString, string2)) {
            return true;
        }
    }

    return false;
}

int main() {
    if (isRotated("waterbottle", "erbottlewat" )) {
        printf("\nRotated strings\n");
    }
    return 0;
}
