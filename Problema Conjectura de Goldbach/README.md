#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Conjectura de Goldbach/p>
</div>

## Objetivo

O objetivo deste programa é encontrar todas as maneiras únicas de representar um número par dado como a soma de dois números primos.
Um número primo é um número inteiro maior que 1 que é divisível apenas por ele próprio e 1. Os primeiros números primos são: 2, 3, 5, 7, 11, ...
O matemático alemão Christian Goldbach (1690-1764) conjecturou que todo número par maior que 2 pode ser representado como a soma de dois números primos. 
(Esta conjectura nunca foi provada e nunca foi encontrada uma contraexemplo. Portanto, você pode assumir que ela é verdadeira para os casos considerados neste problema.) 
Pode haver várias maneiras de representar um número par dado como a soma de números primos. Por exemplo, o número par 26 pode ser representado como 3+23, 7+19, ou 13+13.

## Input

A entrada começa com um número inteiro <i>n</i> (1<= n <= 100) indicando o número de casos. As seguintes <i>n</i> linhas contêm cada uma um caso de teste com um único número par x (4 <= x <= 32000).

## Output

Para cada caso de teste <i>x</i>, forneça o número de maneiras únicas que <i>x</i> podem ser representadas como a soma de dois números primos.
Em seguida, liste as somas (uma soma por linha) em ordem crescente do primeiro número a ser somado. 
O primeiro número a ser somado deve ser sempre menor ou igual ao segundo para evitar duplicatas. Imprima uma linha em branco após cada caso de teste.

### Sample Input

```bash
3
4
26
100

```

### Sample Output

```bash
4 has 1 representation(s)
2+2

26 has 3 representation(s)
3+23
7+19
13+13

100 has 6 representation(s)
3+97
11+89
17+83
29+71
41+59
47+53


``
