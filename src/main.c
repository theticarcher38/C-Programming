#include <stdio.h>
#include "./int_print.h"

int main()
{
    int usr_input;
    printf("Please enter a number: ");
    scanf("%d", &usr_input);
    printf("Your number is %d\n", usr_input);
    int_print(4);
    return 0;
}