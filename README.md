O LIBFT é um projecto do curriculo da escola 42
Ela é uma biblioteca estática, nela implementei a minha própria versão das principais funções em c..
Com ela aprendi sobre manipulação de strings, alocação dinâmica de memória, endereço de memória, estrutura de dados!
#  Funcionalidades

- Reimplementação de funções padrão da C Library:
  - ft_strlen, ft_strdup, ft_strjoin, etc.
- Funções de manipulação de memória:
  - ft_memset, ft_memcpy, ft_bzero, etc.
- Funções de conversão:
  - ft_atoi, ft_itoa
# Estrutura do Projeto

.
- Makefile
- libft.h
- ft_strlen.c
- ft_strdup.c
- ft_strjoin.c
- ft_memset.c
- ft_memcpy.c
- ft_bzero.c
- ft_atoi.c
- ft_itoa.c
-  ...

# Como Compilar

Clone o repositório e rode o "make":

bash

git clone https://github.com/equintas27/LIBFT.git
cd libft

make

Isso irá gerar o arquivo libft.a, que pode ser linkado nos seus programas em C:

Depois disso, rode isso no terminal:

cc main.c libft.a -o meu_programa
# Exemplo de uso

#include "libft.h"

#include <stdio.h>

int main(void)

{

    char *s = "Hello World!";
    
    printf("Tamanho: %zu\n", ft_strlen(s));
    
    return 0;
    
}
# Saída esperada:

Tamanho: 12

Autor: Eugênio Quintas
