#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%i", &a);
    scanf("%i%*c", &b);
    
    if (a > b)
       printf("A � maior que B");
    else if (b > a)
        printf("B � maior que A");
    else
        printf("A = B");
        
    getchar();
    return 0;
}

