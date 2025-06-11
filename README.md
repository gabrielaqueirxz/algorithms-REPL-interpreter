# Máquina Virtual Baseada em Pilha - Etapa 1

![Stack Machine](https://img.shields.io/badge/Status-Completo-success) 
![Language](https://img.shields.io/badge/Linguagem-C-blue)

## 👨‍💻 Nome da atividade
Implementação de um interpretador REPL para uma máquina virtual baseada em pilha (Etapa 1).

## 👥 Integrantes do Grupo
| Nome | Matrícula |
- Amanda Mikely Abreu Macêdo  
- Gabriela Torres de Queiroz  
- João Felipe Silva Soeiro  
- Sávio Rodrigues Jeremias de Sousa   

## 📝 Descrição
Implementação de um interpretador interativo (REPL) para uma máquina virtual baseada em pilha, desenvolvido em C como parte da disciplina de [nome da disciplina]. O sistema permite executar operações básicas como empilhar valores, operações aritméticas e exibição de resultados.

## 🛠️ Funcionalidades Implementadas
- ✅ Comando `push` para empilhar valores
- ✅ Operações aritméticas (`add`, `sub`, `mul`, `div`)
- ✅ Comando `print` para exibir resultados
- ✅ Gerenciamento de pilha com tamanho configurável
- ✅ Interface REPL interativa

## 📦 Estrutura do Projeto
/maquina-pilha
├── main.c # Loop principal REPL
├── interpret.c # Processamento dos comandos
├── interpret.h # Cabeçalho do interpretador
├── stack.c # Implementação da pilha
├── stack.h # Cabeçalho da pilha
├── README.md # Este arquivo
└── Makefile # (Opcional) Para compilação automatizada

## ⚙️ Instruções de Compilação e Uso

### 1. Compilar o projeto

Utilize um compilador C como o `gcc`. Execute o comando no terminal:

```bash
gcc main.c interpret.c stack.c -o maquina-pilha
```

### 2. Executar o programa

```bash
./maquina-pilha
```

### 3. Comandos disponíveis no REPL

- `push <número>` — Empilha um número na pilha.
- `pop` — Remove o topo da pilha.
- `add` — Soma os dois valores do topo.
- `sub` — Subtrai o segundo valor do primeiro.
- `mul` — Multiplica os dois valores do topo.
- `div` — Divide o segundo valor do primeiro (divisão inteira).
- `print` — Imprime o valor do topo da pilha.
- `exit` — Encerra o interpretador.

### 4.Exemplo de Uso

> push 10
> push 5
> add
> print
Resultado: 15
> push 3
> mul
> print
Resultado: 45
> exit

## 🛡️ Licença

@Copyright/License

Este material é resultado de um trabalho acadêmico para a disciplina ALGORITMOS E ESTRUTURA DE DADOS, sobre a orientação do professor Dr. SÉRGIO SOUZA COSTA, semestre letivo 2025.1, curso Ciência e Tecnologia, na Universidade Federal do Maranhão (UFMA). Todo o material sob esta licença é software livre: pode ser usado para fins acadêmicos e comerciais sem nenhum custo. Não há papelada, nem royalties, nem restrições de "copyleft" do tipo GNU. Ele é licenciado sob os termos da licença MIT reproduzida abaixo e, portanto, é compatível com GPL e também se qualifica como software de código aberto. É de domínio público. Os detalhes legais estão abaixo. O espírito desta licença é que você é livre para usar este material para qualquer finalidade, sem nenhum custo. O único requisito é que, se você usá-los, nos dê crédito.

Copyright © 2025 Educational Material

Este material está licenciado sob a Licença MIT. É permitido o uso, cópia, modificação, e distribuição deste material para qualquer fim, desde que acompanhado deste aviso de direitos autorais.



