#include <iostream>
using namespace std;

int fibonnaciIterativo(int n) {
  int n0 = 0, n1 = 1, n2 = 1;

  if (n == 1) {
    return n0;
  }
  for (int i = 2; i < n; i++) {
    n2 = n0 + n1;
    n0 = n1;
    n1 = n2;
  }

  return n2;
}

int main() {
  // Dado um valor inteiro positivo N
  // Implemente o algoritmo iterativo de fibonacci. De modo a retornar o valor
  // inteiro X na posição N da sequência de fibonacci

  int posicao;
  cout << "Digite 0 para encerrar o programa" << endl;

  do {
    cout << "Digite a posição do valor que deseja encontrar: ";
    cin >> posicao;
    cout << fibonnaciIterativo(posicao) << endl;
  } while (posicao != 0);

  return 0;
}
