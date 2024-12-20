#include<stdio.h>

int main()
{
	int answer , length ;
	int arr[100];
	int max,min, addNumber;
	int sum = 0;
    int deleteIndex;

	do{
		printf("    Menu\n");
		printf("1.Nhap gia tri phan tu vao trong mang .\n");
		printf("2.IN ra gia tri phan tu trong mang .\n");
		printf("3.Tim gia tri nho nhat va lan nhat trong mang\n");
		printf("4.IN ra tong cac phan tu trong mang.\n");
		printf("5.Them phan tu vao cuoi mang.\n");
		printf("6.Xoa phan tu yai mot vi tri cu  the\n");
		printf("7.Sap xep phan tu theo thu tu giam dan .\n");
		printf("8.Cho nguoi dung nhap vao mot phan tu , tim kiem xem phan tu co trong mang hay khong \n");
		printf("9.In ra toan bo so nguyen to trong mang .\n");
		printf("10.Sap xep mang theo thu tu tang dan.\n");
		printf("11.Thoat.\n");
		printf("Lau chon cua ban \n");
		scanf("%d",&answer);
		switch(answer)
		{
			case 1 : 
				printf("Moi ban nhap so luong cua mang :\n ");
				scanf("%d",&length);
				printf("Moi ban nhap gia tri phan tu :\n");
				for(int i = 0 ; i < length ; i++)
				{
					printf("arr[%d]=",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				printf("\n gia tri cac phan tu trong mang la \n");
				for(int i=0;i<length;i++){
					printf("arr[%d]=%d\n", i, arr[i]);

				}
				break;
			case 3:
				max = arr[0];
				min = arr[0];
				for(int i = 0;i < length;i++){
					if(arr[i] > max){
						max = arr[i];		
					}
				}
				for(int i = 0;i < length;i++){
					if(arr[i] < min){
						min = arr[i];
					}	
				}
				printf("gia tri lon nhat trong mang la : %d\n",max);
				printf("gia tri nho nhat trong mang la : %d\n",min);
				break;
			case 4:
			    for(int i = 0; i < length; i++){
			    	sum += arr[i]; 
				}
				printf("Tong cua cac phan tu trong mang la: %d\n", sum);
				break;
			case 5://Them phan tu vao cuoi mang
			    printf("Moi ban nhap gia tri muon them vao mang: \n");
			    scanf("%d", &addNumber);
			    arr[length] = addNumber;
			    length++;
			    printf("Gia tri cac phan tu trong mang la \n");
				for(int i=0;i<length;i++){
					printf("arr[%d]=%d\n", i, arr[i]);

				}
			    break;
            
			case 11:
				printf("Thoat chuong trinh");
				break;
			default:
				printf("Lua chon khong hop le.Vui long chon lai!");
		}
	}while(answer!=11);



	return 0 ; 
}
