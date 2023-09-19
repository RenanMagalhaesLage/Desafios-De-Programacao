#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Caça Palavras</p>
</div>

## Objetivo

Dado um grid de letras m por n (1 ≤ m, n ≤ 50) e uma lista de palavras, encontre a localização no grid onde a palavra pode ser encontrada. 
Uma palavra corresponde a uma sequência reta e ininterrupta de letras no grid. Uma palavra pode corresponder às letras no grid independentemente de maiúsculas e minúsculas (ou seja, letras maiúsculas e minúsculas devem ser tratadas da mesma forma). 
A correspondência pode ser feita em qualquer uma das oito direções, seja horizontalmente, verticalmente ou diagonalmente pelo grid.

## Input

A entrada começa com um único número inteiro positivo em uma linha, indicando o número de casos a seguir, cada um deles conforme descrito abaixo. Essa linha é seguida por uma linha em branco, e também há uma linha em branco entre duas entradas consecutivas.

A entrada começa com um par de inteiros, m seguido por n, onde 1 ≤ m, n ≤ 50 em notação decimal em uma única linha. 
As próximas m linhas contêm n letras cada uma; este é o grid de letras no qual as palavras da lista devem ser encontradas. 
As letras no grid podem estar em maiúsculas ou minúsculas. Após o grid de letras, outro inteiro k aparece em uma linha separada (1 ≤ k ≤ 20). 
As próximas k linhas de entrada contêm a lista de palavras a serem procuradas, uma palavra por linha. 
Essas palavras podem conter apenas letras maiúsculas e minúsculas (sem espaços, hífens ou outros caracteres não alfabéticos).

## Output

Para cada caso de teste, a saída deve seguir a descrição abaixo. As saídas de dois casos consecutivos devem ser separadas por uma linha em branco.

Para cada palavra na lista de palavras, deve ser apresentado um par de inteiros que representam a localização da palavra correspondente no grid. 
Os inteiros devem ser separados por um único espaço. O primeiro inteiro é a linha no grid onde a primeira letra da palavra dada pode ser encontrada (1 representa a linha mais alta no grid, e m representa a linha mais baixa). O segundo inteiro é a coluna no grid onde a primeira letra da palavra dada pode ser encontrada (1 representa a coluna mais à esquerda no grid, e n representa a coluna mais à direita no grid). Se uma palavra pode ser encontrada mais de uma vez no grid, a localização que é apresentada deve corresponder à ocorrência mais acima da palavra (ou seja, a ocorrência que coloca a primeira letra da palavra mais próxima do topo do grid). 
Se duas ou mais palavras estiverem no topo, a saída deve corresponder à ocorrência mais à esquerda dessas ocorrências. Todas as palavras podem ser encontradas pelo menos uma vez no grid.

### Sample Input

```bash
1

8 11
abcDEFGhigg
hEbkWalDork
FtyAwaldORm
FtsimrLqsrc
byoArBeDeyv
Klcbqwikomk
strEBGadhrb
yUiqlxcnBjf
4
Waldorf
Bambi
Betty
Dagbert
```

### Sample Output

```bash
2 5
2 3
1 2
7 8
```
