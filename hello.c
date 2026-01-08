//hello.c
#include<stdio.h>
struct ram
{
  char n[40];
  int eng  , nepali ,maths ,hpe, science , b;
};

int main (){
  /* struct ram r[1];
  int a;
  printf("enter thw no of student you want to see result of");
  scanf("%d",&a);
  //input datas 
  for (int i=0;i<=a;i++){
    printf("enter the name of student ");
    scanf("%s",r[i] .n);
    printf("enter the marks of eng  ");
    scanf("%d",&r[i].eng);
     printf("enter the marks of maths ");
    scanf("%d",&r[i].maths);
     printf("enter the marks of hpe  ");
    scanf("%d",&r[i].hpe);
     printf("enster the marks nepali ");
    scanf("%d",&r[i].nepali);
     printf("enter the marks science");
    scanf("%d",&r[i] .science);
     printf("enter the roll no ");
    scanf("%d",&r[i] .b);
 //percentage calc
  printf ("for the g.p.a of  student %s",r[i] .n);
  int sto = (r [i].eng  + r [i].maths  + r [i].hpe  + r [i].nepali ) / 5;
  printf("\n");

  // pass or fail
  printf("\n");
  if (sto >=80){
    printf("you got A");
  } else if (sto>=60){
    printf("you got B");
  } else if (sto>=40){
    printf("you got C");
  } else {
    printf("you failed");
  }
  
 }
 printf("\n");
 */
// for printing 3 largest and smallest no
/*int a ,b,c;
printf ("enter 3 njmber");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c){
printf ("%d is the  largesst",a);
 if (b>c ){
printf ("%d is the 2nd largesst",b);
if(c<b){
    printf ("%d is the 3rd largesst",c);
}}
else {
printf ("%d is the  largesst",c);
if(b<c){
    printf ("%d is the 3rd largesst",b);
}
 }}

if (b>a && b>c){
printf ("%d is the  largesst",b);
 if (a>c ){
printf ("%d is the 2nd largesst",a);
if(c<a){
    printf ("%d is the 3rd largesst",c);
}}
else {
printf ("%d is the  largesst",a);
if(c<a){
    printf ("%d is the 3rd largesst",c);
}
 }}

 if (c>b && c>a){
printf ("%d is the  largesst",a);
 if (b>a ){
printf ("%d is the 2nd largesst",b);
if(a<b){
    printf ("%d is the 3rd largesst",a);
}}
else {
printf ("%d is the  largesst",a);
if(b<a){
    printf ("%d is the 3rd largesst",b);
}
 }}*/

 //for inverse do j=i+1
 int a ;
printf("enter the loop ");
scanf("%d",&a);
for(int i=0;i<=a;i++){
  for(int j=0;j<=i;j++){
    printf("*");

  }
  printf("\n");
}
 return 0;
}

