# Projeto de Jogo de Xadrez em C++

Este projeto é uma implementação básica de um jogo de xadrez utilizando C++. O objetivo principal deste projeto é explorar e aplicar conceitos de Programação Orientada a Objetos (POO) e polimorfismo, além de aprimorar habilidades de lógica de programação.

## Funcionalidades

- **Tabuleiro de Jogo**: Um tabuleiro 8x8 é representado por uma matriz de ponteiros para peças (`Piece*`). O tabuleiro é inicializado com `nullptr`, e as peças são adicionadas e movidas conforme a lógica do jogo.

- **Peças de Jogo**: Implementa uma classe base `Piece` e uma classe derivada `Pawn`. A classe `Piece` define a interface comum para todas as peças, enquanto a classe `Pawn` define o comportamento específico dos peões, incluindo a validação dos movimentos.

- **Movimentação de Peças**: Permite mover peças no tabuleiro e valida os movimentos de acordo com as regras básicas dos peões.

- **Interação com o Usuário**: Inclui uma interface de texto onde os jogadores podem selecionar e mover peças. O programa atualiza o tabuleiro após cada movimento.

## Estrutura do Projeto

- **board.cc / board.h**: Implementação e definição da classe `Board`, que gerencia o tabuleiro de xadrez e as peças.

- **piece.h**: Definição da classe base `Piece` que representa uma peça genérica de xadrez.

- **pawn.cc / pawn.h**: Implementação e definição da classe `Pawn`, que representa um peão e define suas regras de movimentação.

- **player.cc / player.h**: Implementação e definição da classe `Player`, que lida com a entrada do usuário e a seleção de peças.

- **main.cc**: Arquivo principal que inicializa o jogo, cria os jogadores e as peças, e gerencia a execução do jogo.

## Compilação e Execução

Para compilar e executar o projeto, siga estes passos:

1. **Compile o Projeto**

   Utilize um compilador C++ (como `g++`) para compilar os arquivos do projeto. No terminal, navegue até o diretório src e execute: 

   ```sh
   g++ *.cc -o TermChess -O3

2. **Execute o projeto** 

    Depois de compilado, execute o bin:

    ```sh
    ./TermChess

## Manual de Uso

1. **Iniciando o programa**

    Ao iniciar o programa, o tabuleiro será exibido no terminal e será atualizado a cada movimento.

2. **Inserindo movimentação** 
    
    Insira as coordenadas da peça a ser movida e a nova posição no formato: row1 col1 row2 col2

    - **row1 col1**: Coordenadas da peça que deseja mover.
    - **row2 col2**: Coordenadas de destino para onde deseja mover a peça.

     **Exemplo**: Para mover uma peça da posição (1, 1) para (2, 1), insira "1121"

3. **Validação e Atualização**

    Após a entrada do usuário:
    
    - O programa verifica se o movimento é válido de acordo com as regras do peão.
    - Se o movimento for válido, a peça será movida e o tabuleiro será atualizado.
    - Caso contrário, uma mensagem de erro será exibida e o tabuleiro permanecerá inalterado.

## Status do Projeto

Este projeto está em desenvolvimento contínuo e atualmente possui as seguintes características e áreas de melhoria:

### Funcionalidades Atuais

- **Tabuleiro de Jogo**: Um tabuleiro 8x8 é gerado e exibido, utilizando uma matriz de ponteiros para peças.
- **Peças de Jogo**: Implementação da classe base `Piece` e da classe derivada `Pawn`, que representa um peão com lógica básica de movimentação.
- **Movimentação**: O peão pode ser movido de acordo com regras básicas, e o tabuleiro é atualizado após cada movimento.
- **Interface de Texto**: O programa aceita entradas do usuário para movimentar as peças e atualiza o tabuleiro no terminal.

### Desenvolvimento Futuro

- **Implementação de Outras Peças**: Adicionar classes e lógicas para outras peças de xadrez (torre, cavalo, bispo, rainha, rei).
- **Regras Completas**: Implementar regras completas do xadrez, como captura, promoção de peões, xeque e xeque-mate.
- **Validação de Entradas**: Melhorar a validação de entradas e gerenciamento de erros para uma experiência mais robusta.
- **Inteligência Artificial**: Adicionar uma componente de inteligência artificial para jogar contra o computador.

### Roadmap

- **Curto Prazo**: Implementar outras peças e suas regras de movimentação.
- **Médio Prazo**: Adicionar suporte para regras avançadas.
- **Longo Prazo**: Desenvolver um suporte para jogos contra o computador.

O projeto está em uma fase inicial e está aberto a contribuições para melhorar e expandir suas funcionalidades. 

Estou aberto a sugestões, colaborações e aprendizados adicionais. Este projeto é uma iniciativa pessoal para entretenimento e para aprimorar a estrutura do meu código e a minha lógica de programação. Agradeço a todos que puderem contribuir e colaborar! :^)


