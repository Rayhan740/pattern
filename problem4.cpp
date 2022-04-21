#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 int n,row,col;
 cout<<"Enter the value of row: ";
 cin>>n;
 for(row=1;row<=n;row++){
   for(col=1;col<=row;col++){
	cout<<char(col+64)<<ends;//char(row+64)| if you want small letter col+96/row+96
   }
	cout<<endl;
 }
getch();
}
