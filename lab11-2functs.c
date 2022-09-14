/** lab11-2functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 11-2
* Purpose: Implementation file for lab11-2.h
* ===========================================================
*/
#include <stdbool.h>
#include <ctype.h>  

#include "lab11-2functs.h"

bool isFirstHalfAlpha(char theChar) {
    theChar = toupper(theChar);
    printf("%d", theChar); 
    if ((theChar >= 97) && (theChar <= 110)) {
        return true;
    }
    else {
        return false;
    }
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