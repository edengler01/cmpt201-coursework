#include <stdio.h>
#include <stdlib.h>

// code built off of c-for-dummies section on getLine example
int main() {
  char *buffer;
  size_t bufsize = 32;
  size_t characters;

  buffer = (char *)malloc(bufsize * sizeof(char));
  if (buffer == NULL) {
    perror("Unable to allocate buffer");
    exit(1);
  }

  printf("Please enter some text: ");
  characters = getline(&buffer, &bufsize, stdin);
  printf("You typed: '%s'\n", buffer);

  free(buffer);
  return 0;
}
