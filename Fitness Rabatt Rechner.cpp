#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int Fam_mg;
	double Monatliche_abo = 40;
	string Jahren;


	cout << "*********Bitte antworten die folgende Fragen, um ihre Rabatt zu bekommen ********** \n \n";
	cout << "Wie viele Ihrer Familienmitglieder haben bei uns eine Mitgliedschaft? \n"
		"Bitte geben Sie ein Zahl ein (2, 3, 4 ...) \n ";
	cin >> Fam_mg ; // Familienmitglieder
	switch (Fam_mg) {
	case 2:			//Rabatt 5%
		Monatliche_abo -= (Monatliche_abo / 100) * 5;
		cout << "Sie bekommen 5% Rabatt \n \n";
		break;
	case 3:			//Rabatt 15%
		Monatliche_abo -= (Monatliche_abo / 100) * 15;
		cout << "Sie bekommen 15% Rabatt \n \n";
		break;
	case 4  :			//Rabatt 20%
		Monatliche_abo -= (Monatliche_abo / 100) * 20;
		cout << "Sie bekommen 20% Rabatt \n \n";
		break;

	}
	cout << "Sind Sie bereits seit 5 Jahren oder länger mitglied bei uns \n"
		"Bitte antworten Sie mit Ja oder Nein \n";
	cin >> Jahren;
	if (Jahren == "Ja" && Fam_mg == 1) {
		Monatliche_abo -= (Monatliche_abo / 100) * 5;
		cout << "Sie bekommen  5% Rabatt \n \n";
	} else {
		cout << Monatliche_abo;
	}

	cout << "Ihrer monatliche Abo beträgt: " << Monatliche_abo << " Euro";

	return 0;
}