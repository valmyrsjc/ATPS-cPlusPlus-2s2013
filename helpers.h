#ifndef HELPERS_H
#define HELPERS_H
#include <string>
#include "BaseDao.h"
using namespace std;

int lenght(aviao avioes[9999]){
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
