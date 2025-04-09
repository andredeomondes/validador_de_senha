# 🔐 Validador de Senhas com Autômatos Finitos

Projeto desenvolvido com base em conceitos de **Teoria da Computação**, aplicando dois modelos clássicos de autômatos:

- **AFD**: Autômato Finito Determinístico  
- **AFND**: Autômato Finito Não Determinístico

O objetivo é validar senhas com base em diferentes regras, explorando as características e limitações de cada modelo.

---

## 📁 Estrutura do Projeto

```bash
validador-de-senhas/
├── AFD/
│   ├── main.c
│   └── validador.h
├── AFND/
│   ├── main.c
│   └── validador.h
└── README.md
```
---


## 🧠 Conceitos Envolvidos
✅ AFD (Autômato Finito Determinístico)
Cada símbolo de entrada leva a um único estado possível

O fluxo é linear e rígido

Ideal para senhas com formato fixo

🧩 Regras aplicadas:
Um caractere especial no início (!, @, #, $, %, ^, &, *)

Uma letra maiúscula (A-Z)

Quatro letras minúsculas (a-z)

Três dígitos (0-9)

Um caractere especial no final (mesmo conjunto do início)

✅ Exemplo de senha válida:
```
!Senha123!
```
### 🔀 AFND (Autômato Finito Não Determinístico)
Permite múltiplas transições possíveis para um mesmo símbolo

A ordem dos elementos não importa

Ideal para senhas com formato flexível

#### 🧩 Regras aplicadas:
Pelo menos 1 letra maiúscula

Pelo menos 1 letra minúscula

Pelo menos 1 caractere especial (!, @, #, $, %, ^, &, *)

Mínimo de 8 caracteres no total

#### ✅ Exemplos de senhas válidas:
```
aB@123xy
@abcDE12
X1y2z3!*
```
##### 👨‍💻 Autores
Projeto desenvolvido por:

- André Carvalhal

- Thiago Santana

Com fins didáticos para o estudo prático de autômatos finitos e linguagens formais, utilizando a linguagem C.
