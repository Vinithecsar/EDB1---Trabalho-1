# Exercício 3

### Faça uma análise de complexidade do algoritmo para o pior e melhor caso

Analisando de maneira geral, uma vez que é necessário percorrer todo o vetor a fim de verificar se está ordenado de forma crescente ou não, teremos um loop que depende do tamanho do vetor, resultando assim numa complexidade de O(n), em que n é o tamanho do vetor.

Assim, o melhor caso será quando o tamanho do vetor for 1, o que o torna automaticamente ordenado e possuirá complexidade O(1)

Da mesma maneira, o pior caso será ao considerar n como tamanho do vetor, resultando numa complexidade linear de O(n).