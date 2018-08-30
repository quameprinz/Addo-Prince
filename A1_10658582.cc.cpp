#include <iostream>
using namespace std;
int main()
{
	int numb,i;
	bool flag =false;
	cout<<"Please enter any positve integer: ";
	cin>>numb;
	for (int i=2; i<numb; i++){
		if(numb%i==0){
			flag=true;
			break;
		}
	}
	{
	if (flag==false && numb>1){
		cout<<"The number is prime";
	}
	else{
		cout<< "The number is not prime";
	}
	}
	return 0;
}
