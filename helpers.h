#ifndef HELPERS_H
#define HELPERS_H
#include <string>
#include "BaseDao.h"
#define clear "\e[H\e[2J"
using namespace std;

int lenght(aviaoBean avioes[9999]){
    int count = 0;
    int qtd = 0;
    for(int i = 0;i<9999;i++){
        if(avioes[i].id != 0){
            qtd++;
        }
        count++;
    }
    return qtd;
}

#endif // HELPERS_H
