#include <iostream>
using namespace std;

int main(){
	int a , b , c;
	
	cout<<"1 - sonni kiriting : ";
	cin>>a;
	cout<<"2 - sonni kiriting : ";
	cin>>b;
	
	c = a;
	a = b;
	b = c;
	cout<<"1 - son = "<<a<<endl;
	cout<<"2 - son = "<<b;
}
