Aluno: Vinícius César

Disciplina IMD0029 - ESTRUTURA DE DADOS BÁSICAS I - T05 (2024.1)

[Link do github: https://github.com/Vinithecsar/EDB1-Trabalho-1](https://github.com/Vinithecsar/EDB1-Trabalho-1)

# Exercício 1

### Qual a complexidade de busca no pior caso?

Sendo n o tamanho do vetor, teremos:
O pior caso será aquele em que todo o vetor é verificado por meio da recursão, quando é necessário percorrer todo o vetor para encontrar o elemento ou confirmar que ele não está na lista.

T(n) = c + T(n-1)

T(n) = c + (c + T(n-2))

T(n) = c + (c + (c + T(n-3)))

...

T(n) = n \* c + c

Então a complexidade é linear, isto é, de O(n).

### A complexidade no pior caso é a mesma da versão iterativa?

Sim, pois na versão iterativa, para afirmar que um elemento não está na lista, ou então caso esteja no último índice do vetor, é necessário que todo o vetor seja percorrido, resultando, também, numa complexidade liner O(n), em que n é o tamanho do vetor.

### Teste o algoritmo para diferentes casos de entrada, variando o tamanho e o conteúdo do vetor.

Implementado no código com vetores de tamanho 10, 50 e 20000. O usuário diz qual o número que deseja encontrar no vetor, e terá como resultado o índice caso seja encontrando, ou -1 caso não encontre. Os números são inseridos por meio da função rand() % (2 x tamanho do array).

Testes com tamanho do vetor 10:

![image](trabalho-unid1/exercicio1/image.png)

Testes com tamanho do vetor 50:

![image](trabalho-unid1/exercicio1/image_2.png)

Testes com tamanho do vetor 20000:

![image](trabalho-unid1/exercicio1/image_3.png)

# Exercício 2

### A complexidade temporal no pior caso e melhor caso é a mesma que a versão recursiva?

Sendo n o tamanho do vetor, teremos:
O pior caso será aquele em que o trecho do vetor a ser comparado é reduzido a somente 1 elemento ou quando o elemento não está no array.

T(n) = c + T(n/2)

T(n) = c + (c + T(n/4))

T(n) = c + (c + (c + T(n/8)))

...

T(n) = n \* c + T(n/2^k)

Quando T(n/2^k) = T(1):

n/2^k = 1

2^k = n

k = log2(n)

Assim, T(n) = k _ c + T(1) = log2(n) _ c + c

A busca binária sempre divide o vetor em dois quando se está procurando, então a iteração ou recursão é realizada considerando somente metade dos elementos.

Quando o elemento que se está procurando está no meio do vetor, isto é, o melhor caso, apenas uma comparação é feita, então temos T(1) = c, resultando numa complexidade de O(1), uma complexidade constante.

O pior caso será quando for necessário dividir todo o vetor até se ter somente 1 elemento, que será o resultado. Então, consideramos o n para a função, que, como vimos acima, resulta em log2(n) \* c + c, que por sua vez tem complexidade O(log2 n), uma complexidade logarítmica.

Em relação à complexidade temporal, o funcionamento da versão iterativa e da versão recursiva é igual, com o melhor caso sendo O(1) e pior caso sendo O(log2 n).

### Qual a complexidade espacial e temporal para a versão recursiva e iterativa?

- Como apresentado na pergunta anterior, a complexidade temporal para a versão iterativa varia de O(1) até O(log2 n).
  Quanto à complexidade espacial, uma vez que não há variáveis que crescem conforme o tamanho do vetor aumenta, é possível dizer que o consumo de memória é constante, com uma complexidade espacial de O(1).

- Em relação à versão recursiva, apresentada no slide da aula "1 - Complexidade de algoritmos", pelo funcionamento semelhante à versão iterativa, no sentido de sempre "dividir" o array procurado em dois, possui complexidade temporal que varia de O(1) até O(log2 n).
  Quanto à complexidade espacial, uma vez que são alocadas variáveis locais na pilha de chamadas pra cada função recursiva chamada, a quantidade total de memória usada nessa pilha cresce conforme o tamanho do vetor, resultando numa complexidade logarítmica, isto é O(log2 n).

### Teste o algoritmo para diferentes casos de entrada, variando o tamanho e conteúdo do vetor.

Implementado no código com vetores de tamanho 10, 50 e 20000. O usuário diz qual o número que deseja encontrar no vetor, e terá como resultado o índice caso seja encontrando, ou -1 caso não encontre. Os números são inseridos com base no seus respectivos índices, com esse valor sendo multiplicado por 2.

Testes com tamanho do vetor 10:

![image](trabalho-unid1/exercicio2/image.png)

Testes com tamanho do vetor 50:

![image](trabalho-unid1/exercicio2/image_2.png)

Testes com tamanho do vetor 20000:

![image](trabalho-unid1/exercicio2/image_3.png)

# Exercício 3

### Faça uma análise de complexidade do algoritmo para o pior e melhor caso

Analisando de maneira geral, uma vez que é necessário percorrer todo o vetor a fim de verificar se está ordenado de forma crescente ou não, teremos um loop que depende do tamanho do vetor, resultando assim numa complexidade de O(n), em que n é o tamanho do vetor.

Assim, o melhor caso será quando o tamanho do vetor for 1, o que o torna automaticamente ordenado e possuirá complexidade O(1)

Da mesma maneira, o pior caso será ao considerar n como tamanho do vetor, resultando numa complexidade linear de O(n).

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

- Já no algoritmo recursivo, são chamadas duas funções recursivas para cada função (f2 = f1 + f2), até chegar o caso base. Assim, a função que representa essa complexidade é T(n) = c \* 2^n, isto é, uma complexidade exponencial.
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
