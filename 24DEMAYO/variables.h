#include <iostream>
#include <string>
using namespace std;

#define MAX_REG 100

typedef struct PRODUCT
{
    string code;
    string name;
    double price;

    int stock;
        /* data */
    };

PRODUCT products [MAX_REG];
int pos = 0;
