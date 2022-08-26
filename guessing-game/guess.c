#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LINE_MAX 100

int main() {
  /* Generate random number */
  srand(time(NULL));
  int r = (rand() % 100) + 1;
  char str[100];
  int guess;

  printf("Guess a number between 1 and 100: ");
  char *p, s[100];
  int n;

  while (fgets(s, sizeof(s), stdin)) {
    n = strtol(s, &p, 10);
    if (p == s || *p != '\n') {
      printf("Please enter an integer: ");
    } else if (n < r) {
      printf("Too small.\n");
      printf("Try again: ");
    } else if (n > r) {
      printf("Too big.\n");
      printf("Try again: ");
    } else
      break;
  }
  printf("You guessed correctly! Hooray! You win!\n");
  printf("\n");

  return 0;
}
