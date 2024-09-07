#include <stdio.h>

int minimum(int x, int y){
    int min;
    if (x<y)
        min = x;
    else 
        min = y;
    
    return min;
}
int main(){
    int a, b, min;
    printf("Veuillez entrer la valeur du premier nombre:");
    scanf("%d",&a);
    printf("Veuillez entrer la valeur du deuxieme nombre:");
    scanf("%d",&b);
    min = minimum(a,b);
    printf("Le minimum des deux nombres est : %d",min);
    

    return 0;
}
