#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema LCD</p>
</div>

## Objetivo

Um amigo seu acabou de comprar um novo computador. Até agora, o computador mais poderoso que ele já usou foi uma calculadora de bolso. Agora, ao olhar para seu novo computador, ele está um pouco decepcionado, porque gostava muito do visor de cristal líquido (LC-display) de sua calculadora. Então, você decide escrever um programa que exibe números no estilo de um visor de cristal líquido em seu computador.

## Input
O arquivo de entrada contém várias linhas, uma para cada número a ser exibido. Cada linha contém dois inteiros s, n (1 ≤ s ≤ 10, 0 ≤ n ≤ 99 999 999), onde n é o número a ser exibido e s é o tamanho no qual ele deve ser exibido.

O arquivo de entrada será encerrado por uma linha contendo dois zeros. Esta linha não deve ser processada.

## Output
Exiba os números fornecidos no arquivo de entrada em estilo de visor de cristal líquido, usando s sinais '-' para os segmentos horizontais e s sinais '|' para os verticais. Cada dígito ocupa exatamente s + 2 colunas e 2s + 3 linhas. (Certifique-se de preencher todo o espaço em branco ocupado pelos dígitos com espaços em branco, também para o último dígito.) Deve haver exatamente uma coluna de espaços em branco entre dois dígitos.

Deixe uma linha em branco após cada número. (Você encontrará um exemplo de cada dígito na saída de exemplo.)

### Sample Input

```bash
2 12345
3 67890
0 0
```
### Sample Output

```bash
       --   --        --   -- 
    |    |    | |  | |    |  |
    |    |    | |  | |    |  |
       --   --   --   --      
    | |       |    |    | |  |
    | |       |    |    | |  |
       --   --        --   -- 

  ---   ---   ---   ---   --- 
 |         | |   | |   | |   |
 |         | |   | |   | |   |
 |         | |   | |   | |   |
  ---         ---   ---       
 |   |     | |   |     | |   |
 |   |     | |   |     | |   |
 |   |     | |   |     | |   |
  ---         ---   ---   ---

```
