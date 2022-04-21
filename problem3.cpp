#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 int n,row,col;
 cout<<"Enter the value of row: ";
 cin>>n;
 for(row=1;row<=n;row++){
   for(col=1;col<=row;col++){
	cout<<col%2<<ends;//try this out row%2
   }
	cout<<endl;
 }
getch();
}
