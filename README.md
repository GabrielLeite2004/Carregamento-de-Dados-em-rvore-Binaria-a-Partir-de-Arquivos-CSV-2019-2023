# Carregamento de Dados em Árvore Binária a Partir de Arquivos CSV (2019-2023)

## Descrição
Este projeto em C implementa a funcionalidade de carregar dados de arquivos CSV, referentes aos anos de 2019 a 2023, em uma estrutura de árvore binária. O sistema permite escolher entre diferentes arquivos de dados com base em um parâmetro de tipo e insere os registros na árvore para posterior manipulação.

## Funcionalidades
- **Seleção de Arquivos CSV**: Permite a escolha de arquivos CSV correspondentes a diferentes semestres dos anos de 2019 a 2023.
- **Carregamento de Dados**: Lê os dados de um arquivo CSV selecionado e insere os registros em uma árvore binária.
- **Persistência de Arquivos**: Manipula arquivos de dados com nomes padronizados, como `glp-2019-01.csv`, `glp-2019-02.csv`, etc.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o carrega_dados2 carrega_dados2.c
   ```
2. Execute o programa e selecione o tipo de arquivo para carregar:
   ```bash
   ./carrega_dados2
   ```
3. Os dados do arquivo selecionado serão carregados na árvore binária.

## Estrutura de Dados
O projeto utiliza uma estrutura de árvore binária (`tree`) para armazenar os dados lidos dos arquivos CSV. A árvore é manipulada por meio de ponteiros para nodos, que contêm os dados e os ponteiros para os filhos esquerdo e direito.

## Funções Principais
- **CarregaDados2(tree *tr, int tipo)**: Carrega os dados do arquivo correspondente ao tipo escolhido e os insere na árvore binária.
- **arquivos2(int tipo)**: Retorna o nome do arquivo CSV com base no tipo selecionado.

## Arquivos Suportados
Os seguintes arquivos CSV são suportados:
- `glp-2019-01.csv`
- `glp-2019-02.csv`
- `glp-2020-01.csv`
- `glp-2020-02.csv`
- `glp-2021-01.csv`
- `glp-2021-02.csv`
- `glp-2022-01.csv`
- `glp-2022-02.csv`
- `glp-2023-01.csv`

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
