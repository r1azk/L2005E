#include <stdio.h>


void nhapmang(int a[], int &n){ 
	printf("nhap so phan tu :" );
    scanf("%d",&n);
    for(int i=0;i<n;i++){ 
 		printf(" phan tu thu %d :",i);
     	scanf("%d",&a[i]);
   }
}
void sochancuoicung(int a[],int n){
 	int x;
 	printf("so chan cuoi cung : ");
 	for (int i=0;i<n;i++){
 		if (a[i]%2==0)x=a[i];
 		else{
 			printf("No EVEN number");
		}
	}
	printf("%d",x);
}
int main(){
  int a[50],n;
  nhapmang(a,n);
  sochancuoicung(a,n);
  return 0;
}
