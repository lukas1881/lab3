#include <stdio.h>

int silnia=1;
int n;
int linia=0;
int i=0;
int main() {
  printf ("Podaj liczbę, z której chcesz obliczyć silnię\n");  
scanf("%d", &n);
  while (i<n) {
    i++;
    linia++;
    silnia=silnia*i;
    printf ("%2d!= %25d\n" ,linia, silnia);
    ;}

  return 0;

}
