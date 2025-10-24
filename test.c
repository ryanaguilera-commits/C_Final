#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


tatic void print_hangman(int lives) {
    if (lives >= 6) {
        printf("_____\n|    |\n|    |\n|    \n|    \n|    |_______\n");
    } else if (lives == 5) {
        printf("_____\n|    |\n|    |\n|    o\n|    \n|    |_______\n");
    } else if (lives == 4) {
        printf("_____\n|    |\n|    |\n|    o\n|   / \n|    |_______\n");
    } else if (lives == 3) {
        printf("_____\n|    |\n|    |\n|    o\n|   /| \n|   |_______\n");
    } else if (lives == 2) {
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|    |_______\n");
    } else if (lives == 1) {
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   /  \n|_______\n");
    } else {
        printf("_____\n|    |\n|    |\n|    o\n|   /|\\ \n|   / \\ \n|_______\n");
    }
}

const char *choose_random_word(void) {
    static const char *words[] = {
        "potato", "wagon", "cooperate", "seek", "sulphur", "center",
        "bounce", "ruin", "interference", "autonomy", "examination",
        "roof", "market", "pop", "light", "shock", "skin", "donor",
        "element", "execution", "vessel", "contrast", "coding",
        "python", "boring", "octopus"
    };
    int word_count = sizeof(words) / sizeof(words[0]);
    int idx = rand() % word_count;
    return words[idx];
}

/* Update display with guessed letter; returns true if guess was present. */
bool update_display(const char *word, char display[], char guess) {
    bool found = false;
    for (size_t i = 0; i < strlen(word); i++) {
        if (word[i] == guess && display[i] == '_') {
            display[i] = guess;
            found = true;
        }
    }
    return found;
}

bool is_word_guessed(const char display[]) {
    for (size_t i = 0; display[i] != '\0'; i++) {
        if (display[i] == '_') return false;
    }
    return true;
}

int main(void) {
    srand((unsigned) time(NULL));

    const char *word = choose_random_word();
    size_t len = strlen(word);
    char display[128];
    if (len + 1 > sizeof(display)) {
        printf(stderr, "Word too long\n");
        return 1;
    }
    for (size_t i = 0; i < len; i++) display[i] = '_';
    display[len] = '\0';

    int lives = 6;
    char input[32];

    printf("Welcome to Hangman!\n");

    while (lives > 0 && !is_word_guessed(display)) {
        print_hangman(lives);
        printf("Word: %s\n", display);
        printf("You have %d lives left.\n", lives);
        printf("Guess a lowercase letter: ");

        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("Input error.\n");
            break;
        }

        // take first non-newline character
        char guess = input[0];
        if (guess == '\n' || guess == '\0') {
            printf("Please enter a letter.\n");
            continue;
        }

        if (guess < 'a' || guess > 'z') {
            printf("Please enter a lowercase letter a-z.\n");
            continue;
        }

        if (update_display(word, display, guess)) {
            printf("Correct!\n");
        } else {
            lives--;
            printf("Incorrect.\n");
        }
        printf("\n");
    }

    if (is_word_guessed(display)) {
        printf("Congratulations, you won with %d lives left! The word was: %s\n", lives, word);
    } else {
        print_hangman(0);
        printf("You don't have any more guesses, you lose. The word was: %s\n", word);
    }

    return 0;
}