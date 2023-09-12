#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Black Friday</p>
</div>

## Objetivo

A Black Friday é a sexta-feira que segue o Dia de Ação de Graças nos Estados Unidos (o quarto quinta-feira de novembro). 
Desde o início dos anos 2000, tem sido considerada o início da temporada de compras de Natal nos EUA, e a maioria das grandes redes de varejo abre muito cedo e oferece vendas promocionais. (Fonte: Wikipedia)

Você trabalha no setor de suporte de TI de uma loja de eletrônicos. 
Este ano, em uma tentativa de evitar aglomerações, a administração decidiu limitar o número de pessoas que entram na loja. Eles dividem as pessoas na entrada em grupos de tamanho <i>n</i> 
e as processam da seguinte maneira: todos os participantes lançam um dado e relatam os resultados a1, a2, a3, ..., an. Para evitar trapaças, em vez de selecionar o participante com o resultado mais alto, a regra é selecionar o participante com o resultado mais alto e único. Todos os não selecionados devem ir para o final da fila. Se não houver um vencedor, o experimento é repetido.

Por exemplo, se houver três jogadores e os resultados forem 6, 6 e 5, então o terceiro jogador vence, porque o primeiro e o segundo jogador perdem, mesmo que seus resultados sejam mais altos, pois ambos têm o mesmo resultado. 
Se, em vez disso, o terceiro jogador também tirar 6, então ninguém vence.

## Input

A primeira linha da entrada contém um número inteiro <i> n </i>, 1 <= <i> n </i> <= 100, o tamanho do grupo. A segunda linha contém números <i> n </i> inteiros, a1, a2, a3, ..., an (1<=ai <=6 para todo
1 <= i <= n): o resultado do lançamento de dado de cada participante.

## Output

A saída deve ser o índice do participante que obteve o resultado mais alto e único, ou "none" (sem aspas) se ninguém obteve um resultado único.

### Sample Input 1
```bash
8
1 1 1 5 3 4 6 6
```

### Sample Output 1
```bash
4
```

### Sample Input 2
```bash
3
4 4 4
```

### Sample Output 2
```bash
none
```
