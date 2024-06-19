#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x1,y1,x2,y2,x3,y3;
	cout<<"Birinchi nuqtani kiriting x1 : ";
	cin>>x1;
	cout<<"Ikkinchi nuqtani kiriting y1 : ";
	cin>>y1;
	cout<<"Uchinchi nuqtani kiriting x2 : ";
	cin>>x2;
	cout<<"Tortinchi nuqtani kiriting y2 : ";
	cin>>y2;
	cout<<"Uchinchi nuqtani kiriting x3 : ";
	cin>>x3;
	cout<<"Tortinchi nuqtani kiriting y3 : ";
	cin>>y3;
	
	int a,b,c,k1,k2,k3,k4,k6,k5;
	k1 = pow(x2 - x1,2);
	k2 = pow(y2 - y1,2);
	k3 = pow(x3 - x1,2);
	k4 = pow(y3 - y1,2);
	k5 = pow(x3 - x2,2);
	k6 = pow(y3 - y2,2);
	a = sqrt(k1 + k2);
	b = sqrt(k3 + k4);
	c = sqrt(k5 + k6);
	
	int per,yuz,l;
	
	per = (a + b + c)/2;
	l = per*(per-a)*(per-b)*(per-c);
	yuz = sqrt(l);
	
	cout<<"Perimetri = "<<per<<endl;
	cout<<"Yuzasi = "<<yuz<<"  "<<l<<endl;
}
