#include <stdio.h>
 
int main() {
 
   int notas[7] = {100, 50, 20, 10, 5, 2, 1};
   int quantidade;
   
   scanf("%d", &quantidade);
   printf("%d\n", quantidade);
   
   for(int i = 0; i < 7; i++){
       int count = quantidade / notas[i];
       quantidade %= notas[i];

       printf("%d nota(s) de R$ %d,00\n", count, notas[i]);
   }
  
    return 0;
}