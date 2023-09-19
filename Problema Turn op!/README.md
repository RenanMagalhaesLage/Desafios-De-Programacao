#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Turn Op!</p>
</div>

## Objetivo

Seu controle de volume está em um nível confortável 7 - nem muito alto, nem muito baixo. 
Seus amigos discordam completamente e frequentemente pedem que você aumente ou diminua, muitas vezes em um tom de voz um tanto inadequado.

Sempre buscando agradar, você tenta acomodar os pedidos deles e aumenta ou diminui o volume em um passo correspondente. 
Existem 11 passos em seu controle de volume: 0, 1, 2 e assim por diante, até 10.

Quando o volume está definido como 0, você não pode diminuí-lo ainda mais e pode ignorar qualquer pedido equivocado nesse sentido. Da mesma forma, você não pode aumentá-lo para mais do que 10.

Onde seu volume estará após os N pedidos?

## Input

Um único número inteiro N na primeira linha, que representa o número de pedidos.

As linhas seguintes contêm ou "Skru op!" (em dinamarquês, que significa "Aumente!") ou "Skru ned!" (em dinamarquês, que significa "Diminua!").

## Output

Escreva um único número inteiro: a posição do seu controle de volume após todos os pedidos.

### Sample Input 1

```bash
3
Skru op!
Skru op!
Skru ned!

```

### Sample Output 1

```bash
8
```

### Sample Input 2

```bash
5
Skru op!
Skru op!
Skru op!
Skru op!
Skru ned!


```

### Sample Output 2

```bash
9
``
