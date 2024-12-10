#include <stdio.h>
void inmang(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("phan tu thu %d la %d",i,arr[i]);
		printf("\n");
	}
	
}
int main(){
	int i,n;

	printf("moi ban nhap vao so phan tu cua mang \n");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		printf("\nphan tu thu %d\n",i+1);
		scanf("%d",&array[i]);
		
	}
	inmang(array,n);
    return 0;
}





