// Pseudocode

/*

BEGIN
    
    Option <-- Select to decipher or cipher
    READ O
    S <-- input sentence
    READ S
    WHILE
        ConvertS <-- convert cipher sentence into plaintext or plaintext to cipher
        PRINT <-- ConvertS
    ENDWHILE

END

*/

#include <stdio.h>
#include <ctype.h>

int main() {

    int option, key, i=0, sNum;
    char ch, sentence[100];

    printf("\n Enter the option \n 1) Cipher message \n 2) Decipher message \n 3) Exit Caesar Cipher \n");
    scanf("%d", &option);

    if (option == 1)
    {
        printf("Enter the key: ");
        scanf("%d", &key);
        fflush (stdin);

        printf("\nEnter the sentence to encrypt: \n");
        fgets(sentence, sizeof(sentence), stdin);
        printf(sentence);

        while(sentence[i] != '\0') {
            if (sentence[i]==' ' || sentence[i]=='\n') {
                ch = ' ';
            }
            else {
                sNum = ((int)sentence[i] - (int)'a' + key) %26 + (int)'a';
                ch = (char)(sNum);
            }
            printf("%c", ch);
            i++;

        }

    }
    else if (option == 2)
    {
        printf("Enter the key: ");
        scanf("%d", &key);
        fflush(stdin);

        printf("\nEnter the sentence to decrypt: ");
        fgets(sentence, sizeof(sentence), stdin);
        printf(sentence);

                while(sentence[i] != '\0') {
            if (sentence[i]==' ' || sentence[i]=='\n') {
                ch = ' ';
            }
            else {
                sNum = ((int)sentence[i] - (int)'a' - key) %26 + (int)'a';
                ch = (char)(sNum);
            }
            printf("%c", ch);
            i++;
            
        }

    }   
    else {
        printf("Exiting program...");
    }
    
}