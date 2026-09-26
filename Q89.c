// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char ch;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    printf("Enter a character: ");
    scanf(" %c", &ch);
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ch)
        {
            count++;
        }
    }
    printf("Frequency of '%c': %d\n", ch, count);
    return 0;
}