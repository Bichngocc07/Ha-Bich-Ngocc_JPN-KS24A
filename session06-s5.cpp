#include<stdio.h>
int main(){
	int ngay,thang,nam;
	printf("moi ban nhap vao so thang: %d\n");
	scanf("%d",&thang);
	printf("moi ban nhap vao so nam: %d\n");
	scanf("%d",&nam);




	if(thang<1||thang>12){
		printf("ban da nhap sai thang\n");
	}else if(thang==4||thang==6||thang==9||thang==11){
		ngay=30;
	}else if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
		ngay=31;
	}else if(thang==2){
		if((nam%4==0&&nam%100!=0)||(nam%400==0)){
			ngay=29;
		}else{
			ngay=28;
		}
	}

	printf("thang %d nam %d co %d ngay\n",thang,nam,ngay);







	return 0;
}
