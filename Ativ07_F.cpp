#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	cout << "Digite um n�mero inteiro: ";
	cin >> numero;
	
	cout << "\nN�meros �mpares entre 0 e " << numero << ": ";
	for (int i = 0; i <= numero; i++){
		if (i % 2 == 1){
			cout << "\n" << i;
		}
	}
	
	return 0;
}
