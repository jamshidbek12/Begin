#include <iostream>
#include <cmath>
using  namespace std;

int main(){
	float s,p = 3.14;
	cout<<"Yuzasini kiriting : ";
	cin>>s;
	float d,r,l;
	r = sqrt(s/p);
	l = 2 * p * r;
	d = 2*l/2*p;
	cout<<"Diametri = "<<d<<endl;
	cout<<"Radiusi = "<<r;
}
