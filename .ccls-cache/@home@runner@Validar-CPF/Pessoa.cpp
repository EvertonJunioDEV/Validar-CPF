#include "Pessoa.h"


Pessoa::Pessoa(string nome,int cpf[],char cpfBruto[]){
  setNome(nome);
  setCPF(cpfBruto);
  validarCpf(cpf);
}

void Pessoa::setNome(string nome){
  Pnome  = nome;
}
void Pessoa::setCPF(string cpf){
  Pcpf = cpf;
}
void Pessoa::validarCpf(int numCpf[]){
  int valPriDigt = 0;
  int valSegDigt = 0;
  int mult = 10;
  int aux = 0;
  
  for (int i=0;i<9;i++){
    valPriDigt += numCpf[i]*mult;
    mult--; 
  }
  aux = valPriDigt;
  valPriDigt = 0;
  valPriDigt = (aux*10)%11;
  if (valPriDigt == numCpf[9]){
    mult = 11;
    for (int i=0;i<10;i++){
    valSegDigt += numCpf[i]*mult;
    mult--; 
    }
  aux = valSegDigt;
  valSegDigt = 0;
  valSegDigt = (aux*10)%11;
    valSegDigt == numCpf[10]?PcpfValido = "True":PcpfValido = "False";
  }else{PcpfValido = "False";}
  
}
void Pessoa::print(){
  cout << endl << "Nome: " << getNome() << endl << "CPF: " << getCPF() << " ("<< getCpfValido()<<")" << endl;
}