# Exercício 4

### Qual a complexidade do algoritmo no pior caso?

Uma vez que a função apenas implementa um loop for, este crescerá conforme o parâmetro de entrada (posição do número), assim, o pior caso será ao considerarmos o valor n, que resulta numa complexidade linear, isto é, O(n).


### Compare as complexidades do algoritmo iterativo e da versão recursiva apresentada.
```c++
int fibonacci(int n) {
  int;

  if (n <= 1) {
    return(1);
  }

  x = fibonacci(n-1) + fibonacci(n-2);
  return(x);
}
```

- No algoritmo iterativo, por se tratar de um loop for, o melhor caso será O(1), e o pior caso será O(n), uma complexidade linear.

- Já no algoritmo recursivo, são chamadas duas funções recursivas para cada função (f2 = f1 + f2), até chegar o caso base. Assim, a função que representa essa complexidade é T(n) = c * 2^n, isto é, uma complexidade exponencial.
O pior caso será quando o algoritmo resultar diretamente no caso base, isto é, quando o valor de n for 1 ou 0, o que resulta numa complexidade constante O(1). Por outro lado, ao considerar n como parâmetro, tem-se uma complexidade exponencial de O(2^n).


#### É possível implementar uma versão recursiva mais eficiente em termos de complexidade temporal?

Sim, basta armazenar os valores já computados, de maneira a impedir que funções recursivas iguais sejam chamadas.

Ex.:

```c++
int fibonacci(int n, int memo[]) {
    if (n <= 1) {
      return n;
    }
    else if (memo[n] != -1) {
      return memo[n];
    }
    else {
      memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
      return memo[n];
    }
}
```

Graças ao armazenamento dos valores já computados, cada função recursiva é chamada apenas uma vez, o que resulta numa complexidade temporal linear, isto é, de O(n). Assim, é possível sim implementar uma versão mais eficiente.
