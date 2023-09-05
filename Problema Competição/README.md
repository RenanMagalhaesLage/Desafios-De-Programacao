#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Competição</p>
</div>

## Objetivo

Acham que os placares do concurso estão errados? Aqui está sua chance de apresentar as classificações corretas.

Os competidores são classificados primeiro pelo número de problemas resolvidos (quanto mais, melhor), e depois pelo tempo de penalidade decrescente. Se dois ou mais competidores estiverem empatados tanto no número de problemas resolvidos quanto no tempo de penalidade, eles são exibidos em ordem crescente de números de equipe.

Um problema é considerado resolvido por um competidor se qualquer uma das submissões para esse problema for julgada correta. 
O tempo de penalidade é calculado como o número de minutos que levou para receber a primeira submissão correta para um problema, mais 20 minutos para cada submissão incorreta recebida antes da solução correta. 
Problemas não resolvidos não geram penalidades de tempo.

## Input

A entrada começa com um único número inteiro positivo em uma linha própria, indicando o número de casos que se seguem, cada um deles conforme descrito abaixo. Esta linha é seguida por uma linha em branco, e também há uma linha em branco entre duas entradas consecutivas.

A entrada consiste em um instantâneo da fila de julgamento, contendo entradas de alguns ou todos os competidores de 1 a 100 resolvendo problemas de 1 a 9. Cada linha de entrada consistirá em três números e uma letra no formato:

<i>competidor problema tempo L</i>

Onde L pode ser 'C', 'I', 'R', 'U' ou 'E'. Isso representa Correto, Incorreto, Solicitação de Esclarecimento, Não Julgado e Submissão Errônea. Os três últimos casos não afetam a pontuação.

As linhas de entrada estão na ordem em que as submissões foram recebidas.

## Output

Para cada caso de teste, a saída deve seguir a descrição a seguir. As saídas de dois casos consecutivos serão separadas por uma linha em branco.

A saída consistirá em um placar classificado conforme descrito anteriormente. Cada linha de saída conterá
um número de competidor, o número de problemas resolvidos pelo competidor e a penalidade de tempo acumulada pelo competidor. 
Como nem todos os competidores de 1 a 100 estão realmente participando, exiba apenas os competidores que fizeram uma submissão.

### Sample Input

```bash
1

1 2 10 I
3 1 11 C
1 2 19 R
1 2 21 C
1 1 25 C
```

### Sample Output

```bash
1 2 66
3 1 11
```
