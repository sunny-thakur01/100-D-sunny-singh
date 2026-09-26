// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a string: ");
    if (fgets(a, sizeof(a), stdin) == NULL)
        return 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 'a' + 'A';
        }
    }

    printf("Uppercase string: %s", a);
    return 0;
}