#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema 3n + 1</p>
</div>

## Objetivo

Problemas em Ciência da Computação são frequentemente classificados como pertencentes a uma determinada classe de problemas (por exemplo,
NP, Insolúvel, Recursivo). Neste problema você estará analisando uma propriedade de um algoritmo cujo
a classificação não é conhecida para todas as entradas possíveis.

Considere o seguinte algoritmo:

```bash
1.   input n
2.   print n
3.   if n = 1 then STOP
4.     if n is odd then n ←− 3n + 1
5.     else n ←− n/2
6.   GOTO 2
```

Dada a entrada 22, a seguinte sequência de números será impressa:
<div align="center">
<p>22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1</p>
</div>

Conjectura-se que o algoritmo acima terminará (quando 1 for impresso) para qualquer entrada integral
valor. Apesar da simplicidade do algoritmo, não se sabe se esta conjectura é verdadeira. Tem
foi verificado, no entanto, para todos os inteiros n tais que 0 <n <1.000.000 (e, de fato, para muitos mais
números do que isso.)
Dada uma entrada n, é possível determinar o número de números impressos antes e incluindo
o 1 é impresso. Para um dado n, isso é chamado de duração do ciclo de n. No exemplo acima, o ciclo
comprimento de 22 é 16.
Para quaisquer dois números i e j, você deve determinar a duração máxima do ciclo sobre todos os números
entre e incluindo i e j.

## Input
A entrada consistirá em uma série de pares de inteiros i e j, um par de inteiros por linha. Todos os números inteiros
será menor que 10.000 e maior que 0.
Você deve processar todos os pares de números inteiros e para cada par determinar a duração máxima do ciclo ao longo
todos os inteiros entre e incluindo i e j.
Você pode assumir que nenhuma operação excede um número inteiro de 32 bits.

## Output
Para cada par de inteiros de entrada i e j você deve gerar i, j e a duração máxima do ciclo para
inteiros entre e incluindo i e j. Esses três números devem ser separados por pelo menos um espaço
com todos os três números em uma linha e com uma linha de saída para cada linha de entrada. Os inteiros i
e j devem aparecer na saída na mesma ordem em que apareceram na entrada e devem ser
seguido pela duração máxima do ciclo (na mesma linha).

## Sample Input
```bash
1 10
100 200
201 210
900 1000
```

## Sample Output
```bash
1 10 20
100 200 125
201 210 89
900 1000 174
```

## Execução

```bash
./3n < input.txt
```

