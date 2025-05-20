// Program Statement 7:
// In a Google web search engine, the user types a string. 
// Design a C program to check if a substring is present in the given string.

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    char subString[100];

    // Question: What is the main string you want to search in?
    printf("Enter the main string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character if present
    inputString[strcspn(inputString, "\n")] = '\0';

    // Question: What is the substring you want to find?
    printf("Enter the substring to search for: ");
    fgets(subString, sizeof(subString), stdin);

    // Remove newline character if present
    subString[strcspn(subString, "\n")] = '\0';

    // Check if the substring is present in the main string
    if (strstr(inputString, subString) != NULL) {
        printf("Substring '%s' is present in the main string.\n", subString);
    } else {
        printf("Substring '%s' is not present in the main string.\n", subString);
    }

    return 0;
}

/*
Sample Input/Output:

Enter the main string: hello
Enter the substring to search for: llo
Substring 'llo' is present in the main string.

---

Enter the main string: openai chatgpt
Enter the substring to search for: gpt
Substring 'gpt' is present in the main string.

---

Enter the main string: codewithme
Enter the substring to search for: java
Substring 'java' is not present in the main string.
*/
