#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void life(int lives) {
    if (lives >= 6) {
        printf("_____\n|    |\n|    |\n|    \n|    \n|_______\n");
    } else if (lives == 5) {
        printf("_____\n|    |\n|    |\n|    o\n|    \n|_______\n");
    } else if (lives == 4) {
        printf("_____\n|    |\n|    |\n|    o\n|   / \n|_______\n");
    } else if (lives == 3) {
        printf("_____\n|    |\n|    |\n|    o\n|   /| \n|_______\n");
    } else if (lives == 2) {
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|_______\n");
    } else if (lives == 1) {
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   /  \n|_______\n");
    } else {
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   / \\ \n|_______\n");
    }
}

int main(void) {
    srand((unsigned)time(NULL));

	char words[60][30] = {"potato", "wagon", "cooperate", "seek", "sulphur", "center", "bounce", "ruin", "interference", "autonomy", "examination", "roof", "market", "pop", "light", "shock", "skin", "donor", "element", "execution", "vessel", "contrast", "coding", "python", "boring", "octopus"};

    const int word_count = sizeof(words) / sizeof(words[0]);
    const char *word = words[rand() % word_count];
    const int word_len = (int)strlen(word);

    bool guessed[26] = { false };
    int lives = 6;
    bool won = false;

    while (lives > 0 && !won) {
        life(lives);
        printf("You have %d lives left.\n", lives);

        bool all_guessed = true;
        printf("Word: ");
        for (int i = 0; i < word_len; i++) {
            char c = word[i];
            if (c >= 'a' && c <= 'z' && guessed[c - 'a']) {
                putchar(c);
            } else {
                putchar('_');
                all_guessed = false;
            }
        }
        printf("\n");

        if (all_guessed) {
            won = true;
            break;
        }

        char space_holder[64];
        char guess = '\0';
        printf("Please guess a letter: \n");

        if (!fgets(space_holder, sizeof(space_holder), stdin)) {
            printf("Bro stop playing try again.\n");
            continue;
        }

        for (size_t i = 0; space_holder[i] != '\0'; i++) {
            if (space_holder[i] >= 'A' && space_holder[i] <= 'Z') {
                guess = (char)(space_holder[i] - 'A' + 'a');
                break;
            } else if (space_holder[i] >= 'a' && space_holder[i] <= 'z') {
                guess = space_holder[i];
                break;
            }
        }

        if (guess == '\0') {
            printf("Stop playing try again.\n");
            continue;
        }

        int alphabet  = guess - 'a';
        if (alphabet < 0 || alphabet >= 26) {
            printf("Stop playing try again.\n");
            continue;
        }

        if (guessed[alphabet]) {
            printf("You already guessed '%c'. Try a different letter.\n", guess);
            continue;
        }

        guessed[alphabet] = true;

        bool correct = false;
        for (int i = 0; i < word_len; i++) {
            if (word[i] == guess) {
                correct = true;
            }
        }

        if (correct) {
            printf("Correct!\n");
        } else {
            printf("Incorrect :c \n");
            lives--;
        }
        printf("\n");
    }

    if (lives == 0) {
        life(0);
        printf("Sorry, the word was %s. \n", word);
    } else {
        printf("Congrats you had %d lives left\n", lives);
    }

    return 0;
}