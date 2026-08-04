string(cadeia de caracteres) sao utilizadaspara armazenar palavrase frases. em C, a string eh um array do tipo char. por exemplo: char nome[10]

pela frequencia de utilizacao, string sao arrays especiais

sao finalizadas sempre por o caracter null(geralmente o enter), precisando assim sempre de +1 espaco no array

pode ser inicializada como qualquer array: char nome[3] = {"a","b","c"} ou char nome[3] = {0}

//Leitura

funcao scanf()

- formatacao: %s le e armazena ate espaco ou <enter>
- scanset: %[^\n] le e armazena com espacos ate <enter>
- especificacao de largura: %10s, %10[^\n]
caracter de precisao: %*c (consome um caracter - nao armazena)

- variavel utilizada sem &, nome do array retorna o endereco do 1 elemento
EX:
char palavra[6], texto[51]
scanf("%5c%*c", palavra)
scanf("%50[^\n]%*c", texto)
printf("%s \n %s \n", palavra, texto)
