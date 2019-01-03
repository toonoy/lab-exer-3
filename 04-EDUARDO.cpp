#include <iostream>

using namespace std;

int main(){
	
	char letra1, letra2;
	
	cout<<"Input first letter: ";
	cin>>letra1;
	
	cout<<endl;
	
	cout<<"Input second letter: ";
	cin>>letra2;
	
	cout<<endl;
	
	for(char abc = letra1; abc <= letra2; abc++){
		cout<<abc <<" ";
	}

}
