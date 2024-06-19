#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x;
	cout<<"Son kiriting : ";
	cin>>x;
	int y,a,b;
	a = pow(x-3,6);
	b = pow(x-3,3);
	y = 4*a - 7*b + 2;
	cout<<"Javob = "<<y;
}
