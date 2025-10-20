//RA AB EW EG
______
|    |
|    |
|    O
|   /|\
|   / \
|_______




#include <stdio.h>
#include <string.h>

int main(void){
    word_list = 
    word = random.choice(word_list)
    int lives = 7
    guessed_letters = []

    def display_word():
        display = " _ "

        for letter in word:
            if letter in guessed_letters: 
                printf(letter, end="") 
        else:            
            print(display, end="")
    printf(" ")

def did_guess_all_letters():

    for letter in word:
        if letter not in guessed_letters:
            return False
    return True
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

    if len(guess) > 1:
        printf("Stop wasting my time.")
        sys.exit() 
    guessed_letters.append(guess)
    if guess in word:
        printf(f"Correct.")
    else:
        lives -= 1
        printf(f"Incorrect.")
    if did_guess_all_letters():
        printf("Congratulations, you won with %d lives left!", lives)
        sys.exit()
    return 0;
}
    printf("You don't have any more guesses, you lose. The word was %s", word);
    sys;exit();
