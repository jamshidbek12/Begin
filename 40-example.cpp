#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int	a1,b1,c1,a2,b2,c2;
	cout<<"A1 - son : ";
	cin>>a1;
	cout<<"B1 - son : ";
	cin>>b1;
	cout<<"C1 - son : ";
	cin>>c1;
	cout<<"A2 - son : ";
	cin>>a2;
	cout<<"B2 - son : ";
	cin>>b2;
	cout<<"C2 - son : ";
	cin>>c2;
	
	double x,y,d;
	d = (a1*b2-a2*b1);
	x = (c1*b2-c2*b1)/d;
	y = (a1*c2-a2*c1)/d;
	cout<<"X javobi = "<<x<<endl;
	cout<<"Y javobi = "<<y;
} 
