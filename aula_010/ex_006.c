//F. Analise o fragmento de código e identifique os valores finais de pc1, pc2, pc3 e
//pc4. Assuma que a variável x está armazenada no endereço 1000 de memória e que
//uma variável do tipo caracter ocupa 1 byte.

char x = 0;
char *pc1, *pc2, *pc3, *pc4;
pc1 = &x;
pc2 = pc1++;
pc3 = pc2 + 4;
pc4 = pc3 - 5;

//Resposta: valor de pc1 será igual a 0, valor de pc2 será igual há 1, valor de pc3 será igual há 5 e
//valor de pc4 será igual há 0;