#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Número de Smith</p>
</div>

## Objetivo

Ao examinar sua lista telefônica em 1982, Albert Wilansky, um matemático da Universidade de Lehigh, percebeu que o número de telefone de seu cunhado H. 
Smith tinha a seguinte propriedade peculiar: a soma dos dígitos desse número era igual à soma dos dígitos dos fatores primos desse número. Entendido? 
O número de telefone de Smith era 493-7775. Este número pode ser escrito como o produto de seus fatores primos da seguinte maneira:

4937775 = 3 · 5 · 5 · 65837

A soma de todos os dígitos do número de telefone é 4 + 9 + 3 + 7 + 7 + 7 + 5 = 42, e a soma dos dígitos de seus fatores primos é igualmente 3 + 5 + 5 + 6 + 5 + 8 + 3 + 7 = 42. 
Wilansky ficou tão impressionado com sua descoberta que nomeou esse tipo de números em homenagem ao seu cunhado: números Smith.

Como essa observação também é verdadeira para todos os números primos, Wilansky decidiu mais tarde que um número primo (simples e desprovido de sofisticação) não merece ser um número Smith e os excluiu da definição.

Wilansky publicou um artigo sobre números Smith na revista Two Year College Mathematics Journal e conseguiu apresentar uma coleção inteira de diferentes números Smith: 
Por exemplo, 9985 é um número Smith e também é 6036. 
No entanto, Wilansky não conseguiu encontrar um número Smith que fosse maior do que o número de telefone de seu cunhado. Sua tarefa é encontrar números Smith que sejam maiores do que 4937775.

## Input 

A entrada consiste em vários casos de teste, cujo número é fornecido na primeira linha da entrada. Cada caso de teste consiste em uma única linha contendo um único número positivo menor que 109.

## Output
Para cada valor de entrada n, você deve calcular o menor número Smith que seja maior do que n e imprimir cada número em uma única linha. Você pode supor que tal número existe.

### Sample Input
```bash
1
4937774
```

### Sample Output
```bash
4937775
```
