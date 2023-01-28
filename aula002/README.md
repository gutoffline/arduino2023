# Aula02
- //: comentário de uma linha
- /* */: comentário de várias linhas.
```c
// esse é um comentário de uma linha

/*
esse é um comentário de 
várias 
linhas
*/
```

- funções: setup e loop
- setup: código de configuração, a função setup é executada uma vez
- loop: é sempre executado, repetido

- pinMode: configura uma porta como entrada ou saída. Ex: pinMode(13,OUTPUT);
- digitalWrite: libera tensão para uma porta, sendo HIGH ou 1 para liberar a tensão de 5v e LOW ou 0 para cortar a tensão. Ex: digitalWrite(13,1);
- delay: realiza a pausa no código por determinado tempo. Ex: delay(1000)


## Variávies
Espaço na memória nomeado para guardar uma determinada informação.
O conteúdo da variável pode variar. 
Toda variável possui um tipo. Tipo da variável é a caracterísca da informação que a variável pode armazenar.

### Tipos de variáveis
- int: número inteiro. Ex: 10
- float: número decimal. Ex: 10.5
- char: um caractere. Ex: A
- string: sequência de caracteres. Ex: Aline
- boolean: verdadeiro(1) ou falso(0). Ex: true
- void: tipo vazio, não tem tipo
Ex: int tempo = 1000;
## Constante
um espaço reservado na memória com um valor definido onde esse valor será imutável.
Ex: #define LedVermelho 13