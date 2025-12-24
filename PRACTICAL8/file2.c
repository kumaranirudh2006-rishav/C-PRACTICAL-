#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("after swap a=%d,b=%d",a,b);
    return 0;
    
}
/////output/////
/*
Enter a :4
Enter b :8
after swap a=8,b=4
*/