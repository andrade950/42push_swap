# push_swap

Um projeto otimizado de algoritmo de ordenação utilizando duas pilhas e um conjunto limitado de operações, aprimorando o pensamento algorítmico e a eficiência na programação em C.

- **Objetivo**: Desenvolver um programa, `push_swap`, que ordene uma pilha de inteiros utilizando o menor número possível de operações predefinidas. O objetivo é implementar um algoritmo de ordenação eficiente, respeitando as restrições do projeto.

- **Algoritmo Utilizado**:
  - O algoritmo implementado é o **Turk Sort**, que equilibra eficiência e número reduzido de operações para otimizar a ordenação.
  - O **Turk Sort** combina técnicas de divisão e conquista, aplicando heurísticas inteligentes para reduzir o número de movimentações necessárias na pilha.
  - Implementa estratégias de rotação eficiente e redistribuição inteligente dos elementos entre `a` e `b`.
  
- **Funcionalidades Implementadas**:  

  | Operação  | Descrição |
  |------------|--------------------------------------------------------------------------------|
  | `sa`       | Troca os dois primeiros elementos da pilha `a`                                 |
  | `sb`       | Troca os dois primeiros elementos da pilha `b`                                 |
  | `ss`       | Executa `sa` e `sb` simultaneamente                                          |
  | `pa`       | Move o elemento do topo da pilha `b` para `a`                                |
  | `pb`       | Move o elemento do topo da pilha `a` para `b`                                |
  | `ra`       | Roda `a` (desloca todos os elementos para cima, o primeiro torna-se o último) |
  | `rb`       | Roda `b` (desloca todos os elementos para cima, o primeiro torna-se o último) |
  | `rr`       | Executa `ra` e `rb` simultaneamente                                         |
  | `rra`      | Roda `a` ao contrário (desloca todos os elementos para baixo, o último torna-se o primeiro) |
  | `rrb`      | Roda `b` ao contrário (desloca todos os elementos para baixo, o último torna-se o primeiro) |
  | `rrr`      | Executa `rra` e `rrb` simultaneamente                                      |

- **Vídeos Demonstrativos**:
  - Ordenação de 100 números  
    <iframe width="560" height="315" src="https:/www.youtube.com/watch?v=ZgcGJJVHR8Q" frameborder="0"></iframe>
  - Ordenação de 500 números  
    <iframe width="560" height="315" src="https://www.youtube.com/embed/COLOQUE_AQUI_O_ID_DO_VÍDEO" frameborder="0" allowfullscreen></iframe>

- **Tester do push_swap**:
  - Criado um script para testar automaticamente a performance e a eficiência do `push_swap`.
  - Para utilizar o tester, execute:
    ```bash
    chmod +x tester.sh
    ./tester.sh <número de execuções> <quantidade de números>
    ```
  - O script irá gerar números aleatórios, executar o `push_swap` e verificar o número de operações realizadas.
