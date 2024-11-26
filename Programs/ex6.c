#include <stdio.h>

int main() {
    char c;
    printf("Enter a letter between 'a' and 'y' or between 'A' and 'Y' : ");
    scanf(" %c", &c);
    while (!((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))) {
        printf("Error. Please enter a letter between 'a' and 'y' or between 'A' and 'Y' : ");
        scanf(" %c", &c);
    }
    if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y')) {
        printf("The letter that comes after the letter %c is the letter %c", c, c + 1);
    }
    return 0;
}
