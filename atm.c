 #include<stdio.h>
void transaction(float *m);
void balance(float *m);
float money;
void main()
{
    int sel;
    float *p;
     p=&money;
  printf("\nEnter: \n 1. To withdraw or deposit money from your account\n 2. To check your balance\n 3. To exit\n");
  scanf("%d",&sel);
  if(sel==1)
  {
    transaction(p);
  }
  else if (sel==2)
  {
    balance(p);
  }
else if (sel==3)
  {
    
    printf("Thank you for visiting\n");
    printf("---------------------------------------------------------------------");
  }

  else
  { 
  printf("wrong input try again \n");
  printf("---------------------------------------------------------------------");
  main();
  }
}
 
 
 void transaction(float *m)
{
    int ch; float amt,finalamt;
printf("Enter : \n 1. To deposit money in your account\n 2. To withdraw money from your account\n");
scanf("%d",&ch);
if(ch==1)
{
    printf("Enter amount to be deposited: ");
    scanf("%f",&amt);
    finalamt=*m+amt;
    printf("%f is your new balance\n",finalamt);
    *m=finalamt;
    printf("---------------------------------------------------------------------");
   main();
}
else if(ch==2)
{
    printf("Enter amount to be withdrawn: ");
    scanf("%f",&amt);
    if(*m>amt)
    { 
    finalamt=*m-amt;
    printf("%f is your new balance \n",finalamt);
    *m=finalamt;
    printf("---------------------------------------------------------------------");
   main();
    }
    else
    {
        printf("insufficient balance try again \n");
        printf("---------------------------------------------------------------------");
         main();
    }
   
}
else
{
 printf("wrong input try again \n");
 printf("---------------------------------------------------------------------");
 main();
}
}


void balance(float *b)
{
 printf("%f is your account balance\n",*b);
 printf("---------------------------------------------------------------------");
 main();
}
