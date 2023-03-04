
// #include<stdio.h>

// struct kashish{
//     int a;
//     char b;
//     char d[100];
// } sakshi;

// int main(){
 
//   struct kashish sakshi = {5,'k',"kashish is learning c programming language"};

//   sakshi.a;
//   sakshi.b;
//   sakshi.d;
//   printf("%d\n%c\n%s \n",sakshi.a,sakshi.b,sakshi.d);



//     return 0;
     

// }


// struct college{

// struct school{

// int adm;
// int year;
// char a[50];
// };

// struct student{

// int rollno;
// char class[30];

// struct school s;
// };

// int main(){


// struct student p = {38,"eleventh",2056,2020,"VM sen.sec.school"};

// p.rollno;
// p.class;
// p.s.adm;
// p.s.year;
// p.s.a;

// printf("%d\n%s\n%d\n%d\n%s\n",p.rollno,p.class,p.s.adm,p.s.year,p.s.a);

// return 0;
// }


// writing contents in file

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//    int num1,num2,num3;
//    FILE *kashish;

//    // use appropriate location if you are using MacOS or Linux
//    kashish = fopen("D:\\program.txt","w");

//    if(kashish == NULL)
//    {
//       printf("Error!");   
//       exit(1);             
//    }

//    printf("Enter num1: ");
//    scanf("%d",&num1);
//    printf("Enter num2: ");
//    scanf("%d",&num2);

//    num3 = num1+num2;

//    fprintf(kashish,"%d",num3);
//    fclose(kashish);

//    return 0;
// }   


// file reading in c 

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *kashish;

   if ((kashish = fopen("D:\\program.txt","r")) == NULL){
       printf("Error! opening file because this is empty file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   } 

   fscanf(kashish,"%d", &num);

   printf("Value of n=%d", num);
   fclose(kashish); 
  
   return 0;
}