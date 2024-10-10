#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
float r , area , circum ;
clrscr();
cout<<"Enter the value of radius:";
cin>>r;
area = 3.142 * r * r;
circum = 2 * 3.142 * r;
cout<<"area = "<<area<<endl,
cout<<"circum = " << circum<<endl;
getch();
}