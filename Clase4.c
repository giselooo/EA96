#include <ctype.h>
#include <stdio.h>
#include <string.h>
void getInput(char *word){
        printf("Hola, ingresa una palabra sin caracteres especiales ni espacios y en minusculas:\n");
        scanf("%s", word);

        for (int i = 0; word[i] != '\0'; i++) {
            if (!isalpha(word[i])) {
                printf("Error");
            }
        }
    }
int isPalindrome(char *word) {
    int lon = strlen(word);
    for (int i = 0; i < lon / 2; i++) {
        if (word[i] != word[lon - i - 1]) {
            return 0;

        }

    }
    return 1;


    }
int main() {
    char word[100];
    getInput(word);

    if (isPalindrome(word)) {
        printf("'%s'palindromooo");
    }else {
        printf("'%s'No ps no es");
    }
    return 0;
}



