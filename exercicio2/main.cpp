#include <iostream>
using namespace std;

int buscaBinaria(int array[], int limiteEsquerdo, int limiteDireito, int x) {
  while (limiteEsquerdo <= limiteDireito) {
    int indice = limiteEsquerdo + (limiteDireito - limiteEsquerdo) / 2;

    if (array[indice] == x) {
      return indice;
    }
    if (array[indice] < x) {
      limiteEsquerdo = indice + 1;
    } else {
      limiteDireito = indice - 1;
    }
  }

  return -1;
}

int main() {

  clock_t start, end; // Para medir o tempo de execução

  // Dado um vetor A de tamanho N, ordenado de forma crescente
  // Implemente o algoritmo de busca binária na forma iterativa
  int vetorCom10[10];
  for (int i = 0; i < 10; i++) {
    vetorCom10[i] = i * 2;
  }

  int vetorCom50[50];
  for (int i = 0; i < 50; i++) {
    vetorCom50[i] = i * 2;
  }

  int vetorCom20000[20000];
  for (int i = 0; i < 20000; i++) {
    vetorCom20000[i] = i * 2;
  }

  cout << "Digite '-2' para encerrar o programa" << endl;
  int valorX;

  int tamanhoVetor;
  cout << "Escolha o tamanho do vetor (10, 50 ou 20000): ";
  cin >> tamanhoVetor;

  do {

    cout << "Binary Search - Digite o valor a ser encontrado: ";
    cin >> valorX;

    int indice;

    switch (tamanhoVetor) {
    case 10:
      start = clock();
      indice = buscaBinaria(vetorCom10, 0, 9, valorX);
      break;
    case 50:
      start = clock();
      indice = buscaBinaria(vetorCom50, 0, 49, valorX);
      break;
    case 20000:
      start = clock();
      indice = buscaBinaria(vetorCom20000, 0, 19999, valorX);
      break;
    default:
      cout << "Tamanho de vetor inválido" << endl;
      return 0;
    }

    end = clock();

    double tempo_levado = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Tempo levado pelo programa: " << fixed << tempo_levado << " seg "
         << endl;

    if (indice == -1) {
      cout << "O valor " << valorX << " não foi encontrado no índice" << endl;
    } else {
      cout << "O valor " << valorX << " foi encontrado no índice " << indice
           << endl;
    }
  } while (valorX != -2);

  return 0;
}
