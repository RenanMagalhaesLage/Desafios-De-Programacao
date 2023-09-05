#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Criptografia</p>
</div>

## Objetivo

Um método comum, mas inseguro, de criptografar texto é permutar as letras do alfabeto. Ou seja,
no texto, cada letra do alfabeto é consistentemente substituída por alguma outra letra. Para garantir
que a criptografia seja reversível, nenhuma letra é substituída pela mesma letra.
Um método comum de criptoanálise é o ataque de texto conhecido. Em um ataque de texto conhecido, o
criptoanalista consegue ter uma frase ou sentença conhecida criptografada pelo inimigo e, observando
o texto criptografado, deduz o método de codificação.
Sua tarefa é descriptografar várias linhas de texto criptografado, assumindo que cada linha use o mesmo conjunto de
substituições e que uma das linhas de entrada seja a forma criptografada do texto simples:

<i>the quick brown fox jumps over the lazy dog</i>

## Input

A entrada começa com um único número inteiro positivo em uma linha própria, indicando o número
dos casos a seguir, cada um deles conforme descrito abaixo. Esta linha é seguida por uma linha em branco,
e também há uma linha em branco entre duas entradas consecutivas.
A entrada consiste em várias linhas de texto. Cada linha é criptografada conforme descrito acima. 
As linhas criptografadas contêm apenas letras minúsculas e espaços e não excedem 80 caracteres de comprimento. Há no máximo 100 linhas de entrada.

## Output 

Para cada caso de teste, a saída deve seguir a descrição a seguir. As saídas de dois casos consecutivos serão separadas por uma linha em branco.

Descriptografe cada linha e a imprima na saída padrão. Se houver mais de uma descriptografia possível
(várias linhas podem ser decodificadas para a sentença-chave), use a primeira linha encontrada para decodificação.
Se a descriptografia for impossível, imprima uma única linha:

```bash
No solucion.
```

### Sample Input

```bash
1

vtz ud xnm xugm itr pyy jttk gmv xt otgm xt xnm puk ti xnm fprxq
xnm ceuob lrtzv ita hegfd tsmr xnm ypwq ktj
frtjrpgguvj otvxmdxd prm iev prmvx xnmq
```

### Sample Output

```bash
now is the time for all good men to come to the aid of the party
the quick brown fox jumps over the lazy dog
programming contests are fun arent they
```
