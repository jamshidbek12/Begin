#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int	a,b,c;
	cout<<"1 - son : ";
	cin>>a;
	cout<<"2 - son : ";
	cin>>b;
	cout<<"3 - son : ";
	cin>>c;
	
	float x1,x2,d,sq;
	d = b*b - 4*a*c;
	sq = sqrt(d);
	x1 = (-b+sq)/2*a; 
	x2 = (-b-sq)/2*a;
	cout<<"Diskriminant = "<<d<<endl;
	cout<<"x1 = "<<x1<<endl;
	cout<<"x2 = "<<x2;
} 
