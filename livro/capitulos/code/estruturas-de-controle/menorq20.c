#include <stdio.h>

int main() {
    int x;
    
    scanf("%d%*c", &x);
    
    if (x < 20)
       printf("o valor de X � menor que 20");
       
    getchar();       
    return 0;   
}
