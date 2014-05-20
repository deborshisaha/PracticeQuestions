#include "isSubstring.h"
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

bool isSubstring(char *containerString, char *targetString) {
    char *iteratorTargetString = targetString;
    char *iteratorContainerString = containerString;
    bool found = false;

    while ( *iteratorContainerString != '\0' && found != true) {

        while( *iteratorTargetString != '\0' && *iteratorContainerString != '\0') {
            
            if(*iteratorTargetString == *iteratorContainerString) {
                iteratorContainerString++;
                iteratorTargetString++;
            } else {
                iteratorTargetString = targetString;
                iteratorContainerString++;
                break;
            }
        }

        if( *iteratorTargetString == '\0') {
            found = true;
        }

        if (*iteratorContainerString == '\0') {
            break;
        }
    }
    return found;
}
