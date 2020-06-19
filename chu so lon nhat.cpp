#include <stdio.h>


int main(){
    int k,n,max;
    printf("Nhap n = ");
    scanf("%d",&n);
    while(n){
        k=n%10;
        if(k>max){
            max=k;
        }
        n/=10;
    }
    printf("Chu so lon nhat la : %d\n",max);
}
