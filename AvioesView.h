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

void getAviaoCadastrarView(){
    aviaoBean novoAviao;

    cout << clear;
    cout << "|---Tela Avioes-------------------------------------------| voltar[0] |--|" << endl;

    cout << "| Informe o id: ";
    cin >> novoAviao.id;


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

    setAviao(novoAviao);
}

string getAviaoListarView(){
    cout << clear;
    cout << "|---Tela Avioes-------------------------| Cadastrar[1] |--| voltar[0] |--|" << endl;
    getAviao();
    cout << "|----------------------------------------------------------------------" << lenght(AviaoDAO.avioes) << "-|" << endl;
    cout << "Opc.: ";
    string opc;
    cin >> opc;
    return opc;
}

#endif // AVIOESVIEW_H
