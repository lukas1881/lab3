#include <stdio.h>

int silnia=1;
int n=1;
int linia=1;
int main() {

  while (n<11) {
    silnia=silnia*n;
    printf ("%2d %25d\n" ,linia, silnia);
    n++;
    linia++;}

  return 0;

}
