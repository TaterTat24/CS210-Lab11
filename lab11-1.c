/** lab11-1.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 11-1
* Purpose: Selection (Switch-Case)
* ===========================================================
*/

#include <stdio.h>
#include <ctype.h>

#include "lab"

int main() {

    // Step 1:  Ask for the House Name
    char houseName;
    printf("Enter the first letter of your house: ");
    scanf("%c", &houseName);

    houseName = toupper(houseName);

    // Step 2:  Create a Switch Statement
    switch (houseName) {
    case 'G':
        printf("Your house is Gryffindor\n");
        printf("Your founder is Godric Gryffindor\n");
        printf("Your house colours are scarlet and gold\n");
        break;
    case 'R':
        printf("Your house is Ravenclaw\n");
        printf("Your founder is Rowena Ravenclaw\n");
        printf("Your house colours are blue and bronze\n");
        break;
    case 'H':
        printf("Your house is Hufflepuff\n");
        printf("Your founder is Helga Hufflepuff\n");
        printf("Your house colours are yellow and black\n");
        break;
    case 'S':
        printf("Your house is Slytherin\n");
        printf("Your founder is Salazar Slytherin\n");
        printf("Your house colours are green and silver\n");
        break;
    default:
        printf("No house starts with that letter\n");
        break;
    }

    return 0;
}
