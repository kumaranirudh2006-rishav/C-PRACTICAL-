#include <stdio.h>
int main(){
    int pin,correctpin=1235;
    int attempt=3;
    while(attempt>0){
        printf("Enter your pin:");
        scanf("%d",&pin);
    
    if(pin==correctpin){
        printf("Access grand welcome\n");
        break;;
       }
        else{
        printf("Invalid pin");
    }
    return 0;
}
}
///////output////
///////Enter your pin:1235
////////Access grand welcome