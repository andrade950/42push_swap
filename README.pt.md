# push_swap

[Read in English](README.md)

Este projeto tem como objetivo a implementação de um algoritmo eficiente para ordenação de uma pilha de inteiros, utilizando um conjunto limitado de operações em C.

- **Objetivo**: Desenvolver um programa, `push_swap`, que ordene uma pilha de inteiros utilizando o menor número possível de operações predefinidas. O objetivo é implementar um algoritmo de ordenação eficiente, respeitando as restrições do projeto.

- **Algoritmo Utilizado**:
  - O algoritmo implementado é o **Turk Sort**, que equilibra eficiência e número reduzido de operações para otimizar a ordenação.
  - O **Turk Sort** combina técnicas de divisão e conquista, aplicando heurísticas inteligentes para reduzir o número de movimentações necessárias na pilha.
  - Implementa estratégias de rotação eficiente e redistribuição inteligente dos elementos entre `a` e `b`.
  
- **Funcionalidades Implementadas**:  

  | Operação   | Descrição                                                                                   |
  |------------|---------------------------------------------------------------------------------------------|
  | `sa`       | Troca os dois primeiros elementos da pilha `a`                                              |
  | `sb`       | Troca os dois primeiros elementos da pilha `b`                                              |
  | `ss`       | Executa `sa` e `sb` simultaneamente                                                         |
  | `pa`       | Move o elemento do topo da pilha `b` para `a`                                               |
  | `pb`       | Move o elemento do topo da pilha `a` para `b`                                               |
  | `ra`       | Roda `a` (desloca todos os elementos para cima, o primeiro torna-se o último)               |
  | `rb`       | Roda `b` (desloca todos os elementos para cima, o primeiro torna-se o último)               |
  | `rr`       | Executa `ra` e `rb` simultaneamente                                                         |
  | `rra`      | Roda `a` ao contrário (desloca todos os elementos para baixo, o último torna-se o primeiro) |
  | `rrb`      | Roda `b` ao contrário (desloca todos os elementos para baixo, o último torna-se o primeiro) |
  | `rrr`      | Executa `rra` e `rrb` simultaneamente                                                       |

- **Média de Movimentos**:
  - Em média, para 100 números, `push_swap` realiza 550 movimentos.
 
    ![Image](https://github.com/user-attachments/assets/14661d9d-c02a-4f53-8264-b6595f4f4bf1)
  
  - Em média, para 500 números, `push_swap` realiza 5050 movimentos.

    ![Image](https://github.com/user-attachments/assets/a0012241-d929-46ca-8581-4f85573a1d52)

- **Tester do push_swap**:
  - Criado um script para testar automaticamente a performance e a eficiência do `push_swap`.
  - Para utilizar o tester, execute:
    ```bash
    chmod +x tester.sh
    ./tester.sh <número de execuções> <quantidade de números>
    ```
  - O script irá gerar números aleatórios, executar o `push_swap` e verificar o número de operações realizadas.
 
- **Teste com 100 e 500 números**:
  <p align="center">
    <img src="https://github.com/user-attachments/assets/46986d4a-0322-4f2f-b2dd-ac8f7bbd9f07" style="height: 350px; width: auto; margin-right: 10px;" />
    <img src="https://github.com/user-attachments/assets/92f6ba78-9b1d-4f93-8425-52f5725d75ac" style="height: 350px; width: auto;" />
  </p>

  ---
  
