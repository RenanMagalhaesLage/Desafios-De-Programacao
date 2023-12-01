#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Tabula</p>
</div>

## Objetivo

O Rei Arthur está planejando construir a mesa redonda em uma nova sala, mas desta vez ele quer uma sala que tenha luz solar entrando, então ele planejou construir um teto de vidro. Ele também deseja que sua mesa redonda brilhe durante o dia, especialmente ao meio-dia, então ele quer que ela seja totalmente coberta pela luz do sol. No entanto, Lancelot quer que a parte de vidro do teto da sala seja triangular (e ninguém sabe o motivo, talvez ele tenha feito um voto ou algo assim). Assim, haverá uma área triangular na sala que será totalmente coberta pela luz do sol ao meio-dia, e a mesa redonda deve ser construída nesta área.

Agora, o Rei Arthur quer construir a maior mesa possível que caiba na área triangular iluminada pelo sol. Como ele não é muito bom em geometria, ele pediu a Galahad para ajudá-lo (Lancelot é muito bom em geometria, mas o Rei Arthur não pediu a Lancelot para ajudá-lo porque temia que ele sugerisse algo estranho novamente).

Você pode ajudar Galahad (já que ele não é muito bom com computadores) e escrever um programa que forneça o raio da maior mesa redonda que cabe na área iluminada pelo sol? Você pode assumir que a mesa redonda é um círculo perfeito.

## Input
Haverá um número arbitrário de salas. Cada sala é representada por três números reais (a, b e c), que representam os tamanhos da área triangular iluminada pelo sol. Nenhum tamanho de triângulo será maior que 1000000, e você pode assumir que max(a, b, c) ≤ (a + b + c)/2.

Você deve ler até atingir o final do arquivo.

## Output
Para cada configuração de sala lida, você deve imprimir a seguinte linha:
O raio da mesa redonda é: r
Onde r é o raio da maior mesa redonda que cabe na área iluminada pelo sol, arredondado para 3 casas decimais.

### Sample Input

```bash
12.0 12.0 8.0
```

### Sample Output

```bash
The radius of the round table is: 2.828
```
