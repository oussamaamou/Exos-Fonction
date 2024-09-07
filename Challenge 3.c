#include <stdio.h>

int Maximum(int x, int y){
    int Max;
    if (x>y)
        Max = x;
    else 
        Max = y;
    
    return Max;
}
int main(){
    int a, b, Max;
    printf("Veuillez entrer la valeur du premier nombre:");
    scanf("%d",&a);
    printf("Veuillez entrer la valeur du deuxieme nombre:");
    scanf("%d",&b);
    Max = Maximum(a,b);
    printf("Le maximum des deux nombres est : %d",Max);
    

    return 0;
}
