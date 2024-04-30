#include <iostream>

using namespace std;

int buscaRecursiva(int indice, int *array, int valorX, int tamanho) {
  if (indice == tamanho) {
    return -1;
  } else if (array[indice] == valorX) {
    return indice;
  } else {
    return buscaRecursiva(indice + 1, array, valorX, tamanho);
  }
}

int main() {

  clock_t start, end; // Para medir o tempo de execução

  // vetor A de tamanho N, valores inteiros e um valor inteiro X
  // busca sequencial recursivo
  // retorna o índice do valor X no vetor A, ou -1 caso não seja encontrado

  int vetorCom10[10];
  for (int i = 0; i < 10; i++) {
    vetorCom10[i] = rand() % 20;
  }

  int vetorCom50[50];
  for (int i = 0; i < 50; i++) {
    vetorCom50[i] = rand() % 100;
  }

  int vetorCom20000[20000];
  for (int i = 0; i < 20000; i++) {
    vetorCom20000[i] = rand() % 40000;
  }

  int valorX;

  cout << "Digite '999' para encerrar o programa" << endl;

  int tamanhoVetor;
  cout << "Escolha o tamanho do vetor (10, 50 ou 20000): ";
  cin >> tamanhoVetor;

  do {

    cout << "Digite o valor a ser encontrado: ";
    cin >> valorX;

    int indice;

    switch (tamanhoVetor) {
    case 10:
      start = clock();
      indice = buscaRecursiva(0, vetorCom10, valorX, tamanhoVetor);
      break;
    case 50:
      start = clock();
      indice = buscaRecursiva(0, vetorCom50, valorX, tamanhoVetor);
      break;
    case 20000:
      start = clock();
      indice = buscaRecursiva(0, vetorCom20000, valorX, tamanhoVetor);
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
  } while (valorX != 999);

  return 0;
}
