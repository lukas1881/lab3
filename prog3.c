#include <stdio.h>

int i;

int main() {
  int tabela[] = {1, 2, 4, 6, 12};
  for (i=4; i>-1; i=i-1) printf ("%5d\n",tabela[i]);
  return 0;
}
