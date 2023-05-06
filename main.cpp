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

    if (cantidad_archivos % 2 == 0) {
        for (int i = 1; i <= cantidad_archivos; i++) {

            ofstream archivo;
            archivo.open("C:\\Users\\kevin\\Documents\\Par\\" + nombre + to_string(i) + ".txt");
            archivo.close();
        }
        Sleep(1000);
    } else {

        for (int i = 1; i <= cantidad_archivos; i++) {

            ofstream archivo;
            archivo.open("C:\\Users\\kevin\\Desktop\\impar\\" + nombre + to_string(i) + ".txt");
            archivo.close();
        }
        Sleep(1000);
    }
    return 0;
}
