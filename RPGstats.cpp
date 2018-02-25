// RPGstats.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
// 

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

struct SpielerInfo
{
	char Name[30];            // Name des Spielers
	int Energie;              // Energie des Spielers
	int Energiemax;           // Maximale Energie des Spielers
	int Lebenstränke;         // Wie viele Tränke der Spieler hat 
	char Waffe[30];           // Name der Waffe
	int Waffenschaden;        // Schaden der Waffe
	char Schild[30];          // Name des Schildes
	int Schildver;            // Wie viel verteidigung das Schild hat 
	char Ruestung[30];        // Name der Rüstung 
	int Ruestungver;          // Wie viel verteidigung die Ruestung hat
	char Tier[30];            // Name des Tiers
	int Tierschaden;          // Tier Schaden 
};
SpielerInfo Spieler;

// Prototypen 
void init_stats();
void statsaufrufen(const SpielerInfo &Spieler);

int main()
{
	
	char taste;

	init_stats();
	statsaufrufen(Spieler);
	cout << "Taste druecken" << endl;
	cin >> taste;

    return 0;
}

void init_stats()
{
	// Hier werden diverse Variablen und Strukturen, angelegt und initialisiert
	strcpy_s (Spieler.Name, "Heinrich");
	Spieler.Energie = 15;
	Spieler.Energiemax = 20;
	Spieler.Lebenstränke = 0;
	strcpy_s (Spieler.Waffe, " Faeuste");
	Spieler.Waffenschaden = 1;
	strcpy_s(Spieler.Schild, " keines");
	Spieler.Schildver = 0;
	strcpy_s(Spieler.Ruestung, "Bauerngewand");
	Spieler.Ruestungver = 0;
	strcpy_s(Spieler.Tier, " keinen");
	Spieler.Tierschaden = 0;
}

void statsaufrufen(const SpielerInfo &Spielerstats)
{
	cout << "**************************************************************************************************" << endl;
	cout << "***************************** " << Spielerstats.Name << " - Spielerstatistik ****************************************" << endl;
	cout << "**************************************************************************************************" << endl;
	cout << "***" << setw(7) << "Waffe:" << setw(10) << Spielerstats.Waffe << "(+" << setw(2) << Spielerstats.Waffenschaden << ")";
	cout << " **" << setw(12) << "Schild:" << setw(12) << Spielerstats.Schild << "(-" << setw(2) << Spielerstats.Schildver << ")" ;
	cout << " **" << setw(16) << "Ruestung:" << setw(13) << Spielerstats.Ruestung << "(-" << setw(2) << Spielerstats.Ruestungver << ") ***" << endl;
	cout << "***" << setw(7) << "LP:" << setw(12) << Spielerstats.Energie << "/" << setw(2) << Spielerstats.Energiemax;
	cout << " **" << setw(12) << "Begleiter:" << setw(12) << Spielerstats.Tier << "(+" << setw(2) <<  Spielerstats.Tierschaden << ")";
	cout << " **" << setw(16) << "Lebenstraenke:" << setw(18) << Spielerstats.Lebenstränke << " ***" << endl;
	cout << "**************************************************************************************************" << endl;
}
