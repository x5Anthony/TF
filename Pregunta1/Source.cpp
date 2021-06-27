#include<iostream>
using namespace std;
template <typename t>
struct Nodo{
	t dato;
	string* frase;
	Nodo* siguiente;
	Nodo* anterior;
};

template <typename t>
class listacirculo
{
public:
	listacirculo() {}
	~listacirculo(){}
	void agregar() {
		nodo<T>* nuevo_nodo = new nodo<T>();
		auto registro = [&](bool A_M) {
			if (A_M) {
				system("cls");
				string nombre;
				cout << "Ingrese el nombre: " << endl;
				cin >> nombre;
			}
			else {
				int id = 0;
				system("cls");
				do {
					cout << "Ingrese el id: " << endl;
					cin >> id;
					//cin.ignore();
				} while (id <= 0);
				nuevo_nodo->monto = id;
			}
		};
		registro(true);
		registro(false);

		if (nodoDato == NULL) {
			nodoDato = nuevo_nodo;
			nodoDato->siguiente = nodoDato;
			nodoDato->anterior = nodoDato;
		}
		else {
			nodo<T>* aux1 = nodoDato;

			while (aux1->siguiente != nodoDato) {
				aux1 = aux1->siguiente;
			}
			nuevo_nodo->siguiente = nodoDato;
			nodoDato->anterior = nuevo_nodo;

			nuevo_nodo->anterior = aux1;
			aux1->siguiente = nuevo_nodo;
		}
		tamano++;
	}
private:
	Nodo<T>* nodoDato;
	int tamano;
};
int main() {
	listacirculo<int>* objniño = new listacirculo<int>();
	int opcion;
	while (opcion != 6) {
		cout << "MENU....." << endl;
		cout << "1. Agrega" << endl;
		cout << "2. insertarOrdenado" << endl;
		cout << "3. listarMenorPorColumna" << endl;
		cout << "4. salir";
		cout << endl << "Ingrese la opcion: " << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:objniño->agregar();
			break;
		case 2:break;
		case 3:break;
		}
		
	}
	cin.get();
}