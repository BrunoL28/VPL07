# VPL07

Por questões de segurança, clientes de bancos digitam as senhas nos caixas eletrônicos, pois alguém pode ver as teclas à medida em que ele as digita. 
Uma alternativa utilizada é associar os dez dígitos a cinco letras, de forma que cada letra esteja associada a dois dígitos.

As associações entre números e letras são mostradas como botões numa tela sensível ao toque, permitindo que o cliente selecione os botões correspondentes à senha. 
Cada vez que o cliente usa o caixa eletrônico, as letras utilizadas são as mesmas (de 'A’ a 'E’), com os botões nas mesmas posições, 
mas os dígitos são trocados de lugar. Assim, caso um intruso veja (mesmo que mais de uma vez) a sequência de letras digitada, não é possível notar facilmente 
qual a senha do cliente do banco.

O que deve ser feito é: Dada uma sequência de associações entre letras e números, e as letras digitadas pelo cliente do banco para cada uma dessas associações, 
você deve escrever um programa para determinar qual é a senha do cliente.

Para isso, implemente uma classe Intruso capaz de:

Armazenar um conjunto n>1 de entradas contendo (1) a associação entre letras e números dada pelo caixa eletrônico e (2) a respectiva senha digitada pelo cliente. 
Você é livre para definir 1 ou mais atributos para fazer o registro da entrada.
Uma função set_senha_vazada(string) que recebe o par de entradas descrito no ponto anterior e armazena no(s) atributo(s) da classe.
Uma função crack_senha() que retorna uma sequência de 6 dígitos com a senha do cliente com base nas informações vazadas. 
As entradas de teste garantem que é possível adivinhar a senha com o conjunto fornecido.

Exemplo:

Entrada:

2 -------- 1 7 3 9 0 8 5 6 2 4 B C E A E B -------- 9 0 7 5 8 4 6 2 3 1 E C C B D A

Saída:

3 8 4 7 2 9

