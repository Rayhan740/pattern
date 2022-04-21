#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 int n,row,col;
 cout<<"Enter the desired value: ";
 cin>>n;
 for(row=1;row<=n;row++){
	for(col=1;col<=n-row;col++){
		cout<<" "<<ends;
	}
    for(col=1;col<=row;col++){
		cout<<col<<ends;
    }
    cout<<endl;
 }
getch();
}
