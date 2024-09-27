//B. Qual o valor de y após a execução do programa?
int main(){
 int y, *p, x;
 y = 0;
 p = &y;
 x = *p;
 printf ("x = %d\n", x);
 x = 4;
 (*p)++;
 printf ("p = %d\n", *p);
 x--;
 printf ("x = %d\n", x);
 (*p) += x;
 printf ("y = %d\n", y);
 return(0);
}
//Resposta: O valor de y vai ser igual há 4, pois seu endereço está apontando por p,
//então o fato de valor de p ser (*p)++; seria 0+1 igual há 1 para y, e quando se soma 
// com x que está igual a 3 pois x=4 e x-- o resultado final vai ser y=4;