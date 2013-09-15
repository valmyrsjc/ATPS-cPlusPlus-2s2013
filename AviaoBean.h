#ifndef AVIAOBEAN_H
#define AVIAOBEAN_H
#include <string>
#define clear "\e[H\e[2J"
using namespace std;

struct aviaoBean {
    int id = 0;
    string modelo;
    string fabricante;
    string passageiros;
    string comprimento;
    string motor;
    string altura;
    string velocidade;
    string altitude;
};

#endif // AVIAOBEAN_H
