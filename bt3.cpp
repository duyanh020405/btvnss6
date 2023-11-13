#include <stdio.h>
int main(){
	int a,b,c,choice;	printf ("nhap ba so");
	scanf ("%d%d%d",&a,&b,&c);
	printf ("1.tinh tong 3 so");
	printf ("2.tinh trung binh cong 3 so");
	printf ("3.tim so lon nhat va so nho nhat");
	printf ("4.thoat");
	printf ("chon di");
	scanf ("%d",&choice);
	switch(choice){
		case 1:
			printf("tong 3 so = %d",a+b+c);
			break;
		case 2:
			int tong;
			tong=a+b+c;
			printf ("trung binh cong 3 so la =%d",tong/3);
			break;
		case 3:
			int max;
			 max=a;
			max=(a>b)?a:b;
			max=(c>b)?c:b;
			int min;
			 min=a;
			min=(a<b)?a:b;
			min=(c<b)?c:b;
			printf ("max = %d va min =%d",max,min);
			break;
		case 4:
			printf("ban da chon thoat");
			break;
			default:("khong co");
			break;
			}
	}
