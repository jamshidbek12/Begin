#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Birinchi sonni kiriting : ";
	cin>>a;
	cout<<"Ikkinchi sonni kiriting : ";
	cin>>b;
	cout<<"Uchinchi sonni kiriting : ";
	cin>>c;
	int d,e,f;
	d = abs(c - a);
	e = abs(c - b);
	f = d + e;

	cout<<"Yigindisi = "<<f;
}
