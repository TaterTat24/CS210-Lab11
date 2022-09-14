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

int typeOfChar() {

    return 0;
}

bool isMagicChar() {
    // For now, this function always returns false.  We will fix it later!
    return false;
}