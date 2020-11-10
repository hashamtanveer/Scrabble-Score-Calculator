#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max_value 1000

int final_value(char *given_word);
int character_value( char character );
int All_values[] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10 };

int character_value( char character )
{
    return(All_values[toupper((int)character) - 'A']);  
} 

int final_value(char *given_word)
{
    int i=0;
    int value=0;
    for (i=0; i<strlen(given_word); i++)
    {
        value += character_value(given_word[i]);
    }
    return value;
}
int main()
{
    char word[max_value];
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Scrablle value: %d\n", final_value(word));
    return 0;
}