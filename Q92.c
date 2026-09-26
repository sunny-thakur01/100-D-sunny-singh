// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    // Logic to find the first repeating lowercase alphabet would go here
    for (int i = 0; a[i] != '\0'; i++)
    {
        for (int j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] == a[j] && a[i] >= 'a' && a[i] <= 'z')
            {
                printf("First repeating lowercase alphabet: %c\n", a[i]);
                return 0;
            }
            else if (a[i] == a[j] && (a[i] < 'a' || a[i] > 'z'))
            {
                // If the character is not a lowercase alphabet, continue searching
                printf("No repeating lowercase alphabet found.\n");
                continue;
            }
        }
    }

    return 0;
}