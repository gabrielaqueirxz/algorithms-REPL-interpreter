
# 💻 Máquina Virtual Baseada em Pilha 

## 💡 Objetivo

Implementação de um interpretador que funcione no formato **REPL**, aceitando comandos digitados pelo usuário, interpretando e executando as operações usando uma pilha.

---

## 👥 Autores
* Amanda Mikely Abreu Macedo
* Gabriela Torres de Queiroz
* João Felipe Silva Soeiro
* Sávio Rodrigues Jeremias de Sousa

--- 

## 🔧 Instruções de compilação e uso

### 1. Pré-requisitos

* [Code::Blocks](https://www.codeblocks.org/) ou [VSCode](https://code.visualstudio.com/) instalado;
* Caso utilize o VSCode, instale as seguintes extensões: C/C++ do Microsoft e, opcionalmente, a extensão Code Runner ou C/C++ Compile Run.

---

### 2. Clone o repositório

```bash
git clone https://github.com/gabrielaqueirxz/algorithms-REPL-interpreter.git
cd sua-repo
```
Você também pode fazer download do repositório em formato .zip e abrir no seu Code::Blocks.

---

### 3. Estrutura do Projeto

```
algorithms-REPL-interpreter/
├── README.md
├── interpret.c
├── interpret.h
├── main.c
├── stack.c
├── stack.h
├── lista.c
├── lista.h
```

---

### 4. Rodando e compilando o interpretador

No Code::Blocks você pode rodar normalmente pelo botão **Run and Compile**.

No terminal do VSCode digite o seguinte código:
```bash
gcc *.c -o main
./main
```

---

### 5. Funcionalidades e Comandos Disponíveis

* Realizar operações de: adicionar, remover, somar, subtrair, dividir, multiplicar e imprimir valores;
* Imprimir o resultado no console e a pilha atual;
* Tratamento de erros.

| Comando | Descrição |
|------|-----------|
| push <valor>  | Empilha um número inteiro na pilha ou o valor de uma variável.|
| pop           | Remove o topo da pilha.|
| add           | Soma os dois valores do topo.|
| sub           | Subtrai o segundo valor do primeiro (topo).|
| mul           | Multiplica os dois valores do topo.|
| div           | Divide o primeiro (topo) pelo segundo (divisão inteira).|
| print         | Imprime o valor do topo da pilha.|
| exit          | Sai do programa.|

---

## ✨ Etapa 2 — Manipulação de Variáveis com Lista Encadeada

Nesta etapa, foi implementada uma **memória de variáveis** utilizando **lista encadeada**. Agora, o interpretador da máquina virtual é capaz de associar nomes a valores e reutilizá-los, ampliando sua semelhança com linguagens reais.

---

### 1. Novas Funcionalidades

#### ✅ **Uso de Variáveis Nomeadas**
A memória é estruturada como uma **lista encadeada de pares (nome, valor)**. Isso permite:

- Criar variáveis com o comando `pop <nome_variável>`;
- Reutilizar variáveis com `push <nome_variável>`.

#### 2. **Comandos Adicionados**

| Comando | Ação |
|--------|------|
| `push <valor>` | Empilha um número inteiro ou o valor de uma variável existente. |
| `push <nome_variável>` | Busca o valor associado à variável e empilha. Se não existir, mostra erro. |
| `pop <nome_variável>` | Armazena o valor do topo da pilha na variável especificada. Se ela já existir, atualiza. Caso contrário, cria uma nova. |

---

### 3. Exemplo de Código Interpretado

```bash
push 42
push 5
add         # → 47
push 8
sub         # → 39
pop a       # a = 39

push 56
push 8
add         # → 64
pop b       # b = 64

push a
push b
add         # → 103
push 6
add         # → 109
print       # imprime 109
```

---

### 🗂4. Estrutura da Lista Encadeada (lista.h)

```c
struct node {
    char key[15];
    int value;
    struct node* next;
};

struct list {
    struct node* first;
};
```

### 5. Funções Implementadas (lista.c)

```c
void set_variable(struct list* l, const char* key, int value);
int get_variable(struct list* l, const char* key, int* found);
```

---

### 6. Critérios Atendidos na Etapa 2

- [x] Lista encadeada corretamente implementada;
- [x] Manipulação de variáveis com comandos `push` e `pop`;
- [x] Integração das variáveis com a estrutura de pilha;
- [x] Código modular, limpo e funcional.

---

## 📑 Contribuição

Contribuições são bem-vindas! Envie pull requests ou abra issues com sugestões.

---

## 🏅 Reconhecimentos e Direitos Autorais

* Outros repositórios: https://github.com/gabrielaqueirxz

* Agradecimentos: Universidade Federal do Maranhão (UFMA), Professor Doutor Sérgio Souza Costa, e colegas de curso.

---

## 🛡 Licença

Este material é resultado de um trabalho acadêmico para a disciplina ALGORITMOS E ESTRUTURA DE DADOS, sobre a orientação do professor Dr. SÉRGIO SOUZA COSTA, semestre letivo 2025.1, curso Ciência e Tecnologia, na Universidade Federal do Maranhão (UFMA).

Este material está licenciado sob a Licença MIT. É permitido o uso, cópia, modificação, e distribuição deste material para qualquer fim, desde que acompanhado deste aviso de direitos autorais.

Copyright © 2025
