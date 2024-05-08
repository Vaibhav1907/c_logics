1)
Check whether the trainge , square , reactanlge (area & volume)
->input area /volume 
area 
traingle square rectangle 
square


ans:1  #include <stdio.h>

int main()
{
    char v;
    scanf("%c",&u);
    //printf("%c",u);
    if(u=='t')
    {
        char s;
        scanf(" %c",&t);
        if(t=='a'){
           int T,b,h;
            printf("the base & height of triangle: ");
            scanf("%d %d",&b,&h);
            T=0.5*b*h;
            printf("the area of triangle: %d",T);
        }
        else if(t=='v')
        {
           
           int v,a,c,l;
            printf("the base & height of triangle: ");
            scanf("%d %d %d",&a,&c,&l);
            v=0.5*a*c*l;
            printf("the area of triangle: %d",v);
            
        }
       
    }
    else if(u=='r')
    {
        char r;
         if(r=='a'){
           int r,b,h;
            printf("the base & height of triangle: ");
            scanf("%d %d",&b,&h);
            r=b*h;
            printf("the area of triangle: %d",r);
        }
        else if(r=='v')
        {
           
           int v,a,c,l;
            printf("the base & height of triangle: ");
            scanf("%d %d %d",&a,&c,&l);
            v=a*c*l;
            printf("the area of triangle: %d",v);
            
        }
    }
    else if (u=='s'){
        char s;
         if(s=='a'){
           int s,b;
            printf("the base & height of triangle: ");
            scanf("%d %d",&b,&s);
            s=b*b;
            printf("the area of triangle: %d",s);
        }
        else if(s=='v')
        {
           
           int s,a,c;
            printf("the base & height of triangle: ");
            scanf("%d %d",&a,&c);
            s=a*a*c;
            printf("the area of triangle: %d",s);
        }
            
    }
    

    return 0;
}





3)
 calculate the factorial of a given number in C

ans:3 #include <stdio.h>

int main()
{
   int fact=1;
   int num=5;
   for (i==1;i>=num;i++){
       fact=fact*i;
       printf("%d" fact);
   }
    return 0;
}


4)
write a C program  sum of digits ?

ans:4 #include<stdio.h>
int main()
{
    int a=1;
    int sum=0;
    while(a<5){
        sum=sum+a;
    }
    printf("%d",sum);
}

5)
write a C program count of numbers  ?
ans5: #nclude<stdio.h>
int main(){
int num=672;
int count=0;
while(a>0){
num=num/10;
count++;

}
printf("%d",count);

}


6)
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25

ans:6 #include <stdio.h>

int main()
{
    int x;
   for(int i=1;i<=5;i++){
       x=i;
       for(int j=1;j<=5;j++){
          printf("%d ",x);
          x=x+5;
       }
       printf("\n");
   }
    return 0;
}

7)
*******
*     *
*******
*     *
*     *

ans:7  #include <stdio.h>
int main()
{
   for(int i=1;i<=5;i++){
       for(int j=1;j<=5;j++){
          if(i==1 || j==1 || i==3||j==5){
               printf("*");
          }
          else{
              printf(" ");
          }
       }
       printf("\n");
   }
    return 0;
}


10)C program that prompts the user to enter a number and then prints its multiplication table 2? 

ans:10 #include <stdio.h>

int main()
{
   int a;
   printf("enter the number");
   scanf("%d"&a);
   for(int i=1;i<=10;i++){
       printf("%d ",i*2);
   }
    return 0;
}


11)
write a c program to check a voter is valid for vote or not ? 

ans:11  #include <stdio.h>
int
main ()
{
  int a;
  
 printf("enter the number");
 scanf("%d",&a);
 if(a>18){
     printf("valid for vote");
 }
     else {
         printf("Not valid");
     }
 
 
 return 0;
}

12)
make a c program a number is divisible by 5 and 8 any one ?
ans 12.  #include <stdio.h>
int
main ()
{
  int a;
  
 printf("enter the number");
 scanf("%d",&a);
 if(a%5==0 ||a%8==0){
     printf("divisble by 5 and 8 ");
 }
     else {
         printf("input mismatch");
     }
 
 
 return 0;
}

13)
make a c program to check a gender male and female ? 
ans:13   #include <stdio.h>
int
main ()
{
  char a;
  
 printf("enter the charcter");
 scanf("%c",&a);
 if(a=='m'){
     printf("male ");
 }
 
 else if (a=='f'){
     printf("female ");
 }
     else {
         printf("other");
     }
 
 
 return 0;
}

14)
make a c program to reverse a number ? 
ans:14 #include <stdio.h>
int main()
{
   int num=672;
   int rem,sum=0;
   while(num>0){
       rem=num%10;
       sum=sum*10+rem;
       num=num/10;
   }
   printf("%d",sum);
    return 0;
}

15)
1
12
234
3456
45678

ans:15 #include <stdio.h>
int main()
{   
   
  for(int i=0;i<=5;i++)
  {
      for(int j=0;j<=i;j++)
      {
          
          
          printf("%d",j+i);
         
      }
      printf("\n");
      
  }
       return 0;
   }

16)
Write a program that takes an integer as input and prints the Fibonacci series up to that number.
ans:16 .
#include <stdio.h>

int main()
{
    int n1=4,n2=5,n3;
    printf("%d %d ",n1,n2);
    int num=10;
    for(int i=1;i<=num;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}



20)
Write a C program to check if a given number is an Armstrong number or not. An Armstrong number 
ans:20#include <stdio.h>
int main()
{ 
   int num=158;
   int rem,sum=0;
   int temp=num;
   while(num>0){
       rem=num%10;
       sum=sum+rem*rem*rem;
       num=num/10;
   }
   if(temp == sum){
       printf("armstrong number");
   }
   else{
       printf("not match");
   }
    return 0;
}

21)
******
    *
   *
  *
 *
******

ans:21    #include <stdio.h>
int main()
{
   for(int i=1;i<=5;i++){
       for(int j=1;j<=4;j++){
          if(i==1 || i==5||i+j==6){
               printf("*");
          }
          else{
              printf(" ");
          }
       }
       printf("\n");
   }
    return 0;
}

22)
write a C program and check a number is  pallindrome or not ?
ans:22#include <stdio.h>
int main()
{ 
   int num=12321;
   int rem,sum=0;
   int temp=num;
   while(num>0){
       rem=num%10;
       sum=sum*10+rem;
       num=num/10;
   }
   if(temp == sum){
       printf("pallindrome number");
   }
   else{
       printf("not match");
   }
    return 0;
}



23)
write a C program in C to count the number of digits in a given input?
ans:23 #include <stdio.h>
int main()
{ 
    int num=5637;
    int count=0;
    while(num>0){
       num=num/10;
       count++;
    }
    printf("%d",count);
    return 0;
}

24)
write a C program to print the multiplication table for numbers 2 to 10?
ans:24 #include <stdio.h>

int main()
{
   for(int i=1;i<=10;i++){
       printf("%d ",i*2);
   }
    return 0;
}

25)
C program that prompts the user to enter their gender, using 'M' for male and 'F' for female, and then checks and displays whether the user is male or female based on the input?

ans:25 ans.25.
#include <stdio.h>

int main()
{
    char a;
    printf("Enter the value of a: ");
    scanf("%c",&a);
    if(a=='g'){
        char a;
        printf("Enter the gender: ");
        scanf(" %c",&a);
        if(a=='m'){
            printf("Male");
        }
        else if(a=='f'){
            printf("Female");
        }
        else{
            printf("Not categorized");
        }
      
    }
    return 0;
}