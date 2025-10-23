#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

char display_word(char guess){
    char display = '_';
    srand(time(NULL));
	char words[60][30] = {"potato", "wagon", "cooperate", "seek", "sulphur", "center", "bounce", "ruin", "interference", "autonomy", "examination", "roof", "market", "pop", "light", "shock", "skin", "donor", "element", "execution", "vessel", "contrast", "coding", "python", "boring", "octopus"};
	int num = rand() % 8;
    int word_count = sizeof(words) / sizeof(words[0]);
    int selection = rand() % word_count;
    char *word = words[selection];
    char guessed_letters[10];
    char guessed_count = 0;
    guessed_letters[guessed_count++] = guess;
    if(guess == guessed_letters){
        printf("Nice try");
    }
    for(int i = 0; i < strlen(word); i++){
        if(guess = word[i]) {
            printf("%c", word[i]);
        }else{
                printf("_");
        }            


    return display;
}

int main(void){

    display_word("a");
    return 0;
}