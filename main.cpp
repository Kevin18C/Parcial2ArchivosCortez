#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <windows.h>

using namespace std;



int main() {
    int cantidad_archivos;
    string texto;
    string nombre="documento";

    cout << "Ingrese la cantidad de archivos a crear: ";
    cin >> cantidad_archivos;

    cout<<"Agregue el texto que aparecera en el documento:"<<endl;
    cin.ignore();
    getline(cin, texto);

    if (cantidad_archivos % 2 == 0) {
        for (int i = 1; i <= cantidad_archivos; i++) {

            ofstream archivo;
            archivo.open("C:\\Users\\kevin\\Documents\\Par\\" + nombre + to_string(i) + ".txt");
            for (int j = 1; j <= i; j++) {
                archivo << texto << endl;
            }
            archivo.close();
        }
        Sleep(1000);
    } else {

        for (int i = 1; i <= cantidad_archivos; i++) {

            ofstream archivo;
            archivo.open("C:\\Users\\kevin\\Desktop\\impar\\" + nombre + to_string(i) + ".txt");
            for (int j = 1; j <= i; j++) {
                archivo << texto << endl;
            }
            archivo.close();
        }
        Sleep(1000);
    }
    return 0;
}
