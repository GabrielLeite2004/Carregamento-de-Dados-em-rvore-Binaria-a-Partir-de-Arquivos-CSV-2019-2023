char* arquivos2(int tipo);

ptrNodo CarregaDados2(tree *tr, int tipo)
{  


    FILE *arquivo;
    char *nomearquivo = arquivos2(tipo);

    arquivo = fopen(nomearquivo, "r");

    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char linha[MAX_LINHA];



    int contagem = 0;
    int muda = 0;
    int primeiraVez = 0;


    while (!feof(arquivo))
    {
      muda = 0;
      contagem = 0;

      if (fgets(linha, MAX_LINHA, arquivo) != NULL && primeiraVez >=1)
      {
          //printf("%s", linha);
          //getchar();
          lerArquivo(linha, *tr);

      }

      primeiraVez = primeiraVez + 1;
      vez = primeiraVez - 1;
      vezes = vezes + 1;

    }

        //imprimeArvore(*tr);

    fclose(arquivo);
    return *tr;
}



char* arquivos2(int tipo)
{

  static char arquivo[20];

  if(tipo == 1)
  {
     strcpy (arquivo, "glp-2019-01.csv");
  }

  if(tipo == 2)
  {
      strcpy (arquivo, "glp-2019-02.csv");
  }

  if(tipo == 3)
  {
      strcpy (arquivo, "glp-2020-01.csv");
  }

  if(tipo == 4)
  {
     strcpy (arquivo, "glp-2020-02.csv");
  }

  if(tipo == 5)
  {
      strcpy (arquivo, "glp-2021-01.csv");
  }

  if(tipo == 6)
  {
      strcpy (arquivo, "glp-2021-02.csv");
  }
  
  if(tipo == 7)
  {
      strcpy (arquivo, "glp-2022-01.csv");
  }

  if(tipo == 8)
  {
     strcpy (arquivo, "glp-2022-02.csv");
  }

  if(tipo == 9)
  {
      strcpy (arquivo, "glp-2023-01.csv");
  }

  return arquivo;

}

