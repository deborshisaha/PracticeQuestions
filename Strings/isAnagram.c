/********************************************
 *   Check if two strings are anagram
 ********************************************/

#include<stdio.h>
#include<stdlib.h>

bool isAnagram (char *string1, char* string2) {

    int letters[256];
    int number_of_completes = 0;
    int number_of_unique_characters = 0;

    // If both are NULL then return true
    if (string1 == NULL && string2 == NULL) {
        return true;
    }

    // We already checked if both are NULL. If both NULL control wont reach here
    // If anyone of them is NULL return false
    if (string1 == NULL || string2 == NULL) {
        return false;
    }

    // for two words to be anagram it requires to be of same length
    if (strlen(string1) != strlen(string2)) {
        return false;
    }

    // Iterate through the first list and keep a count of characters
    for (int i=0; i < strlen(string1) ; i++) {
        if (letters[string1[i]] == 0) {
            number_of_unique_characters ++;
        }
        letters[string1[i]]++;
    }

    // Iterate through the second list
    for (int j=0; j < strlen(string2) ; string2++) {
        if (letters[string2[j]] == 0 && number_of_repeats == 0) {
            // This character wasn't present in the previous string.
            // Therefore not an anagram
            return false;
        }

        // Control reaches here means the character is present in the first string
        letters[string2[j]]--;

        if (letters[string2[j]] == 0){
            number_of_completes++;
            if (number_of_unique_characters == number_of_completes ) {
                return j == (strlen(string2) - 1);
            }
        }
    }

    return false;
}

int main () {
    return 0;
}
