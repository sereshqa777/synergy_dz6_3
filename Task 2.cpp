#include <stdio.h>
#include <cstring>

int main() {
  char myArray[100];
  strcpy(myArray, "Hello");

  printf("Start: %s\n", myArray);

  int index;
  printf("Vvedite simbol kotoriy udalit: ");
  scanf("%d", &index);

  int length = strlen(myArray);

  for (int i = index; i < length; i++) {
    myArray[i] = myArray[i + 1];
  }

  printf("Reg massiv: %s\n", myArray);

  return 0;
}
