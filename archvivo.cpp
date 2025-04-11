#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
ofstream archivoSalida("archivo.txt");
if(archivoSalida){
cerr << "error al leer archivo" << endl;
return 1; // Finalizar con error
}


cout << "escribiendo archivo" << endl;
archivoSalida << "Hola mundo este es el primer archivo" << endl;

archivoSalida.close();


//-------------------------------------------------------------
ifstream archivoEntrada("archivo.txt");
if(!archivoEntrada){
    cerr << "Error al leer archivo"<< endl;
    return l; // Finalizar con error
cout <<"Leyendo archivo" << endl;
string linea;
while(getline(archivoEntrada, linea)){
    cout << linea << endl;
}
archivoEntrada.close();

return 0;
}
