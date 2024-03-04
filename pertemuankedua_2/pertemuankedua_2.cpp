

#include <iostream>
using namespace std;

int main()
{
	float nMat, nFisika, rerata;
	string status;

	cout << "masukan nilai Matematika = ";
	cin >> nMat;
	cout << "masukan nilai fisika = ";
	cin >> nFisika;

	rerata = (nFisika + nMat) / 2;

	if (rerata >= 60) {
		status = "Lulus jalur rerata";
	}
	else if (nMat >= 70) {
		status = "lulus jalur matematika";
	}
	else
	{
		status = "tidak lulus";
	}
	cout << "status kelulusan =" << status << endl;
}
