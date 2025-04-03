//Implement a function that reverses a string using recursion

#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap characters at start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call with next positions
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    // Call the recursive function
    reverseString(str, 0, length - 1);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
