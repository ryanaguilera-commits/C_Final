
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char guessed_letters[26];
int guessed_count = 0;
int lives = 5;


char display_word(){
    char display = '_';
    char guess;
    printf("Please guess a letter: \n");
    scanf("%c", &guess);
    srand(time(NULL));
	char words[60][30] = {"potato", "wagon", "cooperate", "seek", "sulphur", "center", "bounce", "ruin", "interference", "autonomy", "examination", "roof", "market", "pop", "light", "shock", "skin", "donor", "element", "execution", "vessel", "contrast", "coding", "python", "boring", "octopus"};
	int num = rand() % 8;
    int word_count = sizeof(words) / sizeof(words[0]);
    int selection = rand() % word_count;
    char *word = words[selection];
    guessed_letters[guessed_count] = guess;
    if(guess == guessed_letters){
        printf("Nice try");
    }
    for(int i = 0; i < strlen(word); i++){
        if(guess == word[i]) {
            printf("%c", word[i]);
        }else{
                printf("_");
        }            

    return display;
}
}

int main(void){

    while(lives > 0){
        display_word();
    }
}