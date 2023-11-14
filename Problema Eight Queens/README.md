#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Eight Queens</p>
</div>

## Objetivo

No jogo de xadrez, a rainha é uma peça poderosa. Ela pode atacar movendo-se em qualquer número de espaços em sua linha atual, em sua coluna ou diagonalmente.

No quebra-cabeça das oito rainhas, o objetivo é posicionar oito rainhas em um tabuleiro de xadrez padrão 8x8 de forma que nenhuma rainha possa atacar outra. 
A figura central abaixo mostra uma solução inválida; duas rainhas podem se atacar diagonalmente. A figura à direita mostra uma solução válida.
Dada uma descrição de um tabuleiro de xadrez, seu trabalho é determinar se ela representa ou não uma solução válida para o quebra-cabeça das oito rainhas.

<div align="center">
<img src="https://github.com/RenanMagalhaesLage/Desafios-De-Programacao/assets/89847080/b89f8fb6-0433-4b3b-a8f2-12c0ba860be4">
</div>

<b>Figura 1:</b> Movimento da rainha (esquerda), solução inválida (centro), solução válida (direita).

## Input
A entrada conterá a descrição de um único tabuleiro de xadrez, fornecida como oito linhas de oito caracteres cada. As linhas de entrada consistirão apenas nos caracteres '.' e '*'. 
O caractere '.' representa um espaço vazio no tabuleiro, e o caractere '*' representa uma rainha.

## Output
Imprima uma única linha de saída. Imprima a palavra "válido" se o tabuleiro de xadrez fornecido for uma solução válida para o problema das oito rainhas. Caso contrário, imprima "inválido".

### Sample Input 1

```bash
*.......
..*.....
....*...
......*.
.*......
.......*
.....*..
...*....
```

### Sample Output 1

```bash
invalid
```


### Sample Input 2

```bash
*.......
......*.
....*...
.......*
.*......
...*....
.....*..
..*.....
```

### Sample Output 2

```bash
valid
```

### Solução / Resposta

Para esse problema desenvolvi dois códigos válidos, usando abordagens diferentes. 
A primeira solução "oitoRainhas.cpp" é um código mais enxuto e simples, utiliza de uma tabela que armazena os índices das rainhas, bem como a soma e subtração desses indices, que são usadas para verificar se possuem mais de uma rainha nas diagonais.
Já a segunda solução "eightQueens.cpp" é um código que ira percorrer todo o vector que representa o tabuleiro, verificando se possuem mais de uma rainha na diagonal, vertical e horizontal.


