#include <iostream>

using namespace std;
int total(int H,int M,int S)
{
	int total=0;
	total = H * 60 * 60;
	total +=M*60;
	total +=S;
	return total;
}
int main()
{
	int He,Me,Se,resultat;
	cout << "donnez la valeur de Heures : ";
	cin >> He;
	cout << "donnez la valeur de Minutes : ";
	cin >> Me;
	cout << "donnez la valeur de Secondes : ";
	cin >> Se;
	resultat = total (He,Me,Se);
	cout << "la valeur en secondes est : " << resultat << " en secondes.";
	
	return 0;
}