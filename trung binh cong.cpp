#include <stdio.h>


void nhapmang(int a[], int &n){ 
	printf("nhap so phan tu :" );
    scanf("%d",&n);
    for(int i=0;i<n;i++){ 
 		printf(" phan tu thu %d :",i);
     	scanf("%d",&a[i]);
   }
}
void TBC(int a[],int n){	
	int i,s=0;
	printf("trung binh cong :");
	for(i=0;i<n;i++){
		s+=a[i];
	}
	printf("%d",i);
}

int main(){
  int a[50],n;
  nhapmang(a,n);
  TBC;
  return 0;
}
