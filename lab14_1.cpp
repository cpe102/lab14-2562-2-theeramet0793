# include <iostream>
#include<string>
#include<iomanip>
 using namespace std;


int main(){
	//Write your code here.
	int a=5;
	string b="A";
	string &c=b;
	int  *x=&a;
	string *y=&b;
	int **z=&x;
	cout<<"\n\n\n";
	cout<<setw(10)<<"a"<<setw(10)<<"b"<<setw(10)<<"c"<<setw(10)<<"x"<<setw(10)<<"y"<<setw(10)<<"z"<<"\n";
	cout<<"--------------------------------------------------------------------------------\n";
	cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<x<<setw(10)<<y<<setw(10)<<z<<"\n";
	cout<<setw(10)<<&a<<setw(10)<<&b<<setw(10)<<&c<<setw(10)<<x<<setw(10)<<y<<setw(10)<<z<<"\n";
    c="F";
    cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<x<<setw(10)<<y<<setw(10)<<z<<"\n";
	*y="W";
	cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<x<<setw(10)<<y<<setw(10)<<z<<"\n";
	*x=6;
	cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<x<<setw(10)<<y<<setw(10)<<z<<"\n";
	**z=7;
	cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<x<<setw(10)<<y<<setw(10)<<z<<"\n";
	return 0;
}
