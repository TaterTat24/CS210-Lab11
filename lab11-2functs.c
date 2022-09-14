/** lab11-2functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 11-2
* Purpose: Implementation file for lab11-2.h
* ===========================================================
*/
#include <stdbool.h>// do I even need this? why not all libraries in the h file
#include <ctype.h>

#include "lab11-2functs.h"

bool isFirstHalfAlpha(char theChar) {
    theChar = toupper(theChar);
    if ((theChar >= 65) && (theChar <= 77)) {
        return true;
    }
    return false;
}

int typeOfChar(char theChar) {
    if (isalpha(theChar)) {
        theChar = toupper(theChar);
        switch (theChar) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'Y':
                return CHAR_IS_VOWEL;
                break;
            default:
                return CHAR_IS_CONSONANT;
                break;
        }
    }
    else {
        return CHAR_NOT_ALPHA;
    }
}

bool isMagicChar(char theChar) {
    if (theChar == MAGIC_CHAR) {
        return true;
    }
    else{
        return false;
    }
}