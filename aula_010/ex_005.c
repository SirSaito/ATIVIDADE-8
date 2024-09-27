//E. Considerando o código abaixo, qual o valor apresentado na linha 7 (pb - pa)?
//Explique o resultado apresentado.

int main() {
 float *pa, *pb;
 float vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 pa = &vet[0];
 pb = &vet[9];
 printf("pa = %d pb = %d", pa, pb);
 printf("\npb - pa = %d", pb - pa);
 return 0;
} 
//Resposta: será printado 9 pois pa está apontando a posição 0 cujo valor e 1, e pb está apontando a posição 9
//cujo valor e 10, então em (pb - pa) está subtraindo 10-1 cujo valor e 9.