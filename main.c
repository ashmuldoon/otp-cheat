#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  // take in argv, expected argc of two
  if (argc != 3) {
    fprintf(stderr, "requires two strings of equal length.");
    return EXIT_FAILURE;
  }

  // compare argv[1] to argc[2] (must be the same size)
  size_t len1 = strlen(argv[1]);
  size_t len2 = strlen(argv[2]);

  if (len1 != len2) {
     fprintf(stderr, "requires two strings of equal length.\n");
     return EXIT_FAILURE;
  }

  // xor them together
  char *result = malloc(len1+1);
  if (!result) {
    fprintf(stderr, "malloc fail");
    return EXIT_FAILURE;
  }

  for (size_t i = 0; i < len1; i++) {
    result[i] = argv[1][i] ^ argv[2][i];
  }

  result[len1] = '\0';

  // return the output

  for (size_t i = 0; i<len1; i++) {
    printf("%02x", (unsigned char)result[i]);
  }

  printf("\n");
  free(result);

  return 0;
}
