//Print numbers from a to using loops.
#include <stdio.h>

int main() {
    int a;
    printf("Enter a :");
    scanf("%d",&a);
    int b;
    printf("Enter b :");
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        printf("%d",i);
    }

    return 0;
}

////Let a=5 and b=7
   // output=567