/** lab11-2functs.h
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 11
* Purpose: Header file for lab11-2
* ===========================================================
*/
#ifndef LAB11_2functs_H
#define LAB11_2functs_H

#include <stdbool.h>

#define CHAR_IS_VOWEL     0
#define CHAR_IS_CONSONANT 1
#define CHAR_NOT_ALPHA    2
#define MAGIC_CHAR       '@'

/**
* @brief This function checks if input character is in the first half of the alphabet
* @param theChar takes a single character as an input argument
* @return Returns true if the character is in the range A to M or a to m (both inclusive).
* @pre N/A
* @post N/A
*/
bool isFirstHalfAlpha(char theChar);

/**
* @brief This function checks if input character is a vowel, constant, or neither
* @param theChar takes a single character as an input argument
* @return Returns value if the input character is a vowel, constant, or not a alphabet character
* @pre N/A
* @post N/A
*/
int typeOfChar(char theChar);

/**
* @brief This function checks if the input argument is 'the magic character' (to be defined later).
* @param theChar takes a single character as an input argument
* @return Returns value if the input character is 'the magic character'
* @pre
* @post
*/
bool isMagicChar(char theChar);

#endif