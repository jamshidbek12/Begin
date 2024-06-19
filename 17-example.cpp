#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"a nuqtani kiriting : ";
	cin>>a;
	cout<<"b nuqtani kiriting : ";
	cin>>b;
	cout<<"c nuqtani kiriting : ";
	cin>>c;
	int ab,bc,ac,s;
	ab = b - a;
	bc = c - b;
	ac = c - a;
	
	s = bc + ac;

	cout<<"AC va BC Yigindisi = "<<s;
}
