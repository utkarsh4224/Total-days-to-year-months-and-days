#include <stdio.h>
int main()
{
    int T_days, Year, Month, Days;	
	printf("Enter number of days : ");//1500
	scanf("%d",&T_days);//1500
	Year = T_days/365;//1500/365 = 4
	T_days = T_days-(365*Year);//1500-4*365=40
	Month = T_days/30;//40/30=1
	Days = T_days-(Month*30);//40-30=10
	printf("%d Year(s)\n%d Month(s)\n%d Day(s)",Year,Month,Days);//4 Year(s) 1 Month(s) 10 Day(s)
}





