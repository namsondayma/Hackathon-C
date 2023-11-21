#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
int main(){
	int n;
	int currentIndex=0;
	int arr[100];
	int numberOfElement=0;
	int max,min;
    int sum,divisor;
	do{
		printf("\n*************************MENU**************************\n");
		printf("1.Nhap gia tri n vao phan tu ua mang:\n");
		printf("2.In gia tri cac phan tu trong mang:\n");
		printf("3.Tinh tong cac phan tu chia het cho 2 va 3 trong mang:\n");
		printf("4.In ra gia tri phan tu lon nhat va phan tu nho nhat trong mang:\n");
		printf("5.Su dung thuat toan sap xep chen sap xep mang tang dan :\n");
		printf("6.Tinh tong cac phan tu la so nguyen to trong mang:\n");
		printf("7.Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan, cac phan tu chan chia het cho 5 o cuoi mang theo thu tu tang dan,cac phan tu con lai o giua mang theo thu tu giam dan:\n");
		printf("8.Nhap cac gia tri m tu ban phim , chen gia tri m vao mang (sap xep tang dan ) dung vi tri:\n");
		printf("9.Thoat\n");
		int choice;
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
					printf("Nhap so phan tu can nhap: ");
				scanf("%d",&n);
				printf("Nhap gia tri vao phan tu\n");
				for(int i=0;i<n;i++){
					printf("arr[%d]= ", currentIndex);
					scanf("%d", &arr[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
			    printf("Gia tri cac phan tu trong mang la:\n");
				for(int i=0;i<n;i++){
				printf("%d\t",arr[i]);}
				break;
			case 3:
				sum=0;
				for(int i=0;i<n;i++){
					if(arr[i]%2==0 && arr[i]%3==0){
						sum+=arr[i];
					}
				}printf("tong cac phan tu chia het cho 2 va 3 la:%d",sum);
				break;
			case 4:
						max = arr[0];
				        min = arr[0];
			    	for(int i=1;i<currentIndex;i++){
					if(max<arr[i]){
						max=arr[i];}
					if(min>arr[i]){
						min=arr[i];}
				}printf("\n");
				printf("So lon nhat trong mang la: %d\n",max);
				printf("So nho nhat trong mang la: %d\n",min);
				break;
			case 5:
                for(int i=0;i<currentIndex;i++){
			    int key = arr[i];
			    int j=i-1;
				while(j>=0 && arr[j]>key){
					arr[j+1]=arr[j];
					j=j-1;
				}
					arr[j+1]=key;
			   }
				printf("Sap xep mang tang dan: \n");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
			case 6:
                sum=0;
				for(int i=0;i<currentIndex;i++){
					numberOfElement=0;
					if(arr[i]>=2){
						for(int j=2;j<=sqrt(arr[i]);j++){
							if(arr[i]%j==0){
								numberOfElement=1;
								break;
							}
						}
					}else{
						numberOfElement=1;
					}
					if(numberOfElement==0){
					sum+=arr[i];
					}
				}
				printf("\nTong cac so nguyen to la: %d",sum);
				break;
			case 7:
			    break;
			case 8:
			    break;
			case 9:
				exit(0);
			default:
				printf("Khong hop le moi ban chon tu 1-9");			
		}
	} while(1==1);
} 
