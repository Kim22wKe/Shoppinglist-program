
#include<stdio.h>
int main(){

  int code, qty;

  float price,amount,totalAmount,amountSpent;
  char addAnother;

 do{
     printf("local shop\n");
  printf("(1)maize flour\t\t php 200.00\n");
  printf("(2)sugar/t/t php 150.00\n");
  printf("(3)cooking oil/t/t php 400.00\n");
  printf("(4)lentils/t/t php 300.00\n");
  printf("(5)soap/t/t php 150.00\n");


  printf("Enter code\n");
  scanf("%d",&code);
  printf("Enter qty\n");
  scanf("%d",&qty);

 switch(code)
{
case 1: price=200.00;
        break;
case 2: price=150.00;
        break;
case 3:price=400.00;
        break;
case 4:price=300.00;
        break;
case 5:price=150.00;
        break;


}
  amount=price*qty;
printf("n\amount: %.2f",amount);

  totalAmount=totalAmount+amount;
printf("n/totalAmount: %f",totalAmount);

printf("n\addAnother order (y/n)? ");
addAnother = getche();
 } while(addAnother == 'y');

 order list= items added;

   amountSpent=totalAmount;
printf("n\amountSpent: %.2f",amountSpent);

  printf("n\ local shop welcome back");



}
