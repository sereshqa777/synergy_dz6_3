#include <stdio.h>
#include <cstring>

int main() {
  char myArray[100];
  strcpy(myArray, "Hello");

  int length = strlen(myArray);
  char lastElement = myArray[length - 1];

  printf("Posledniy element: %c\n", lastElement);

  char temp = myArray[0];
  myArray[0] = lastElement;
  myArray[length - 1] = temp;

  printf("Reg massiv: %s\n", myArray); 

  return 0;
}
