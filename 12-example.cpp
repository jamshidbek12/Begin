#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c,p;
	cout<<"Birinchi sonni kiriting : ";
	cin>>a;
	cout<<"Ikkinchi sonni kiriting : ";
	cin>>b;
	c = sqrt(a*a + b*b);
	p = a + b + c;
	cout<<"Gipotenuza = "<<c<<endl;
	cout<<"Perimetr = "<<p<<endl;
}
