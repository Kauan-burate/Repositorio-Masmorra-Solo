# 🏰 A Caçada ao Item Perdido

## 📖 Descrição

**A Caçada ao Item Perdido** é um jogo de aventura desenvolvido na linguagem **C**, executado no terminal. O jogador explora um castelo misterioso em busca da **Relíquia Antiga**, devendo encontrá-la e retornar à Entrada Principal para vencer a partida.

O jogo utiliza conceitos básicos de programação, como:

- Matrizes
- Vetores
- Estruturas de repetição
- Estruturas condicionais
- Funções
- Manipulação de strings
- Entrada e saída de dados

---

# 🎯 Objetivo

O objetivo do jogador é:

1. Explorar o castelo.
2. Encontrar a **Relíquia Antiga**.
3. Pegar a relíquia utilizando o comando **pegar**.
4. Retornar para a **Entrada Principal**.
5. Vencer o jogo.

---

# 🗺️ Mapa

O jogo possui um mapa 3x3 representando os cômodos do castelo.

```
Velha Biblioteca | Corredor Estreito | Sala do Trono
----------------------------------------------------
Jardim Abandonado| Entrada Principal | Galeria de Arte
----------------------------------------------------
Porão Escuro     | Sala da Relíquia  | Torre Norte
```

No terminal também é exibido um mapa visual:

```
* * * * *
* . . . *
* . P . *
* . . . *
* * * * *
```

Onde:

- `*` = parede
- `.` = caminho
- `P` = jogador

---

# 🎮 Comandos

## Movimentação

| Comando | Ação |
|---------|------|
| norte | Move para cima |
| sul | Move para baixo |
| leste | Move para a direita |
| oeste | Move para a esquerda |

---

## Ações

| Comando | Função |
|----------|---------|
| pegar | Coleta a Relíquia Antiga |
| verificar | Mostra o inventário |
| sair | Encerra o jogo |

---

# 🏰 Locais do Castelo

## Velha Biblioteca
Estantes empoeiradas cheias de livros antigos.

## Corredor Estreito
Um corredor estreito e úmido.

## Sala do Trono
Um trono majestoso coberto por teias de aranha.

## Jardim Abandonado
Um jardim com plantas mortas e fontes quebradas.

## Entrada Principal
Local onde o jogador inicia e deve retornar para vencer.

## Galeria de Arte
Quadros antigos de pessoas desconhecidas.

## Porão Escuro
Um porão frio e sem luz.

## Sala da Relíquia
Local onde está a Relíquia Antiga.

## Torre Norte
Topo da torre com uma bela paisagem.

---

# 📦 Inventário

O jogador possui um inventário simples.

Após utilizar o comando:

```
verificar
```

o jogo informa se a Relíquia Antiga já foi coletada.

---

# 🏆 Condição de Vitória

Para vencer é necessário:

- Encontrar a Sala da Relíquia;
- Utilizar o comando **pegar**;
- Retornar à Entrada Principal.

Ao cumprir esses objetivos será exibida a mensagem:

```
Você retornou à Entrada Principal com a Relíquia Antiga!

Parabéns, você venceu!
```

---

# ❌ Condições de Derrota

Não existe derrota.

O jogo termina apenas quando:

- o jogador vence;
- ou utiliza o comando:

```
sair
```

---

# 💻 Como Compilar

Utilizando GCC:

```bash
gcc jogo.c -o jogo
```

---

# ▶️ Como Executar

Windows

```bash
jogo.exe
```

Linux

```bash
./jogo
```

---

# 🛠 Tecnologias Utilizadas

- Linguagem C
- Biblioteca stdio.h
- Biblioteca string.h
- Biblioteca locale.h

---

# 📚 Conceitos Aplicados

- Matrizes bidimensionais
- Vetores
- Strings
- Funções
- Loops (`while` e `for`)
- Estruturas condicionais (`if` e `else`)
- Manipulação de posição do jogador
- Sistema simples de inventário
- Interface em terminal com cores ANSI

---

# 👨‍💻 Autor

Desenvolvido por **Kauan Burate de Souza** como projeto de estudo da disciplina de Programação em Linguagem C.

---

# 📜 Licença

Projeto desenvolvido para fins educacionais.
