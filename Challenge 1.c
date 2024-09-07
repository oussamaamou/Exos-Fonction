#include <stdio.h>
int Somme(int x,int y){
    return (x+y);
}
int main() {
   int a, b, S;
   printf("Veuillez entrer la valeur du premier nombre:");
   scanf("%d",&a);
   printf("Veuillez entrer la valeur du deuxieme nombre:");
   scanf("%d",&b);
   S = Somme(a,b);
   printf("La somme des deux nombres est : %d ", S);
   
    return 0;
}
