<div align="center">

# 🔄 push_swap

**Um ordenador de pilhas de inteiros extremamente eficiente, escrito em C**

[![Linguagem](https://img.shields.io/badge/Linguagem-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Algoritmo](https://img.shields.io/badge/Algoritmo-Turk%20Sort-orange.svg)](#algoritmo)
[![100 números](https://img.shields.io/badge/100%20nums-~550%20ops-brightgreen.svg)](#desempenho)
[![500 números](https://img.shields.io/badge/500%20nums-~5050%20ops-green.svg)](#desempenho)

[Read in English](README.md)

</div>

---

## 📌 Visão Geral

`push_swap` ordena uma pilha de inteiros usando o **menor número possível de operações** de um conjunto estritamente limitado. O desafio: conceber um algoritmo inteligente o suficiente para ordenar qualquer input com o mínimo de movimentos possível, utilizando apenas duas pilhas e onze operações.

---

## ⚙️ Algoritmo

O motor de ordenação é baseado no **Turk Sort** — uma estratégia de divisão e conquista que combina heurísticas inteligentes com lógica de rotação eficiente para minimizar o total de movimentos.

**Como funciona:**
1. **Particionar** os elementos da pilha `a` para a pilha `b` com base no custo de cada inserção
2. **Pontuar** cada elemento candidato pelo total de rotações necessárias em ambas as pilhas
3. **Inserir** primeiro o elemento mais barato, aplicando rotações simultâneas (`rr` / `rrr`) sempre que possível
4. **Reconstruir** a pilha `a` rodando o mínimo para o topo depois de todos os elementos regressarem

Esta abordagem gulosa atinge resultados próximos do ótimo de forma consistente, sem necessidade de pesquisa exaustiva.

---

## 🛠️ Operações

| Operação | Descrição |
|----------|-----------|
| `sa` | Troca os dois primeiros elementos da pilha `a` |
| `sb` | Troca os dois primeiros elementos da pilha `b` |
| `ss` | Executa `sa` e `sb` simultaneamente |
| `pa` | Move o elemento do topo de `b` para `a` |
| `pb` | Move o elemento do topo de `a` para `b` |
| `ra` | Roda `a` para cima — o primeiro elemento passa a ser o último |
| `rb` | Roda `b` para cima — o primeiro elemento passa a ser o último |
| `rr` | Executa `ra` e `rb` simultaneamente |
| `rra` | Roda `a` ao contrário — o último elemento passa a ser o primeiro |
| `rrb` | Roda `b` ao contrário — o último elemento passa a ser o primeiro |
| `rrr` | Executa `rra` e `rrb` simultaneamente |

---

## 📊 Desempenho

### 100 números — ~550 operações

![Benchmark 100 números](https://github.com/user-attachments/assets/14661d9d-c02a-4f53-8264-b6595f4f4bf1)

### 500 números — ~5050 operações

![Benchmark 500 números](https://github.com/user-attachments/assets/a0012241-d929-46ca-8581-4f85573a1d52)

---

## 🧪 Tester

Está incluído um script de shell para fazer benchmark do `push_swap` automaticamente em múltiplas execuções.

### Utilização

```bash
chmod +x tester.sh
./tester.sh <número de execuções> <quantidade de números>
```

O script gera conjuntos aleatórios de inteiros, executa o `push_swap` em cada um e apresenta o número de operações por execução, bem como a média final.

### Resultados — 100 e 500 inteiros

<p align="center">
  <img src="https://github.com/user-attachments/assets/46986d4a-0322-4f2f-b2dd-ac8f7bbd9f07" height="350" />
  &nbsp;&nbsp;
  <img src="https://github.com/user-attachments/assets/92f6ba78-9b1d-4f93-8425-52f5725d75ac" height="350" />
</p>

---
