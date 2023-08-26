#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema do Xadrez</p>
</div>

## Objetivo
Escrever um programa que leia a configuração de um tabuleiro de xadrez e responda se existe um rei está
sob ataque (ou seja, “em xeque”). Um rei está em xeque se estiver em uma casa que é atacada por uma peça do oponente
(ou seja, está em um quadrado que pode ser pego pela peça de um oponente em seu próximo movimento).
As peças brancas serão representadas por letras maiúsculas enquanto as peças pretas serão representadas por
letras minúsculas. O lado branco estará sempre na parte inferior do tabuleiro e o lado preto sempre estará
no topo do tabuleiro.

Para quem não conhece o xadrez, aqui estão os movimentos de cada peça:

- Peão (p ou P): só pode avançar em linha reta, uma casa de cada vez. Mas elimina adversários na diagonal (e é isso que lhe preocupa neste problema).

- Cavaleiro (n ou N): possui um movimento especial e é a única peça que pode saltar sobre outras peças. O movimento do cavaleiro pode ser visto como um “L”. Veja o exemplo abaixo.

- Bispo (b ou B): pode mover qualquer número de quadrados na diagonal (para frente ou para trás).

- Torre (r ou R): pode mover qualquer número de casas verticalmente ou horizontalmente (para frente ou para trás).

- Rainha (q ou Q): pode mover qualquer número de quadrados em qualquer direção (diagonal, horizontal ou vertical, para frente ou para trás).

- Rei (k ou K): pode mover-se uma casa de cada vez, em qualquer direção (diagonal, horizontal ou vertical, para frente ou para trás).

Exemplos de movimentos ('*' indica onde a peça pode levar outras peças):

![image](https://github.com/RenannLage/Desafios-De-Programacao/assets/89847080/db07eadd-0cc8-4900-9e01-63c461df12c2)

Lembre-se de que o cavalo é a única peça que pode saltar sobre outras peças. O movimento do peão
vai depender do seu lado. Se for um peão preto, ele só poderá se mover uma casa diagonalmente no tabuleiro. Se
é um peão branco, ele só pode mover uma casa diagonalmente para cima no tabuleiro. O exemplo acima é um preto
peão, pois é um 'p' minúsculo (dizemos “mover”, significando as casas para onde o peão pode se mover quando
pega outro pedaço).

## Input

Haverá um número arbitrário de configurações de placa na entrada. Cada placa será composta por
8 linhas de 8 caracteres cada. Um caractere ‘.’ representará um quadrado vazio. Maiúsculas e Minúsculas
letras (conforme definido acima) representarão as peças. Não haverá caracteres inválidos (ou seja, peças) e
não haverá uma configuração em que ambos os reis estejam em xeque. Você deve ler até encontrar um vazio
tabuleiro (ou seja, um tabuleiro formado apenas por caracteres '.') que não deve ser processado. Haverá
uma linha vazia entre cada par de configurações de placa. Em todos os fóruns (exceto o último que é
vazio) aparecerão tanto o rei branco quanto o rei preto (um e apenas um de cada).

## Output

Para cada leitura de configuração da placa você deve gerar uma das seguintes respostas:
![image](https://github.com/RenannLage/Desafios-De-Programacao/assets/89847080/196be37d-6afb-4fdb-a88d-7568b51c0bb6)

Onde d representa o número do jogo (começando em 1).

## Sample Input

```bash
..k.....
ppp.pppp
........
.R...B..
........
........
PPPPPPPP
K.......
rnbqkbnr
pppppppp
........
........
........
........
PPPPPPPP
RNBQKBNR
rnbqk.nr
ppp..ppp
....p...
...p....
.bPP....
.....N..
PP..PPPP
RNBQKB.R
........
........
........
........
........
........
........
........
```
## Sample Output

```bash
Game #1: black king is in check.
Game #2: no king is in check.
Game #3: white king is in check.
```




