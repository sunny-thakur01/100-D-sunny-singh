// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            for (int j = i; a[j] != '\0'; j++)
            {
                a[j] = a[j + 1];
            }
            i--;
        }
    }
    printf("String after removing vowels: %s", a);
    return 0;
}