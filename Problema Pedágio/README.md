#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Pedágio</p>
</div>

## Objetivo

As estradas romanas são famosas pela sua longevidade e engenharia sólida. Infelizmente, uma engenharia sólida não é barata, e vários neo-Césares decidiram recuperar os custos por meio de cobrança automatizada de pedágio.

Uma rodovia de pedágio específica, a CDVII, possui uma estrutura de tarifas que funciona da seguinte maneira: viajar na estrada custa uma certa quantia por quilômetro percorrido, dependendo do horário em que a viagem começa. Câmeras em todas as entradas e saídas capturam os números de licença de todos os carros que entram e saem. Todo mês do calendário, uma fatura é enviada ao proprietário registrado para cada quilômetro percorrido (a uma taxa determinada pelo horário do dia), mais um dólar por viagem, mais uma taxa de conta de dois dólares. Seu trabalho é preparar a fatura para um mês, dado um conjunto de fotos de placas de licença.

## Input

A entrada começa com um único número inteiro positivo em uma linha separada indicando o número de casos seguintes, cada um deles descrito abaixo. Essa linha é seguida por uma linha em branco, e também há uma linha em branco entre duas entradas consecutivas.
A entrada padrão tem duas partes: a estrutura de tarifas e as fotos das placas de licença. 
A estrutura de tarifas consiste em uma linha com 24 números inteiros não negativos denotando o pedágio (centavos/quilômetro) de 00:00 - 00:59, o pedágio de 01:00 - 01:59 e assim por diante para cada hora do dia. 
Cada registro de foto consiste no número de licença do veículo (até 20 caracteres alfanuméricos), a hora e a data (mm:dd:hh:mm), a palavra 'entrar' ou 'sair' e a localização da entrada ou saída (em quilômetros a partir de uma extremidade da rodovia). Todas as datas estarão dentro de um único mês.
Cada registro "entrar" é emparelhado com o registro seguinte cronologicamente para o mesmo veículo, desde que seja um registro "sair". Registros "entrar" que não estão emparelhados com um registro "sair" são ignorados, assim como registros "sair" que não estão emparelhados com um registro "entrar". 
Você pode assumir que nenhum dois registros para o mesmo veículo têm a mesma hora. As horas são registradas usando um relógio de 24 horas. Não há mais de 1000 registros de fotos.

## Output
Para cada caso de teste, a saída deve seguir a descrição abaixo. As saídas de dois casos consecutivos serão separadas por uma linha em branco.
Imprima uma linha para cada veículo indicando o número de licença e o valor total da fatura, em ordem alfabética por número de licença. Veículos que não usam a rodovia não devem ser listados.

### Sample Input

```bash
1

10 10 10 10 10 10 20 20 20 15 15 15 15 15 15 15 20 30 20 15 15 10 10 10
ABCD123 01:01:06:01 enter 17
765DEF 01:01:07:00 exit 95
ABCD123 01:01:08:03 exit 95
765DEF 01:01:05:59 enter 17
```

### Sample Output

```bash
765DEF $10.80
ABCD123 $18.60

```
