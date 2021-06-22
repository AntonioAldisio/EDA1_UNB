#include <stdio.h>

int main(void) {
  int n;
  int i;
  int np;
  int ns;
  int teste = 1;
  char prim[11];
  char seg[11];

  while (scanf("%d", &n)==1 && n) {
    scanf(" %s %s", prim, seg);

    printf("Teste %d\n", teste++);
    for (i=0; i<n; i++) {
      scanf("%d %d", &np, &ns);
      printf("%s\n", ((np+ns)%2 == 0 ? prim : seg));
    }
    printf("\n");
  }

  return 0;
}
