#include <iostream>
using namespace std;

int main() {
	int n=100;
	int ns[n];
	cout<<"Quanti numeri vuoi inserire?"<<endl;
	cin>>n;
	for (int i=0;i<n;i++){
		cout<<"Inserisci il numero: ";
		cin>>ns[i];
	}
	for (int k=0;k<n;k++){
	cout<<ns[k]<<"  ";
	}
	cout<<endl<<"La tua sequenza invertita \x8a: "<<endl;
	for(int z=n-1;z>=0;z=z-1){
		cout<<ns[z]<<"  ";
	}
	return 0;
}
