#include <stdio.h>
int sumofdigit(int n){
    int sum=0;
    while(n!=0){
        int a=n%10;
        sum=sum+a;
        n=n/10;
    }
    return sum;
}
int main(){
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=sumofdigit(n);
    printf("result=%d",result);
    return 0;
}
/////output////////
/*
Enter a number:4123
result=10
*/
