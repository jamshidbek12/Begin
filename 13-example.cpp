#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,s1,s2,s3,p = 3.14;
	cout<<"Birinchi sonni kiriting : ";
	cin>>a;
	cout<<"Ikkinchi sonni kiriting : ";
	cin>>b;
	s1 = p * a;
	s2 = p * b;
	s3 = p * (a - b);
	cout<<"1 - yuzasi = "<<s1<<endl;
	cout<<"2 - yuzasi = "<<s2<<endl;
	cout<<"Ayirmasi = "<<s3;
}
