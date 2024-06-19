#include <iostream>
using namespace std;

int main(){
	float v,u;
	cout<<"qayiqning tezligi : ";
	cin>>v;
	cout<<"oqimning tezligi : ";
	cin>>u;
	double t1,t2;
    t1 = 1.0 / (v - u); 
    t2 = 1.0 / (v + u); 

    double s = v * t1;

    cout << "Qayiq " << s << " km yo'ldan o'tadi." << endl;
}
