

#include <iostream>
using namespace std;

int main()

{
	srand(time(0));

	int nBilA, nBilB;
	nBilA = rand() % 11;
	nBilB = rand() % 11;

	string status;
	

	if (nBilA == nBilB) {
		status = "bilangannya sama";
	}
	else if (nBilA > nBilB) {
		status = "Bilangan A lebih besar dari Bilangan B";
	}
	else
	{
		status = "Bilangan A lebih kecil dari Bilangan b";
	}

	cout << "Bilangan A =" << nBilA << endl;
	cout << "Bilangan B =" << nBilB << endl;
	cout << "statusnya =" << status << endl;



}

