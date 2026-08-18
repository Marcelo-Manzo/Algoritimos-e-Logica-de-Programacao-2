string(cadeia de caracteres) sao utilizadaspara armazenar palavrase frases. em C, a string eh um array do tipo char. por exemplo: char nome[10]

pela frequencia de utilizacao, string sao arrays especiais

sao finalizadas sempre por o caracter null(geralmente o enter), precisando assim sempre de +1 espaco no array

pode ser inicializada como qualquer array: char nome[3] = {"a","b","c"} ou char nome[3] = {0}

//Leitura

funcao scanf()

- formatacao: %s le e armazena ate encontrar um espaco ou <enter>
- scanset: %[^\n] le e armazena com espacos ate encontrar <enter>
- especificacao de largura(qtd max de caracarteres a ler): %10s, %10[^\n]  -> funciona na formatacao e no scanset. NAO INCLUI O CARACTER NULO. num nome com 5 espacos, colocariamos 5, pois o ultimo eh nulo.
caracter de precisao: %*c (consome um caracter - nao armazena) --> geralmente usa para tirar o enter que fica no buffet reader. 

- variavel utilizada sem &, nome do array retorna o endereco do 1 elemento
EX:
char palavra[6], texto[51]
scanf("%5c%*c", palavra) --> %*c tira o enter
scanf("%50[^\n]%*c", texto)
printf("%s \n %s \n", palavra, texto)

scanf("%5c%*c", palavra) --> caso a palavra lida seja maior que 5: AULABCC --->  AULAB/CC (o primeiro C sera excluido pelo %*c) -----> AULA/ (c excluido)/ C. esse C restante continua no reader buffet, entao oproximo scanf pegara ele 