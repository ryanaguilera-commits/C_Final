//RA AB EW EG Final C Project

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
    
//EW and AB
int life(void){
    if(lives == 6){
        printf("_____\n|    |\n|    |\n|    \n|    \n|    |_______\n");
    }else if(lives == 5){
        printf("_____\n|    |\n|    |\n|    o\n|    \n|    |_______\n");
    }else if(lives == 4){
        printf("_____\n|    |\n|    |\n|    o\n|   / \n|    |_______\n");
    }else if(lives == 3){
        printf("_____\n|    |\n|    |\n|    o\n|   /| \n|   |_______\n");
    }else if(lives == 2){
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|    |_______\n");
    }else if(lives == 1){
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   /  \n|_______\n");
    }else{
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   / \\ \n|_______\n");
    }
}

//EG and RA
char display_word(char guess){
    char display = '_';
    srand(time(NULL));
	char words[60][30] = {"potato", "wagon", "cooperate", "seek", "sulphur", "center", "bounce", "ruin", "interference", "autonomy", "examination", "roof", "market", "pop", "light", "shock", "skin", "donor", "element", "execution", "vessel", "contrast", "coding", "python", "boring", "octopus"};
	int num = rand() % 8;
    int word_count = sizeof(words) / sizeof(words[0]);
    int selection = rand() % word_count;
    char word[30] = words[selection];
    char guessed_letters[] = guess;
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
}

//AB
int main(void){
    char guess[30];
    printf("Please enter a lowercase letter:");
    scanf("%c", &guess);
    display_word(guess);
    return 0;
}
bool did_guess_all_letters(const char *word, const bool guessed_letters[26]) {
    for (int i = 0; i < strlen(word); i++) {
        if (!guessed_letters[word[i] - 'a']) {
            return false;
        }
    }
    return true;
}
   

// EW putting the lives and 
while(lives >= 1){
    printf("You have %d lives left.", lives);
    display_word();
    char guess; 
    printf("Guess a letter - \n");
    scanf("%s", guess)
    life[]

    if(guess == false)
        printf("Stop wasting my time.");
        sys.exit();
        guessed_letters.append(guess);
    if(guess in word){
        printf("Correct.");
        life[];
    }else if{
        lives -= 1;
        printf("Incorrect.");
        life[];
    }else if(lives == 0){
        printf("you lost");
        printf("You don't have any more guesses, you lose. The word was %s", word);
        life[];
    }else{
        printf("Congratulations, you won with %d lives left!", lives);
        sys.exit();
    }
    return 0;
}