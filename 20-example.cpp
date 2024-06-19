#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x1,y1,x2,y2;
	cout<<"Birinchi nuqtani kiriting x1 : ";
	cin>>x1;
	cout<<"Ikkinchi nuqtani kiriting y1 : ";
	cin>>y1;
	cout<<"Uchinchi nuqtani kiriting x2 : ";
	cin>>x2;
	cout<<"Tortinchi nuqtani kiriting y2 : ";
	cin>>y2;
	int s,k1,k2;
	k1 = pow(x2 - x1,2);
	k2 = pow(y2 - y1,2);
	s = sqrt(k1 + k2);
	cout<<"Masofasi = "<<s<<endl;
}
