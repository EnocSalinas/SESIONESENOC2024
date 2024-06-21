#include <iostream>

using namespace std;

#define MAX 3

int matrix[MAX][MAX];
int fila=0;
int columna=0;

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[]) {
    int num;
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            cout << "Dime un #";
            cin >> num;
            agregar(num);
        }
    }
    mostrar();
    return 0;
}

void agregar(int num){
    matrix[fila][columna]=num;
    columna++;
    if(columna == MAX){
        fila++;
        columna = 0;
    }
}

void mostrar() {
    cout << "Matriz:" << endl;
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}