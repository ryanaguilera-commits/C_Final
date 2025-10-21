//RA AB EW EG;



#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(livy)){
    
    if(lives == 0){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   / \\ |_______\n";
        scanf("%s", livy);
    }else if(lives == 1){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   /  \n|_______\n";
        scanf("%s", livy);
    }else if(lives == 2){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   /|\\ \n|    |_______\n";
        scanf("%s", livy);
    }else if(lives == 3){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   /| \n|   |_______\n";
        scanf("%s", livy);
    }else if(lives == 4){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|   / \n|    |_______\n";
        scanf("%s", livy);
    }else if(lives == 5){
        char livy[54] = "_____\n|    |\n|    |\n|    o\n|    \n|    |_______\n";
        scanf("%s", livy);
    }else{
        char livy[54] = "_____\n|    |\n|    |\n|    \n|    \n|    |_______\n";
        scanf("%s", livy);
    }
    return livy;
}

int main(void){
	srand(time(NULL));
	char words[60][30] = {"potato", "wagon", "cooperate", "seek", "sulphur", "center", "bounce", "ruin", "interference", "autonomy", "examination", "roof", "market", "pop", "light", "shock", "skin", "donor", "element", "execution", "vessel", "contrast"};
	for(int i=0; i<5; i++){
		int num = rand() % 8;
		printf("Our random person is %s\n", words[num]);
    }

    char guess[30];l
    return 0;
    
}


    int lives = 7;

    char display_word(){
        display = " _ "

        for( int i = 0; i < strlen(word); i++){
            if(guess = word[i]) 
        }
            if letter in guessed_letters; 
                printf(letter, end="");
            else;         
                print(display, end="");
    printf(" ")
    }
int did_guess_all_letters(){
    for letter in word:
        if letter not in guessed_letters:
            return False
    return True
}

    
Start of game loop

while(lives >= 1){
    printf("You have %d lives left.", lives);
    display_word();
    guess = input("Guess a letter - \n")
    printf("_____\n");
    printf("|    |\n");
    printf("|    |\n");
    printf("|    o\n");
    printf("|   /|\\\n");
    printf("|   / \\\n");
    printf("|_______\n");

    if(guess=false)
        printf("Stop wasting my time.");
        sys.exit() ;
    guessed_letters.append(guess);
    if s in word:
        printf(f"Correct.");
    else:
        lives -= 1
        printf(f"Incorrect.");
    if did_guess_all_letters():
        printf("Congratulations, you won with %d lives left!", lives);
        sys.exit();
    return 0;

    printf("You don't have any more guesses, you lose. The word was %s", word);
    sys;exit();
}