# 🔐 Validador de Senhas com Autômatos Finitos

Projeto de implementação de validadores de senhas utilizando conceitos de Teoria da Computação:
- **AFD (Autômato Finito Determinístico)**
- **AFND (Autômato Finito Não Determinístico)**

## 📁 Estrutura do Projeto
validador-de-senhas/
│
├── AFD/
│ ├── main.c
│ └── validador.h
│
├── AFND/
│ ├── main.c
│ └── validador.h
│
└── README.md

Copy

## 🧠 Conceitos Envolvidos

### ✅ AFD (Autômato Finito Determinístico)
- Cada símbolo de entrada leva a um único estado possível
- Fluxo linear e rígido - a senha deve seguir exatamente a sequência esperada
- Ideal para senhas com formato fixo

#### 🧩 Regras aplicadas no AFD:
1. 1 caractere especial no início (!, @, #, $, %, ^, &, *)
2. 1 letra maiúscula (A-Z)
3. 4 letras minúsculas (a-z)
4. 3 dígitos numéricos (0-9)
5. 1 caractere especial no final (mesmo conjunto do início)

#### Exemplo de senha válida:
```txt
!Senha123!
🔀 AFND (Autômato Finito Não Determinístico)
Permite múltiplas transições possíveis para o mesmo símbolo

Mais flexível - a senha pode ter qualquer ordem, desde que respeite os requisitos mínimos

Ideal quando a ordem dos elementos não importa

🧩 Regras aplicadas no AFND:
Pelo menos 1 letra maiúscula

Pelo menos 1 letra minúscula

Pelo menos 1 caractere especial (!, @, #, $, %, ^, &, *)

Pelo menos 8 caracteres no total

Exemplos de senhas válidas:
txt
Copy
aB@123xy
@abcDE12
X1y2z3!*

##### Autor
Projeto desenvolvido por André Carvalhal e Thiago Santana para fins didáticos no estudo de autômatos finitos.
