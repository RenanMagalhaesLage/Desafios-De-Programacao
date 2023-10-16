#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Treasure Hunt</p>
</div>

## Objetivo

Jill criou um novo jogo para smartphones que leva os jogadores a encontrar um tesouro. 
O aplicativo usa o GPS do telefone para determinar a localização do jogador. Em seguida, o aplicativo diz ao jogador a direção a seguir para encontrar o tesouro. 
Quando o jogador chega a uma localização específica, o aplicativo recompensa o jogador com um tesouro (virtual).

Você pode ajudar o jogador a determinar quanto tempo levará para encontrar o tesouro?

## Input

A primeira linha de entrada contém dois números inteiros R e C, cada um entre 1 e 200, inclusos. Esses números definem o número de linhas e colunas na área de jogo, respectivamente. As próximas
linhas de entrada descrevem a área de jogo. Cada linha contém exatamente letras, e cada letra define a ação a ser tomada em cada localização na área de jogo. 
Existem cinco letras possíveis:

N

indica mover-se para a linha anterior,

S

indica mover-se para a próxima linha,

W

indica mover-se para a coluna anterior,

E

indica mover-se para a próxima coluna, e

T

indica a localização do tesouro.

Exatamente uma localização contém o tesouro.

## Output

O jogador começa a jogar na localização na primeira coluna da primeira linha. 
O jogador segue as direções em cada localização. 
Se o jogador eventualmente alcançar o tesouro seguindo as direções, imprima uma linha contendo um número inteiro, o número de movimentos necessários para alcançar o tesouro. 
Se as direções fizerem o jogador sair da área de jogo, imprima uma linha contendo a palavra "Out" (Fora). 
Se as direções fizerem o jogador permanecer na área de jogo, mas nunca alcançar o tesouro, imprima uma linha contendo a palavra "Lost" (Perdido).

### Sample Input
```bash
2 2
ES
TW

```

### Sample Output
```bash
3
```






