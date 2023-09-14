#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Chefe de Guarda</p>
</div>

## Objetivo

Você é o Chefe da Guarda no Castelo Royal Blue Mountain.
Seu trabalho é simples: fazer um levantamento de quantos tipos de criaturas passaram por quais portas e em que ordem.
O castelo é renomado por suas inúmeras portas, no entanto, às vezes elas podem estar abertas ou fechadas.

## Input

A entrada consiste em 1 a 15 linhas. Cada linha contém uma sequência de 1 a 500 letras minúsculas em inglês.

## Output

Em cada linha, imprima o número de caracteres que passaram consecutivamente, formatados como um número imediatamente seguido do caractere. 
Por exemplo, se tivermos a sequência "aaaabb", isso se torna "4a2b". 
Se o mesmo caractere aparecer duas vezes, como em "aaabbaaa", você não deve combinar isso para se tornar "6a2b": uma vez que a ordem é importante para os guardas, você deve mantê-la como "3a2b3a".

### Sample Input

```bash
aaaaabbbccddeee
kklllmmnnnnn
aaaabb
aaabbaaa
aaabbzzzzzzoiousssslllwwwkppdddmnnnnnnnnnnnnnnnppppqq
```

### Sample Output

```bash
5a3b2c2d3e
2k3l2m5n
4a2b
3a2b3a
3a2b6z1o1i1o1u4s3l3w1k2p3d1m15n4p2q
```
