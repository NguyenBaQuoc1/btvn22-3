#include<stdio.h>

int main(){
 int c, n, giaithua = 1;
 printf("nhap so de tinh giai thua\n");
 scanf("%d", &n);
 for (c = 1; c <= n; c++)
   giaithua = giaithua * c;
 printf("giai thua cua %d = %d\n", n, giaithua);
 return 0;

}


