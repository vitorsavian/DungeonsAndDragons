#include "./cli/cli.h"
#include "./utils/utils.h"
#include <stdio.h>

#define EXIT_SUCCESS 0

int main(int argc, char *argv[]) {
  int i;

  // this begins the CLI and make it work
  if (argc == 1 || isStrEqual(argv[1], "help")) {
    cliHelp();
    return EXIT_SUCCESS;
  };

  printf("Arguments:\n");
  for (i = 1; i < argc; ++i) {
    printf("  %d. %s\n", i, argv[i]);
  };

  return EXIT_SUCCESS;
}
