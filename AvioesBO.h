#ifndef AVIOESBO_H
#define AVIOESBO_H
#include <iostream>
#include "AviaoBean.h"
#include "BaseDao.h"
#include "helpers.h"
#include "stdlib.h"
#include "string.h"
#include <string>
#define clear "\e[H\e[2J"

using namespace std;

int setAviao(aviaoBean novoAviao){
    for(int i = 0; i< 9999; i++){
        if(AviaoDAO.avioes[i].id == 0){
            AviaoDAO.avioes[i] = novoAviao;
            break;
        }
    }
    return 1;
}

int deleteAviao(int id){
    AviaoDAO.avioes[id].id = 0;
    return 1;
}

void getAviao(){
    for(int i = 0; i< 9999; i++){
        if(AviaoDAO.avioes[i].id != 0){
            cout << "| " << AviaoDAO.avioes[i].id << " | " << AviaoDAO.avioes[i].modelo << " | " << AviaoDAO.avioes[i].fabricante << " | " << AviaoDAO.avioes[i].passageiros << " | " << AviaoDAO.avioes[i].comprimento << " | " << AviaoDAO.avioes[i].altura << endl;
        }
    }
}

#endif // AVIOESBO_H
