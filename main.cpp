#include <iostream>
#include "AviaoBean.h"
#include "BaseDao.h"
#include "helpers.h"
#include "AvioesBO.h"
#include <string>

using namespace std;

int main()
{
    aviao novoAviao;
    novoAviao.id = 1;
    novoAviao.modelo = "0190";
    novoAviao.fabricante = "EMBRAER";
    novoAviao.passageiros = "200";
    novoAviao.comprimento = "35";
    novoAviao.altura = "5";
    novoAviao.velocidade = "350";
    novoAviao.altitude = "9000";
    novoAviao.motor = "GE";

    setAviao(novoAviao);
    setAviao(novoAviao);
    setAviao(novoAviao);
    setAviao(novoAviao);
    setAviao(novoAviao);
    deleteAviao(3);

    getAviao();

    return 0;
}

