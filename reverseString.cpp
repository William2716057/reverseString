
#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int first = 0; //initialise first index
    int last = strlen(str) - 1; //initialise last index based on string length
    char temp; //temporary variable for swapping

    //loop until two indexes meet
    while (first < last) {
        //swap characters at first and last index
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;

        //move indexes
        first++;
        last--;
    }
}

int main()
{

    char message[100];
    printf("Enter message: ");

    if (fgets(message, sizeof(message), stdin) != NULL) {

        message[strcspn(message, "\n")] = '\0';

        reverse(message);

        printf("Reversed: %s\n", message);
    }

    return 0;
}
