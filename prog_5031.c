#include <stdio.h>
    int main() 
    {
            int number1, number2, addition;
            printf("Enter two numbers for addition: ");
            scanf("%d %d", &number1, &number2);
            addition = number1 + number2;
            printf("Addition of two numbers are,\n");
            printf("%d + %d = %d", number1, number2, addition);
            return 0;
    }     
