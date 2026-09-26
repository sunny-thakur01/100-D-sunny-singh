// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            spaces++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}