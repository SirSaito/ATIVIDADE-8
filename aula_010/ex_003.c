//C. Sabe-se que o valor de uma variável ou expressão do tipo vetor é o endereço do
//elemento zero do vetor. Seja a[] um vetor qualquer, independente de tipo e tamanho, e
//pa um ponteiro para o mesmo tipo de a[].
//Responda V ou F:
//(V) Após a atribuição pa = &a[0], pa e a possuem valores idênticos, isto é, apontam
//para o mesmo endereço.
//(F) A atribuição pa = &a[0]; pode ser escrita como pa = a;.
//(V) a[i] pode ser escrito como *(a+i).

int main() {
 int i, *pa;
 int a[] = {7, 9, 1, 10, 15};
 pa = a;
 for (i = 0; i < 5; i++) {
 printf("\npa = %d", *(a+i));
 }
 return 0;
}