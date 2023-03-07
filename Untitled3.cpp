#include<stdio.h> 
void nhapmang(int n , int a[]){
	int i;
	for(i=0;i<=n;i++){
		printf("\nnhap vao a[%d] : " ,i );
		scanf("%d",&a[i]);
	}
}
	void xuatmang(int n, int a[]){
		for(int i =0;i<=n;i++){
			printf("%d",&a[i]); 
		} 
	} 
	void tangdan(int a[], int n ){
		int tang ;
		for( int i =0;i<=n;i++){
		for(int j =0; j<=n;j++){
			if(a[i]>a[j]);
			tang = a[i];
			a[i]=a[j];
			a[j]=tang;
			 
		} 
		} 
	}		 
int main(){
	int a[100] ; 
	int n;
	printf("\n nhap vao n ");
		scanf("%d",&n);
	for(int i=0; i<=n ;i++){
		if(n==0){
			printf("\n nhap lai n = ");
			break ; 
		} 
	}
    nhapmang(n,a);
	printf("\n mang vua nhap la : ");
	 xuatmang(n,a);
	 tangdan(a,n);
	 printf("\n sap xep tang dan la : ");
	 xuatmang(n,a); 
}
