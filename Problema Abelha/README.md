#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Desafios de Programação</h1>
    <p>Problema Abelha</p>
</div>

## Objetivo

Maja é uma abelha. Ela vive em uma colmeia com milhares de outras abelhas. Esta colmeia é composta por muitos favos de mel hexagonais onde o mel é armazenado.
Mas a abelha Maja tem um problema. Willi disse a ela onde podem se encontrar, mas como Willi é um zangão masculino e Maja é uma operária fêmea, eles têm sistemas de coordenadas diferentes.

**Sistema de Coordenadas da Maja**

Maja, que voa frequentemente diretamente para um favo de mel especial, criou uma grade bidimensional avançada sobre toda a colmeia.

![image](https://github.com/RenanMagalhaesLage/Desafios-De-Programacao/assets/89847080/e2e5668c-ef3b-4a53-b14e-009cb71fd90f)


**Sistema de Coordenadas do Willi**

Willi, que é mais preguiçoso e frequentemente anda ao redor, apenas numerou as células no sentido horário, começando do 1 no centro da colmeia.

![image](https://github.com/RenanMagalhaesLage/Desafios-De-Programacao/assets/89847080/a97e93c4-b2fe-4d6b-8d7e-f276d22dda60)

Ajude a Maja a converter o sistema do Willi para o dela. Escreva um programa que, para um número de favo de mel fornecido, forneça as coordenadas no sistema da Maja.

## Input
O arquivo de entrada contém um ou mais números inteiros que representam os números do Willi. 
Cada número está em sua própria linha separada, seguido diretamente por uma quebra de linha. Os números dos favos de mel são todos inferiores a 100.000.

## Output
Você deve imprimir as coordenadas correspondentes da Maja para os números do Willi, cada par de coordenadas em uma linha separada.

### SampleInput

```bash
1
2
3
4
5
```

### SampleOutput

```bash
0 0
0 1
-1 1
-1 0
0 -1
```

### Solução / Resposta

Para esse problema percebi o seguinte padrão no comportamento do trajeto da abelha:

Começa com o aumento da coordenada Y, depois diminui a coordenada X, depois isso é invertido, ou seja, diminui o Y e aumenta o X.
Entretanto, como o passar das "iterações", a quantidade de operação em cada coordenada aumenta em um. 
Outro fator a se destacar é que há ocorrências em que ocorre operações nas duas coordenadas.
Além disso, a cada operação é o aumento em uma unidade nas Coordenadas do Willi.

Tendo isso em vista, a cada "iteração" é intercalado os seguintes acontecimentos:
- aumenta uma unidade nas operações "solos" (quando ocorre operações em apenas uma coordenada)
- aumenta a quantidade de operações "comunitárias"

**Veja a seguir minha anotação sobre a sequência de "iterações"**

Cada iteração está separada por um espaço.

```bash
+ y
-x

-y
-y +x  --> operação comunitária (ocorre mudança na coordenada X e na coordenada Y)
+x

+y
+y     --> Antes era apenas uma operação "solo" no Y, agora aumentou para duas
+y -x
-x
-x

-y
-y
-y +x --> Como na Iteração anterior aumentou a quantidade de operação solo agora aumentaremos a quantidade de operação comunitária
-y +x
+x
+x

+y
+y
+y
+y -x
+y -x
-x
-x
-x

-y
-y
-y
-y +x
-y +x
-y +x
+x
+x
+x

+y
+y
+y
+y
+y -x
+y -x
+y -x
-x
-x
-x
-x

-y
-y
-y
-y
-y +x 
-y +x
-y +x
-y +x
+x
+x
+x
+x
```





