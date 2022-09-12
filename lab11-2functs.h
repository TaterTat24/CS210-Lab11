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
* @brief This function takes a single character as an input argument and returns true if the character is in the range A to M or a to m (both inclusive).
* @param 
* @return
* @pre
* @post
*/
bool isFirstHalfAlpha();

/**
* @brief This function takes a single character as an input argument and determines if the value is a vowel (a, e, i, o, u, y) or consonant.
* @param 
* @return
* @pre
* @post
*/
int typeOfChar();

/**
* @brief This function takes a single character as an input argument and determines if the value is 'the magic character' (to be defined later).
* @param 
* @return
* @pre
* @post
*/
bool isMagicChar();

#endif