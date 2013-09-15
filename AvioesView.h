#ifndef AVIOESVIEW_H
#define AVIOESVIEW_H
#include <iostream>
#include "AviaoBean.h"
#include "BaseDao.h"
#include "helpers.h"
#include "stdlib.h"
#include "string.h"
#include <string>
#define clear "\e[H\e[2J"

void getAviaoCadastrarView(int id){
    aviaoBean novoAviao;

    cout << clear;
    cout << "|---Cadastro de Avioes---------------------------------------------------|" << endl;

    int newId = (id==0)?lenght(BaseDAO.avioes) + 1:id;

    cout << "| Cadastrando o id: " << newId << endl;
    novoAviao.id = newId;

    cout << "| Informe o modelo: ";
    cin >> novoAviao.modelo;

    cout << "| Informe o fabricante: ";
    cin >> novoAviao.fabricante;

    cout << "| Informe o passageiros: ";
    cin >> novoAviao.passageiros;

    cout << "| Informe o comprimento: ";
    cin >> novoAviao.comprimento;

    cout << "| Informe o altura: ";
    cin >> novoAviao.altura;

    cout << "| Informe o velocidade: ";
    cin >> novoAviao.velocidade;

    cout << "| Informe o altitude: ";
    cin >> novoAviao.altitude;

    cout << "| Informe o motor: ";
    cin >> novoAviao.motor;

    if(id==0){
        setAviao(novoAviao);
    } else{
        updateAviao(novoAviao);
    }

}

string getAviaoListarView(){
    cout << clear;
    cout << "|---Tela Avioes-----| Edit[e] |--| Delet[d] |--| New[n] |--| voltar[0] |--|" << endl;
    getAviao();
    cout << "|-----------------------------------------------------------------Qtd: " << lenght(BaseDAO.avioes) << "-|" << endl;
    cout << "Opc.: ";
    string opc;
    cin >> opc;
    return opc;
}

void getDeletarAviaoView(){
    cout << clear;
    cout << "|---Deletar Aviao--------------------------------------------------------|" << endl;
    getAviao();
    cout << "|-----------------------------------------------------------------Qtd: " << lenght(BaseDAO.avioes) << "-|" << endl;
    cout << "Informe o id.: ";
    int opc;
    cin >> opc;
    deleteAviao((opc-1));
}

void getEditAviaoView(){
    cout << clear;
    cout << "|---Editar Aviao---------------------------------------------------------|" << endl;
    getAviao();
    cout << "|-----------------------------------------------------------------Qtd: " << lenght(BaseDAO.avioes) << "-|" << endl;
    cout << "Informe o id.: ";
    int opc;
    cin >> opc;
    getAviaoCadastrarView(opc);
}

#endif // AVIOESVIEW_H
