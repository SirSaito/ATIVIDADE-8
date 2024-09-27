//D. O que está errado no código abaixo?
int main() {
 int x, *p;
 x = 10;
 *p = x;
 return 0;
} 
//Resposta: O erro e está em "*p=x" em que a forma certa para fazer com que o valor de *p seja o de x
//seria "p=&x" sendo que neste caso *p seria o valor do endereço apontadop por p de x;