//Écrire un programme qui affiche tous les entiers de 8 jusqu'à 23 (bornes incluses) en utilisant un for

#include <iostream>
using namespace std;

int main()
{
	int nombre(8);
	
	for (nombre >= 8; nombre <= 23; nombre++)
	{
		cout << nombre << endl;
	}
	return 0;
}