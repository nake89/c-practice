#include <stdio.h>
#include <stdlib.h>
struct key_value {
  int key;
  char* value;
};

int main(void) {
  int number_of_keys = 2;
  struct key_value* kv = malloc(sizeof(struct key_value) * number_of_keys);
  if (kv == NULL) {
    perror("Malloc");
    exit(EXIT_FAILURE);
  }
  kv[0].key = 8;
  kv[0].value = "Test 8 key!";

  kv[1].key = 6;
  kv[1].value = "Test 6 key!";

  printf("Key = %d\nKey value = %s\n", kv[0].key, kv[0].value);
  printf("Key = %d\nKey value = %s\n", kv[1].key, kv[1].value);

  free(kv);
  return 0;
}
