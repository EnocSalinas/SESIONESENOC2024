#include <iostream>

#define MAX 1000

int num[MAX];
int pos = 0;

void agregarnum(int val){
    if(pos < MAX){
        num[pos] = val;
        pos++;
    }else{
        std::cout << "No se pueden agregar mas numeros\n";
    }
}