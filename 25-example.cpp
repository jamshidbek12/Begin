#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x;
	cout<<"Son kiriting : ";
	cin>>x;
	int y,a,b;
	a = pow(x,6);
	b = pow(x,2);
	y = 3*a - 6*b - 7;
	cout<<"Javob = "<<y;
}
