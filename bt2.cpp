#include <stdio.h> 
main()
{
int number1, number2,bcnn;
int choice;
	printf("nhap 2 so :\n");
    scanf("%d%d",&number1 , &number2);
	printf("1. tong 2 so\n") ;
	printf("2.hieu 2 so\n ") ;
	printf("3.tich 2 so\n ") ;
	printf("4.thuong 2 so\n") ;
	printf("5.so du phep chia 2 so\n") ;
	printf("6.uoc chung lon nhat\n ") ;
	printf("7.boi chung nho nhat\n ") ;
    printf("chon di\n ") ;
    scanf ("%d",&choice); 
    switch(choice){
    case 1:
    	printf ("tong bang =%d",number1+number2);
    	break;
    case 2:
    	printf ("hieu bang =%d",number1-number2);
    	break;
    case 3:
    	printf ("tich = %d", number1 *number2);
    	break;
    case 4:
         printf("thuong = %f",(float)number1/number2);
		 break;
    case 5:
	     printf ("so du = %d",number1%number2);
	     break;
	case 6:
		int ucln;
		if(number1==0||number2==0)
		{
		ucln=number1+number2;
		}
		else 
		{
			while (number1!=number2)
			{
			if(number1>number2)
			{number1=number1-number2;}
			else
			{number2=number2-number1;}		
			}
			ucln=number1;
		}
		printf ("ucln=%d",ucln);
		case 7:
			int bcnn;
		if(number1==0||number2==0)
		{
		ucln=number1+number2;
		}
		else 
		{
			while (number1!=number2)
			{
			if(number1>number2)
			{number1=number1-number2;}
			else
			{number2=number2-number1;}		
			}
			ucln=number1;
		}
		printf ("bcnn=%d",(number1*number2)/ucln);
	 }
}
