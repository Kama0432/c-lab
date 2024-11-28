#include <stdio.h>

int main() {
    int i,j,len;
    char str[100],temp;

    printf("Enter a string: ");
    scanf("%s", str);

  len = strlen(str);

    // Reverse the string using a loop
    for ( i = 0, j = len - 1; i < j; i++, j--) {
         temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}