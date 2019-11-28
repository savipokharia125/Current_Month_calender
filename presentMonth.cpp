
#include<stdio.h>
#include<iostream>
using namespace std;
class calender
{
int mm,dd,wd,initial,totaldays;
int week[60];
public:
	void getdata()
	{
		cout<<"Enter today's date and month: ";
		cin>>dd>>mm;
		cout<<"\nEnter today's week day(1-7)(Remember week start's with Sunday!'): ";
		cin>>wd;
	}
	void weekHead()
	{
		cout<<"  Su  Mo  Tu  Wd  Th  Fr  Sa\n";
		cout<<"-------------------------------\n";
	}
	void tdays()
	{
		if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
		totaldays=31;
		else
		if(mm==2)
		totaldays=28;
		else
		totaldays=30;
		
	}
	void filldays()
	{
	int i,j,k=1,temp;
	tdays();
	while(dd>7)
	dd-=7;
	
	if(dd==1)
	initial=wd;
	else if(dd==2)
	initial=wd-1;
	else if(dd==3)
	initial=wd-2;
	else if(dd==4)
	initial=wd-3;
	else if(dd==5)
	initial=wd-4;
	else if(dd==6)
	initial=wd-5;
	else if(dd==7)
	initial=wd-6;
	
	if(initial==0)
	initial=7;
	else
	if(initial==-1)
	initial=6;
	else
	if(initial==-2)
	initial=5;
	else
	if(initial==-3)
	initial=4;
	else if(initial==-4)
	initial=3;
	else if(initial==-5)
	initial=2;
	else if(initial==-6)
	initial=1;
	
	
	
	j=1;
	weekHead();
	for(i=1;i<initial;i++)
{
		cout<<"    ";
		
		if(j%7==0)
		cout<<endl;	
		j++;
	}
j-=1;
	temp=j;
	
	for(i=initial;i<=totaldays+temp;i++)

{       if(k<=9)
		cout<<"   "<<k;
		else
		cout<<"  "<<k;
		j++;
		k++;
		if(j%7==0)
		cout<<endl;	
	}
	
}
};
int main()
{
	calender c;
	c.getdata();
	c.filldays();
	return 0;
}
