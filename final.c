//RA AB EW EG Final C Project

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
    
//EW and AB
int main(livy){
    char liv;
    int lives = 0;
    if(lives == 0){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   / \\ |_______\n";
        scanf("%s", liv);
    }else if(lives == 1){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   /  \n|_______\n";
        scanf("%s", liv);
    }else if(lives == 2){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   /|\\ \n|    |_______\n";
        scanf("%s", liv);
    }else if(lives == 3){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   /| \n|   |_______\n";
        scanf("%s", liv);
    }else if(lives == 4){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   / \n|    |_______\n";
        scanf("%s", liv);
    }else if(lives == 5){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|    \n|    |_______\n";
        scanf("%s", liv);
    }else{
        char livy[54] = "_____\n|    |\n|    |\n|    \n|    \n|    |_______\n";
        scanf("%s", liv);
    }
    return liv;
    return 0;
}

//EG and RA
char display_word(char display, char guess){
    char display = " _ ";
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
        if (guess in guessed_letters); 
                printf(letter, end="");
            else:         
                print(display, end="");
    return display;
}
}



//AB
int main(void){
	srand(time(NULL));
	char words[60][30] = {"potato", "wagon", "cooperate", "seek", "sulphur", "center", "bounce", "ruin", "interference", "autonomy", "examination", "roof", "market", "pop", "light", "shock", "skin", "donor", "element", "execution", "vessel", "contrast", "coding", "python", "boring", "octopus"};
	for(int i=0; i<5; i++){
		int num = rand() % 8;
    };
    char guess[30];
    
    return 0;
}

    int lives = 7;


   
    int did_guess_all_letters(){
        for letter in word;
            if(letter not in guessed_letters);
                return False;
        return True;
    }

//Start of game loop
//EW putting the lives and 
    while(lives >= 1){
        printf("You have %d lives left.", lives);
        display_word();
        char guess; 
        printf("Guess a letter - \n");
        scanf("%s", guess)
        livy[lives]

        if(guess == false)
            printf("Stop wasting my time.");
            sys.exit();
        guessed_letters.append(guess);
        if(guess in word){
            printf("Correct.");
            livy[lives];
        }else if{
            lives -= 1;
            printf("Incorrect.");
            livy[lives];
        }else if(lives == 0){
            printf("you lost");
            printf("You don't have any more guesses, you lose. The word was %s", word);
            livy[lives];
        }else{
            printf("Congratulations, you won with %d lives left!", lives);
            sys.exit();
        }
        return 0;
    
    }