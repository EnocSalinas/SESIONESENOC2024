#include <iostream>
#include "variables.h"
using namespace std;

int main(int argc, char const *argv[])
{
    PERSON teacher;
    PERSON students [MAXREGISTERS];
    int op, i=0;
    cout << "CIF: ";
    cin >> teacher.cif;
    cout << "nombre: ";
    scanf(" %[^\n]", teacher.name);
    cout << "apellido: ";
    scanf(" %[^\n]", teacher.lastName);
    printf("Datos del profesor\n CIF %s\n", teacher.cif);
    printf("Nombre: %s %s \n", teacher.name, teacher.lastName); // corrected here

do
{
    system ("cls"); // corrected here for Windows
    printf ("CIF: ");
    scanf (" %[^\n]", students[i].cif);
    printf ("nombre: ");
    scanf (" %[^\n]", students[i].name);
    printf ("apellido: ");
    scanf (" %[^\n]", students[i].lastName);
    printf("Nota: ");
    scanf("%d", &students[i].grade);
    printf("Desea ingresar otro registro 1. SI \n 0. No \n Digite su Opcion");
    cin >> op;
} while (op == 1); // corrected here

    return 0;
}