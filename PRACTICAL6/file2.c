////////Sum of all even no using continue //////////
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        continue;
        sum=sum+i;
       
    }
    printf("Sum of all even number %d\n",sum);
    return 0;
}
///////output
////// let n=6 
    //////sum=12