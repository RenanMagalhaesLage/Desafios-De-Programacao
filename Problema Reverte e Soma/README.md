#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Reverte e Soma</p>
</div>

## Objetivo

O método "inverter e adicionar" é simples: escolha um número, inverta seus dígitos e some-o ao número original. 
Se a soma não for um palíndromo (o que significa que não é o mesmo número da esquerda para a direita e da direita para a esquerda), repita esse procedimento. Por exemplo:

![image](https://github.com/RenanMagalhaesLage/Desafios-De-Programacao/assets/89847080/394bd212-0821-4ad7-a66f-44cd3922b05a)

Neste caso específico, o palíndromo '9339' apareceu após a 4ª adição. Este método leva a palíndromos em poucas etapas para quase todos os inteiros. 
Mas existem exceções interessantes. 196 é o primeiro número para o qual nenhum palíndromo foi encontrado. No entanto, não está provado que não haja tal palíndromo.

Você deve escrever um programa que forneça o palíndromo resultante e o número de iterações (adições) necessárias para calcular o palíndromo.

Você pode assumir que todos os dados de teste deste problema:

* Terão uma resposta,
  
* Serão computáveis com menos de 1000 iterações (adições),
  
* Produzirão um palíndromo que não seja maior do que 4.294.967.295.

## Input

A primeira linha terá um número N (0 < N ≤ 100) com o número de casos de teste, e as próximas N linhas terão um número P para calcular o seu palíndromo.

## Output

Para cada um dos N testes, você precisará escrever uma linha com os seguintes dados: mínimo de iterações (separado por um espaço) e o próprio palíndromo resultante.

### Sample Input

```bash
3
195
265
750
```

### Sample Output

```bash
4 9339
5 45254
3 6666
```
