//AKSHAY KUMAR JAIN
//30 September 2019
#include<stdio.h>
#include<conio.h>
int leap(int year){
if(year%400==0 || year%4==0)
return(1);
return(0);
}
int dayofweek(int y){
static int ta[]={0,3,2,5,0,3,5,1,4,6,2,4};
y-=1;
return((y+y/4-y/100+y/400+ta[0]+1)%7);
}
void main(){
char wname[7][20]={"Sun","Mon","Tues","Wed","Thrus","Fri","satur"};
char mname[12][50]={"january","February","March","April","May","June","July","August","September","October","Novmber","December"};
int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
int year,n=0,j=1,k=1,p=0,t1=0,t2=7;
clrscr();
printf("Enter A year Which You Want To Know : ");
scanf("%d",&year);
k=dayofweek(year)+1;
if(leap(year))
month[1]+=1;
while(n<12)
{
	printf("--------------------%s  %d--------------------\n",mname[n],year);
	while(t2-->0){
	printf("%s\t",wname[t1++]);
	if(t1==7)
	t1=0;
	}
	t2=7;
	printf("\n");
	j=1;
	if(k!=1){
	p=k;
	while(p-->1){
	printf("\t");}
	}
	for(j=1;j<=month[n];j++)
	{
		printf("%d\t",j);
		k++;
		if(k%8==0)
		{
		k=1;
		printf("\n");
		}
	}
printf("\n");
printf("\nPress Enter Key To Continue: \n");
getch();
n++;
}
getch();
}