#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Labirinto</p>
</div>

## Objetivo

Ao preencher um retângulo com barras (/) e barras invertidas (), é possível gerar labirintos simples e agradáveis. A imagem à direita é um exemplo.

Como pode ser observado, os caminhos no labirinto não podem se ramificar, então o labirinto consiste apenas em caminhos cíclicos e caminhos que entram em algum lugar e saem em outro lugar. Estamos interessados apenas nos ciclos. No nosso exemplo, há dois deles.

Sua tarefa é escrever um programa que conte os ciclos e encontre o comprimento do maior ciclo. O comprimento é definido como o número de pequenos quadrados que compõem o ciclo (aqueles limitados por linhas cinza na imagem). Neste exemplo, o ciclo longo tem comprimento 16 e o curto tem comprimento 4.

## Input
A entrada contém várias descrições de labirintos. Cada descrição começa com uma linha contendo dois inteiros w e h (1 ≤ w, h ≤ 75), a largura e a altura do labirinto. As próximas h linhas representam o labirinto em si e contêm w caracteres cada; todos esses caracteres serão ou '/' ou ''.

A entrada é encerrada por um caso de teste começando com w = h = 0. Este caso não deve ser processado.

## Output
Para cada labirinto, primeiro imprima a linha 'Maze #n:', onde n é o número do labirinto. Em seguida, imprima a linha 'k Cycles; the longest has length l.', onde k é o número de ciclos no labirinto e l é o comprimento do ciclo mais longo. Se o labirinto não contiver ciclos, imprima a linha 'There are no cycles.'.

Deixe uma linha em branco após cada caso de teste.

### Sample Input
```bash
6 4
\//\\/
\///\/
//\\/\
\/\///
3 3
///
\//
\\\
0 0
```

### Sample Output

```bash
Maze #1:
2 Cycles; the longest has length 16.
Maze #2:
There are no cycles.
```
