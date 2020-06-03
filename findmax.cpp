#include <stdio.h>
 
int main(){
    float a, b, c;
    printf("Nhap 3 so a, b, c: \n");
    scanf("%f%f%f", &a, &b, &c);
 if (a >= b & a >= c){
         printf("Max = %f", a);
     }
     else if (b >= a & b >= c){
         printf("Max = %f", b);
	}
    else{
         printf("Max = %f", c);
 	}
}
