#ifndef AVIOESBO_H
#define AVIOESBO_H
#include <iostream>
#include "AviaoBean.h"
#include "BaseDao.h"
#include "helpers.h"
#include <string>
using namespace std;

int setAviao(aviao novoAviao){
    for(int i = 0; i< 9999; i++){
        if(avioes[i].id == 0){
            avioes[i] = novoAviao;
            break;
        }
    }
    return 1;
}

int deleteAviao(int id){
    avioes[id].id = 0;
    return 1;
}

void getAviao(){
    for(int i = 0; i< 9999; i++){
        if(avioes[i].id != 0){
            cout << avioes[i].id << " | " << avioes[i].modelo << " | " << avioes[i].fabricante << " | " << avioes[i].passageiros << " | " << avioes[i].comprimento << " | " << avioes[i].altura << endl;
        }
    }
}

#endif // AVIOESBO_H
