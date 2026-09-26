// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            a[i] = '-';
        }
    }
    printf("Modified string: %s\n", a);
    return 0;
}