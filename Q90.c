// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

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
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 'a' + 'A';
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] - 'A' + 'a';
        }
    }
    printf("Modified string: %s\n", a);
    return 0;
}