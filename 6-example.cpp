#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Birinchi sonni kiriting : ";
	cin>>a;
	cout<<"Ikkinchi sonni kiriting : ";
	cin>>b;
	cout<<"Uchinchi sonni kiriting : ";
	cin>>c;
	int s,v;
	v = a * b * c;
	s =2 * (a*b + a*c + b*c);
	cout<<"Sirti = "<<s<<endl;
	cout<<"Hajmi = "<<v;
}
