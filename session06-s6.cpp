#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){
		if(i%15==0){
			printf("bizzpuzz\n");
		}else if(i%3==0){
			printf("puzz\n");
		}else if(i%5==0){
			printf("bizz\n");
		}else{
			printf("%d\n",i);
		}




	}


	return 0;
}
