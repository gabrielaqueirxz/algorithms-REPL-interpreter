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
├── README.md/
├── interpret.c/
├── interpret.h/
├── main.c/
├── stack.c/
├── stack.h/

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
| push <valor>  | Empilha um número inteiro na pilha.|
| pop | Remove o topo da pilha.|
| add| Desempilha dois valores da pilha, soma, e empilha o resultado.|
| sub |  Desempilha dois valores, subtrai o segundo do primeiro (topo), e empilha o resultado.|
| mul | Desempilha dois valores, multiplica, e empilha o resultado. |
| div| Desempilha dois valores, divide o primeiro (topo) pelo segundo (divisão inteira), e empilha o resultado.|
| print | Desempilha um valor e imprime imediatamente no console.|
| exit | Sai do programa. |

---

## 📑 Contribuição

Contribuições são bem-vindas! Envie pull requests ou abra issues com sugestões.

---

## 🏅 Reconhecimentos e Direitos Autorais
* Outros repositórios: https://github.com/gabrielaqueirxz

* Agradecimentos: Universidade Federal do Maranhão (UFMA), Professor Doutor Sérgio Souza Costa, e colegas de curso.

---

## 🛡 Licença

@Copyright/License

Este material é resultado de um trabalho acadêmico para a disciplina ALGORITMOS E ESTRUTURA DE DADOS, sobre a orientação do professor Dr. SÉRGIO SOUZA COSTA, semestre letivo 2025.1, curso Ciência e Tecnologia, na Universidade Federal do Maranhão (UFMA). Todo o material sob esta licença é software livre: pode ser usado para fins acadêmicos e comerciais sem nenhum custo. Não há papelada, nem royalties, nem restrições de "copyleft" do tipo GNU. Ele é licenciado sob os termos da licença MIT reproduzida abaixo e, portanto, é compatível com GPL e também se qualifica como software de código aberto. É de domínio público. Os detalhes legais estão abaixo. O espírito desta licença é que você é livre para usar este material para qualquer finalidade, sem nenhum custo. O único requisito é que, se você usá-los, nos dê crédito.

Copyright © 2025 Educational Material

Este material está licenciado sob a Licença MIT. É permitido o uso, cópia, modificação, e distribuição deste material para qualquer fim, desde que acompanhado deste aviso de direitos autorais.
