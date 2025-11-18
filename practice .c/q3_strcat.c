
#include <stdio.h>
#include <string.h>
int main() {
    char first[50], last[50];
    printf("Enter first name: ");
    gets(first);
    printf("Enter last name: ");
    gets(last);
    strcat(first, " ");
    strcat(first, last);
    printf("Full name: %s\n", first);
    return 0;
}
