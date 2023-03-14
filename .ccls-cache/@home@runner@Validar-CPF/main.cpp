#include "Pessoa.h"
#include <cctype>
#include <iostream>
#include <sstream>


int main() {
  char cpfBruto[MAXCPF]; // valor bruto do input
  int CPF[MINCPF];
  int k = 0;//var destinada a ignorar possiveis sinais de pontuação

  cout << "Digite O CPF: ";
  cin >> cpfBruto;
  
  for (int i = 0; i < MAXCPF; i++) {
    if (isalnum(cpfBruto[i])) {
      CPF[k] = cpfBruto[i]-48;//-48 -> converte ascii
      k++; 
    }
  }
  cout <<CPF[5];
  return 0;
}
