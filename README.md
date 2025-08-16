O LIBFT é um projecto do curriculo da escola 42
Ela é uma biblioteca estática, nela implementei a minha própria versão das principais funções em c..
# 🚀 Funcionalidades

- Reimplementação de funções padrão da C Library:
  - `ft_strlen`, `ft_strdup`, `ft_strjoin`, etc.
- Funções de manipulação de memória:
  - `ft_memset`, `ft_memcpy`, `ft_bzero`, etc.
- Funções de conversão:
  - `ft_atoi`, `ft_itoa`
# 📂 Estrutura do Projeto

.
├── Makefile
├── libft.h
├── ft_strlen.c
├── ft_strdup.c
├── ft_strjoin.c
├── ft_memset.c
├── ft_memcpy.c
├── ft_bzero.c
├── ft_atoi.c
├── ft_itoa.c
└── ...

## 🛠️ Como Compilar

Clone o repositório e rode o `make`:
---bash
git clone https://github.com/teu-usuario/libft.git
cd libft
make
Isso irá gerar o arquivo libft.a, que pode ser linkado nos seus programas em C:
gcc main.c -L. -lft -o my_program
