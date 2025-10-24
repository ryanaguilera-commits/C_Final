#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 30
#define MAX_GUESSES 6

// Hangman display based on lives left
void display_hangman(int lives) {
    const char *stages[] = {
        "_____\n|   |\n|    \n|    \n|    \n|_______\n",       // 6 live
