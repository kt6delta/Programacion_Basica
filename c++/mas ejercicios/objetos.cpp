#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones
	{
	public:
		void mostrarMensaje(string nombreCurso){
			cout<<"Bienvenido\n"<<nombreCurso<<endl;
		}
};
int main() {
	string nombreDelCurso;
	LibroCalificaciones miLibroCalificaciones;
	cout<<"escriba nombre curso"<<endl;
	getline(cin,nombreDelCurso);
	miLibroCalificaciones.mostrarMensaje(nombreDelCurso);
	return 0;
}

