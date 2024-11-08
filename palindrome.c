#include<stdio.h>
#include<string.h>

void lower(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

char* rev(char str[]) {
    static char ch[100];
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        ch[i] = str[length - 1 - i];
    }
    ch[length] = '\0';
    return ch;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';  

    lower(str);
    char* reversestr = rev(str);
    
    if (strcmp(str, reversestr) == 0) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }

    return 0;
}
