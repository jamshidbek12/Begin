#include <iostream>
#include <cmath>
using  namespace std;

int main(){
	int s,l,p = 3.14;
	cout<<"Uzunlikni kiriting : ";
	cin>>l;
	cout<<"Yuzasini kiriting : ";
	cin>>s;
	
	int d,r;
	d = 2*l/2*p;
	r = sqrt(s/p);
	cout<<"Diametri = "<<d<<endl;
	cout<<"Radiusi = "<<r;
}
