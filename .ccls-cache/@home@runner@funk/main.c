#include <stdio.h>
int kks(int n, int n2){
  return n + n2;
}
int main(void) {
  int t1,t2;
  scanf("%d", &t1);
  scanf("%d", &t2);
  kks(t1, t2);
  printf("%d\n", kks(t1, t2));
  printf("Hello World\n");
  return 0;
}