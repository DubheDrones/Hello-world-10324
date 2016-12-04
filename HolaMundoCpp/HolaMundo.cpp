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

	cout << "Hello, it's me, Marcos"
			<< endl;
	return 0;
}
