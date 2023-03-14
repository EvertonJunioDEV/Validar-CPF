#include "Pessoa.h"


int main() {
  char cpfBruto[MAXCPF]; // valor bruto do input
  string nome;
  int CPF[MINCPF];
  int k = 0;//var destinada a ignorar possiveis sinais de pontuação
  cout << "Digite Seu Primeiro Nome: ";cin>>nome;
  cout << "Digite O CPF: ";cin >> cpfBruto;
  for (int i = 0; i < MAXCPF; i++) {
    if (isalnum(cpfBruto[i])) {
      CPF[k] = cpfBruto[i]-48;//-48 -> converte ascii
      k++; 
    }
  }

  Pessoa p(nome,CPF,cpfBruto);
  p.print();
  return 0;
}
