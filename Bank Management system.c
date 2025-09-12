#include<stdio.h>
char name[50];
int dep_amt,withdraw_amt,amount=100000,acc_no,mobile;
void bank();
void dep_money();
void withdraw();
void acc_details();


void main()
{

printf("Enter Your Name: ");
gets(name);

printf("Enter Your Account Number: ");
scanf("%d",&acc_no);

printf("Enter Mobile Number: ");
scanf("%d",&mobile);

printf("Balance Enquiry: %d",amount);


 bank();

 int choice;
 printf("Enter the Main menu choice Number to see about: ");
 scanf("%d",&choice);
 switch(choice)
 {
     case 1:
     dep_money();
     break;

     case 2:
     withdraw();
     break;

     case 3:
     acc_details();
     break;

     default:
     printf("INVALID NUMBER");


 }
}
void bank()
{
    printf("\nMain Menu: ");
    printf("\n 1.Deposit Money");
    printf("\n 2.Withdraw Money");
    printf("\n 3.Account Details\n\n");

}
void dep_money()
{
    printf("\n*******DEPOSITING MONEY*******");
    printf("\nEnter the Amount: ");
    scanf("%d",&dep_amt);
    amount=amount+dep_amt;
    printf("\n*******MONEY DEPOSITED*******");
    printf("\nCurrent Balance %d",amount);

}

void withdraw()
{
    printf("\n********WITHDRAWING MONEY*******");
    printf("\nENTER THE AMOUNT: ");
    scanf("%d",&withdraw_amt);
    amount=amount-withdraw_amt;
    printf("\nCurrent Balance %d",amount);

}

void acc_details()
{
    printf("\nName %s",name);
    printf("\nAccount number %d",acc_no);
    printf("\nCurrent Balance %d",amount);

}
