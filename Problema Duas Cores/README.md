#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Duas Cores</p>
</div>

## Objetivo

Em 1976, o "Teorema do Mapa de Quatro Cores" foi provado com a assistência de um computador. Este teorema afirma que todo mapa pode ser colorido usando apenas quatro cores, de tal forma que nenhuma região seja colorida com a mesma cor que uma região vizinha.

Aqui, você é solicitado a resolver um problema mais simples, mas semelhante. Você precisa decidir se um dado grafo conectado arbitrário pode ser bicolorido. 
Ou seja, se é possível atribuir cores (a partir de um conjunto de duas cores) aos nós de tal maneira que nenhum par de nós adjacentes tenha a mesma cor. 
Para simplificar o problema, você pode assumir o seguinte:

- Nenhum nó terá uma aresta para si mesmo.
- O grafo é não direcionado. Isso significa que, se um nó a estiver conectado a um nó b, você deve assumir que b está conectado a a.
- O grafo será fortemente conectado. Isso significa que haverá pelo menos um caminho de qualquer nó para qualquer outro nó.

## Input
A entrada consiste em vários casos de teste. Cada caso de teste começa com uma linha contendo o número n (1 < n < 200) de nós diferentes. A segunda linha contém o número de arestas l. Após isso, seguirão l linhas, cada uma contendo dois números que especificam uma aresta entre os dois nós que eles representam. Um nó no grafo será rotulado com um número a (0 ≤ a < n).

Uma entrada com n = 0 marcará o final da entrada e não deve ser processada.

## Output
Você deve decidir se o grafo de entrada pode ser bicolorido ou não e imprimi-lo dcomo mostra a seguir.

### Sample Input
```bash
3
3
0 1
1 2
2 0
3
2
0 1
1 2
9
8
0 1
0 2
0 3
0 4
0 5
0 6
0 7
0 8
0
```

### Sample Output
```bash
NOT BICOLORABLE.
BICOLORABLE.
BICOLORABLE.
```


