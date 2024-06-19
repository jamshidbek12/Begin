#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b;
	cout<<"Birinchi sonni kiriting : ";
	cin>>a;
	cout<<"Ikkinchi sonni kiriting : ";
	cin>>b;
	int orta,koren;
	orta = a * b;
	koren = sqrt(orta);
	cout<<"Koreni = "<<koren;
}
