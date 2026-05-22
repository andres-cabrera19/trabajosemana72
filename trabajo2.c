#include <stdio.h>
float notas[] = {6.5, 7.1, 6, 5, 6.1};
float suma = 0;
int n = sizeof (notas) / sizeof (notas[0]);
int main(){
   for (int i = 0; i < 5; i++){
       printf("%.1f\n", notas[i]);
       suma = suma + notas[i];
   }
   printf("El promedio es %.2f", suma/n);
   return 0;
}