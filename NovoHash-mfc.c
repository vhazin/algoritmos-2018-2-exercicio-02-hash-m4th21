#include <stdio.h>

int main() {
  int t, a, b, x, n, c, d, m;
  scanf("%d \n", &t);
  int cont = 0;
  int form;
  int verificar[t];
  while(cont < t) {
    scanf("%d %d %d %d %d %d %d", &a, &b, &x, &n, &c, &d, &m);
    int y = x;
    verificar[cont] = 0;
    while (y <= (n + x)) {
    form = (a*y+b)%m;
    if (c <= form && form<=d)
      verificar[cont] = verificar[cont] + 1;
    y = y + 1;
    }
    cont = cont + 1;
  }
  cont = 0;
  while(cont < t) {
    printf("%d \n", verificar[cont]);
    cont = cont + 1;
  }
  return 0;
}
