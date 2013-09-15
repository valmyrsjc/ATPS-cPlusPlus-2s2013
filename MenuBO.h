#ifndef MENUBO_H
#define MENUBO_H
#include <iostream>
#include "MenuBO.h"
#include "AviaoBean.h"
#include "AvioesView.h"
#include "BaseDao.h"
#include "helpers.h"
#include "stdlib.h"
#include "string.h"
#include <string>
#define clear "\e[H\e[2J"
using namespace std;

string getMenuHome(){

        cout << clear;
        cout << "|--| Aviao[1] | --------------------------------------------| Sair[x] |--|" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "Opc.: ";

    string opc;
    cin >> opc;
    return opc;
}

string getMenuAviao(string opc){

    if(opc == "0"){
        cout << clear;
        cout << "|---Tela Aviao--------------------------------------------| voltar[x] |--|" << endl;
        cout << "|--| Cadastrar[1] |-| Listar[2] |----------------------------------------|" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|                                                                        |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "Opc.: ";
    }

    cin >> opc;
    return opc;
}

void getMenu(string menu, string opc){

    if(menu == "home"){

        if(getMenuHome() == "1"){
            getMenu("aviao", "0");
        }

    } else if (menu == "aviao") {

        opc = (opc=="0")?getMenuAviao("0"):opc;

        if(opc == "x"){
            getMenu("home","0");
        } else if(opc == "1" || opc == "n" || opc == "N"){
            getAviaoCadastrarView(0);
            getMenu("aviao","0");
        } else if(opc == "2"){
            getMenu("aviao",getAviaoListarView());
        } else if (opc == "d" || opc == "D") {
            getDeletarAviaoView();
            getMenu("aviao",getAviaoListarView());
        } else if (opc == "e" || opc == "E") {
            getEditAviaoView();
            getMenu("aviao",getAviaoListarView());
        }

    }

}

#endif // MENUBO_H
