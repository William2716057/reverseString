
#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int first = 0;
    int last = strlen(str) - 1;
    char temp;

    while (first < last) {
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;

        first++;
        last--;
    }
}

int main()
{
    //char str[100] = "message to be reversed";
    char message[100];
    printf("Enter message: ");

    if (fgets(message, sizeof(message), stdin) != NULL) {

        message[strcspn(message, "\n")] = '\0';

        reverse(message);

        printf("Reversed: %s\n", message);
    }

    return 0;
}
