#include "Crypto.h"
#include "Shablon.h"
#include "Toxersyuner.h"
#include "RLE.h"

int main() {
	//Shablon
	string start1 = "gayane1 gay";
	Shablon obj1(start1);
	cout << "Shablon" << endl;
	cout << "Starting string is: " << start1 << endl;
	cout << "Encrypted string is: " << obj1.dchange() << endl;
	cout << "Decrypted string is: " << obj1.nchange() << endl << endl;

	//Toxer/Syuner
	string start2 = "gaya gayane gay";
	ToxerSyuner obj2(start2, 3);
	cout << "Toxer/Syuner" << endl;
	cout << "Starting string is: " << start2 << endl;
	cout << "Encrypted string is: " << obj2.dchange() << endl;
	cout << "Decrypted string is: " << obj2.nchange() << endl << endl;

	//RLE
	string start3 = "nnnnnndddddccccccccccccccccccccccccccccccccyyyyyyy";
	RLE obj3(strat3);
	cout << "RLE" << endl;
	cout << "Original string is: " << start3 << endl;
	cout << "Encrypted string is: " << obj3.dchange() << endl;
	cout << "Decrypted string is: " << obj3.nchange() << endl << endl;
}