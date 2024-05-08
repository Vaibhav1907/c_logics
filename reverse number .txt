reverse number :

53219
948 
dry run +laptop 

#include <stdio.h>
int main()
{
   int num=5321;
   int rem,sum=0;
   while(num>0){
       rem=num%10;
       sum=sum*10+rem;
       num=num/10;
   }
   printf("%d",sum);
    return 0;
}
#include <stdio.h>
int main()
{
   int num=948;
   int rem,sum=0;
   while(num>0){
       rem=num%10;
       sum=sum*10+rem;
       num=num/10;
   }
   printf("%d",sum);
    return 0;
}
----------------------------------------
pallindrome number :with dry run 
12321

121

876
#include <stdio.h>
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

#include <stdio.h>
int main()
{ 
   int num=121;
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

#include <stdio.h>
int main()
{ 
   int num=876;
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
----------------------------------------
armstrong number 
153

185

#include <stdio.h>
int main()
{ 
   int num=153;
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

#include <stdio.h>
int main()
{ 
   int num=185;
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

--------
count of digit 

#include <stdio.h>
int main()
{ 
    int num=5632;
    int count=0;
    while(num>0){
       num=num/10;
       count++;
    }
    printf("%d",count);
    return 0;
}


