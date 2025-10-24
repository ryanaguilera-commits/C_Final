//RA AB EW EG Final C Project

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int lives = 5;
//EW and AB
int life(void){

    if(lives == 6){
        printf("_____\n|    |\n|    |\n|    \n|    \n|_______\n");
    }else if(lives == 5){
        printf("_____\n|    |\n|    |\n|    o\n|    \n|_______\n");
    }else if(lives == 4){
        printf("_____\n|    |\n|    |\n|    o\n|   / \n|_______\n");
    }else if(lives == 3){
        printf("_____\n|    |\n|    |\n|    o\n|   /| \n|_______\n");
    }else if(lives == 2){
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|_______\n");
    }else if(lives == 1){
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   /  \n|_______\n");
    }else{
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   / \\ \n|_______\n");
    }
    
    return 0;
}
char guessed_letters[26];
int guessed_count = 0;


char display_word(){
    char display = '_';
    char guess;
    printf("Please guess a letter");
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

// EW putting the lives and 
bool did_guess_all_letters(const char *word, const bool guessed_letters[26]) {
    for (int i = 0; i < strlen(word); i++) {
        if (!guessed_letters[word[i] - 'a']) {
            return false;
        }
    }
    while(lives > 0){
        display_word();
    }
    return true;
}  

int main(void){
    life();
    
    while(lives >= 1){
    printf("You have %d lives left.", lives);
    display_word();
    char guess; 
    printf("Guess a letter - \n");
    scanf("%s", guess);
    life();

    if(guess == false){
        printf("Stop wasting my time.");
        sys.exit();
        guessed_letters.append(guess);
    if(guess in word){
        printf("Correct.");
        life();
    }else if{
        lives -= 1;
        printf("Incorrect.");
        life();
    }else if(lives == 0){
        printf("you lost");
        printf("You don't have any more guesses, you lose. The word was %s", word);
        life();
    }else{
        printf("Congratulations, you won with %d lives left!", lives);
        sys.exit();
    }
    return 0;
    }
    }
}