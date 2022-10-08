#include "CRezervatie.h"

int main() {

	CRezervatie rezerv[100]{};
	int optiune = 0;
	int nr_animale = 0;
	do
	{
		cout << "1.Iepure   2.Vulpe   3.Urs   4.Caprioara   5.Leu   6.Afisare   7.Iesire";
		cin >> optiune;
		while (optiune < 1 || optiune > 7) {
			cout << "Introduceti o optiune intre 1 si 7 : ";
			cin >> optiune;
		}
		if (nr_animale == 99) {
			while (optiune < 6 || optiune > 7) {
				cout << "Ati atins numarul maxim de animale in Rezervatie !  Puteti introduce numai optiunile 6 sau 7 : ";
				cin >> optiune;
			}
		}
		switch (optiune)
		{
		case 1:
			rezerv[nr_animale].Rezervatie = new CIepure;
			rezerv[nr_animale].Rezervatie->citeste();
			nr_animale++;
			break;

		case 2:
			rezerv[nr_animale].Rezervatie = new CVulpe;
			rezerv[nr_animale].Rezervatie->citeste();
			nr_animale++;
			break;

		case 3:
			rezerv[nr_animale].Rezervatie = new CUrs;   
			rezerv[nr_animale].Rezervatie->citeste();
			nr_animale++;
			break;

		case 4:
			rezerv[nr_animale].Rezervatie = new CCaprioara;
			rezerv[nr_animale].Rezervatie->citeste();
			nr_animale++;
			break;

		case 5:
			rezerv[nr_animale].Rezervatie = new CLeu;
			rezerv[nr_animale].Rezervatie->citeste();
			nr_animale++;
			break;

		case 6:
			cout << endl << endl << "------- AFISARE ANIMALE DIN REZERVATIE --------" << endl << endl;
			for (int i = 0; i < nr_animale; i++)
				rezerv[i].Rezervatie->scrie();
			break;

		case 7:
			for (int i = 0; i < nr_animale; i++)
				delete rezerv[i].Rezervatie;
			exit(0);
			break;
		}
	} while (optiune >= 1 && optiune <= 7);

	return 0;
}