#ifndef PESSOA_H
#define PESSOA_H
#define MAXCPF 15
#define MINCPF 11

#include <string>
#include <cctype>
#include <iostream>

using std::string, std::cin,std::cout,std::endl;

class Pessoa{
public:
Pessoa(string,int[],char[]);

void setNome(string);
void setCPF(string);
void validarCpf(int[]);

string getNome(){return Pnome;};
string getCPF(){return Pcpf;}
string getCpfValido(){return PcpfValido;}

void print();

private:
string Pnome;
string Pcpf;
string PcpfValido;
};
#endif