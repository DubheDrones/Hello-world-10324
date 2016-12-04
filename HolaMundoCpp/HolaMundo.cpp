#include <iostream>
#include <string>

using namespace std;

class ClasePrueba
{
public:
	void mostrarCadena(string mensaje) {
		cout << mensaje
				<< endl;
	}
};

int main()
{
	string mensaje = "Hello";
	ClasePrueba prueba;

	prueba.mostrarCadena(mensaje);

	return 0;
}
