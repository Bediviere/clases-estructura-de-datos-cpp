#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    //Escritura de archivo
    string nombre;
    int edad;
    double salario;
    ofstream archivo("empleados.csv");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo";
        return -1;
    }
    do {
        cout << "Ingrese el nombre: ";
        getline(cin, nombre);
        if (nombre != "") {
            cout << "Ingrese la edad: ";
            cin >> edad;
            cout << "Ingrese el salario: ";
            cin >> salario;
            cin.get();
            //guardando
            archivo << nombre << '\t' << edad << '\t' << salario << endl;
        }
    } while (nombre != "");
    archivo.close();
    //Lectura de archivo
    ifstream archivo_lectura("NewEmpleados.csv");
    if (!archivo_lectura.is_open()) {
        cout << "No se pudo abrir el archivo";
        return -1;
    }
    string line;
    //getline recibe 3 parametros, el buffer desde donde se va a leer(cin o archivo),
    //el segundo parametro que es la variable que vamos a leer, y el tercero es el separador
    while (getline(archivo_lectura,line)) { //archivo>>dato;
        istringstream iss(line);
        string nombre;
        getline(iss, nombre, ',');
        string temp;
        getline(iss, temp, ',');
        int edad = stoi(temp);
        getline(iss, temp);
        double salario = stof(temp);
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Salario: " << salario << endl<<endl;
    }
    archivo_lectura.close();
    return 0;
}