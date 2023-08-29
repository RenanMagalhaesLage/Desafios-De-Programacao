#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Tower Construction</p>
</div>

## Objetivo

A atual obsessão de Kim é construir torres a partir de sequências ordenadas de blocos de Lego. 
As torres são construídas uma de cada vez, bloco por bloco. O primeiro bloco disponível é a base da primeira torre. 
Se o próximo bloco disponível for mais largo do que o topo da torre atual, dizemos que a torre atual está terminada e fazemos do bloco a base de uma nova torre. 
Caso contrário, o bloco é colocado (de maneira arbitrária) no topo da torre atual.

Dada a ordem e as larguras dos blocos, quantas torres Kim vai construir?

## Input

Um número inteiro <i>N</i> com 1 <= <i>N</i> <= 10^5, seguido por uma linha contendo <i>N</i> números inteiros <i>x</i> , onde 1 <= <i>x</i> <= 10^6, correspondendo à largura dos tijolos na ordem em que estão disponíveis.

## Output

Um único número inteiro, o número de torres resultantes.

### Sample Input 1
```bash
10
4 3 3 2 1 2 2 1 1 3

```

### Sample Output 1
```bash
3
```

### Sample Input 2
```bash
5
2 2 2 2 2

```

### Sample Output 2
```bash
1
```
