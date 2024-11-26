#include <stdio.h>

int main(){
	int number;
	int tong;
	
	printf("Nhap vao 5 so nguyen: ");
	for (int i = 0; i < 5; i++){
			scanf("%d", &number);
			if(number % 2 == 1 ){
				tong += number ; 
			}
	}
	printf("Tong so le la: %d\n", tong);
	return 0;
}
    
        
    

    
    

    


