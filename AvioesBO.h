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

int updateAviao(aviaoBean novoAviao){
    BaseDAO.avioes[(novoAviao.id-1)] = novoAviao;
    return 1;
}

int setAviao(aviaoBean novoAviao){
    for(int i = 0; i< 9999; i++){
        if(BaseDAO.avioes[i].id == 0){
            BaseDAO.avioes[i] = novoAviao;
            break;
        }
    }
    return 1;
}

int deleteAviao(int id){
    BaseDAO.avioes[id].id = 0;
    return 1;
}

void getAviao(){
    for(int i = 0; i< 9999; i++){
        if(BaseDAO.avioes[i].id != 0){
            cout << "| " << BaseDAO.avioes[i].id << " | " << BaseDAO.avioes[i].modelo << " | " << BaseDAO.avioes[i].fabricante << " | " << BaseDAO.avioes[i].passageiros << " | " << BaseDAO.avioes[i].comprimento << " | " << BaseDAO.avioes[i].motor << " | " << BaseDAO.avioes[i].altura << " | " << BaseDAO.avioes[i].velocidade << " | " << BaseDAO.avioes[i].altitude << endl;
        }
    }
}

#endif // AVIOESBO_H
