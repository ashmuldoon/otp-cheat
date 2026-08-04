#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv) {
  if argc == 0 { pritnf("Please include arguments. ./otp-cheat < -i to create a random string of characters || -o to create a key that matches a string of characters to any message> <input> <message>"); return 1; }

  char **arguments = malloc(argc * sizeof(char *));

  if sizeof(arguments[1]) != sizeof(arguments[2]) { return 1; }

  for (int i = 0; i < argc; i++) {
    arguments[i] = argv[i]; 
  }



  free(arguments); 
  return 0;
}

void xorTwoStrings(const char *s1, const char *s2) {
  

}
