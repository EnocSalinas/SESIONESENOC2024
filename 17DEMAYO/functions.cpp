#include <iostream>
#include "variables.h"

using namespace std;

void iniciar();
void Edades();
void menu(){
    cout<<"1. Ingresar edades"<<endl;
    cout<<"2. Mostrar edades"<<endl;
    cout<<"3. Mostrar edad mayor"<<endl;
    cout<<"4. Mostrar edad menor"<<endl;
    cout<<"5. Mostrar promedio de edades"<<endl;
    cout<<"6. Salir"<<endl;
}

/*agregar edades*/

void Edades(){
system("cls|clear");
cout << "dime la edad: ";
cin >> ages[pos];
pos++;
system("pause");
}

void iniciar(){
    int option = 0;


    while (option!=6)
    {
        menu();
        cin>>option;
        switch (option)
        {
        case 1:
            Edades();
            break;
        case 6:
            cout<<"Adios"<<endl;
            break;


        
        default:
            break;
        }
    }
    
}

void ShowAges(){
    system("cls|clear");
    cout << "Edades: " << endl;
    for (int i = 0; i < pos; i++)
    {
        cout<<ages[i]<<endl;
    }
    system("pause");
}