// #include <stdio.h>

// int main(void) {
//   float renda = 0, valorFinanciamento = 0, valorDescontado = 0, valorParcelas = 0;
//   int parcelas = 0;

//   scanf("%f", &valorFinanciamento);
//   scanf("%f", &renda);
//   scanf("%i", &parcelas);

//   if(parcelas <= 180){
//     valorDescontado = renda / 100 * 30;
//     valorParcelas = valorFinanciamento / 5;

//     if(valorParcelas > valorDescontado){
//       printf("Financiamento recusado. \n");
//       printf("Valor máximo da parcela: R$ %.2f", valorDescontado);
//     } else {
//       printf("Financiamento aprovado! \n");
//       printf("Valor da parcela: R$ %.2f", valorParcelas);
//     }

//   } else {
//     printf("Financiamento recusado. \n");
//     printf("Não é permitido financiamento superior a 180 parcelas.");
//   }
//   return 0;
// }