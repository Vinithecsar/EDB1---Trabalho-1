#include <iostream>
using namespace std;

bool verificaOrdenacao(int array[], int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    if (array[i] > array[i + 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  // Dado um vetor de entrada A de tamanho N.
  // Implemente um algoritmo que verifica se o vetor está ordenado na forma
  // crescente. Caso o vetor esteja ordenado o algoritmo retorna verdadeiro Caso
  // contrário o algoritmo retorna falso.
  int tamanho;
  cout << "Digite - 1 para encerrar o programa" << endl;

  do {
    cout << "Digite o tamanho do array: ";
    cin >> tamanho;
    int *array = new int[tamanho];

    cout << "Digite os valores a serem inseridos no array:" << endl;
    for (int i = 0; i < tamanho; ++i) {
      cin >> array[i];
    }

    cout << "Valores inseridos no array:" << endl;
    for (int i = 0; i < tamanho; ++i) {
      cout << array[i] << " ";
    }
    cout << endl;

    cout << "O vetor está ordenado? ";
    if (verificaOrdenacao(array, tamanho)) {
      cout << "Sim" << endl;
    } else {
      cout << "Não" << endl;
    }

    delete[] array;
  } while (tamanho != -1);

  return 0;
}