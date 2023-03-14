#ifndef PESSOA_H
#define PESSOA_H
#define MAXCPF 15
#define MINCPF 11

#include <string>
#include <iostream>
using std::string, std::cin,std::cout;

class Pessoa{
public:
Pessoa(/*/nome, cpf*/);

void setCPF();
void setNome();

void getNome();
void getCPF();

private:
string nome;
long int cpf;
long int cpfValido;
};
#endif