#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
     int bcost,bversion;
     char bname[20],bauthor[20], byear[20];
}p[10];
int main()
{
     int n,i,ch, t=1;
     char year[20],authorname[20];
     printf("/*How Many Records of Books You Want to Add*/\n\nEnter Limit : ");
     scanf("%d",&n);
     printf("------------------------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("\tEnter Details of Book-%d",i+1);
          printf("\n------------------------------------------\n");
          printf("Book Name : ");
          scanf("%s",p[i].bname);
          printf("Author Name : ");
          scanf("%s",p[i].bauthor);
          printf("Book version : ");
          scanf("%d",&p[i].bversion);
          printf("Year : ");
          scanf("%s",p[i].byear);
          printf("Cost : ");
          scanf("%d",&p[i].bcost);
          printf("------------------------------------------\n");
     }
     while(1)
     {
          printf("\n\t\tMENU\n");
          printf("------------------------------------------\n");
          printf("\n1.Books of Specific Author");
          printf("\n2.Books of price");
          printf("\n3.Books of year ");
          printf("\n4.Books of specific author and year");
          printf("\n5.All Books");
          printf("\n6.Exit");
          printf("\n------------------------------------------\n");
          printf("\nEnter Your Choice : ");
          scanf("%d",&ch);
          printf("\n");
          switch(ch)
          {
               case 1:
                    printf("Enter Author Name : ");
                    scanf("%s",authorname);
                    int exists=0;
                    for(i=0;i<n;i++)
                    {
                         if(strcmp(p[i].bauthor,authorname)==0){

                            printf("\nBook Name : %s\nAuthor name : %s\nBook Version : %d\nBook Year : %s\nBook Cost : %d\n\n",p[i].bname,p[i].bauthor,p[i].bversion, p[i].byear, p[i].bcost);
                            exists=1;         
                         } 
                    }
                         if(!exists){
                             printf("Books are not available for the given author");
                         }
                    break;
               
               case 2:
       
                    for(int i=0;i<n;i++)
                    {
                    for(int j=0;j<n-1;j++,t++)
                    {
                    if(p[j].bcost>p[j+1].bcost)
                    {
                    t=p[j].bcost;
                    p[j].bcost=p[j+1].bcost;
                    p[j+1].bcost=t;
                    }
                    }
                    }
                    for(i=0;i<n;i++)
                    {
                         printf("\nBook Name : %s\nAuthor name : %s\nBook Version : %d\nBook Year : %s\nBook Cost : %d\n\n",p[i].bname,p[i].bauthor,p[i].bversion, p[i].byear, p[i].bcost);
                    }
                    break;
               case 3:
                    printf("Enter year: ");
                    scanf("%s",year);
                    exists=0;
                    for(i=0;i<n;i++)
                    {
                    if(strcmp(p[i].byear,year)==0){
                            printf("\nBook Name : %s\nAuthor name : %s\nBook Version : %d\nBook Year : %s\nBook Cost : %d\n\n",p[i].bname,p[i].bauthor,p[i].bversion, p[i].byear, p[i].bcost);
                            exists=1;
                    }   
                    }
                    if(!exists)
                    {
                        printf("Books are not available for the given year");
                    }
                    break;
               case 4:
                    printf("Enter Author Name : ");
                    scanf("%s",authorname);
                    printf("Enter year: ");
                    scanf("%s",year);
                    exists=0;
                    for(i=0;i<n;i++)
                    {
                         if((strcmp(p[i].bauthor,authorname)==0)&&(strcmp(p[i].byear,year)==0))
                         {
                            printf("\nBook Name : %s\nAuthor name : %s\nBook Version : %d\nBook Year : %s\nBook Cost : %d\n\n",p[i].bname,p[i].bauthor,p[i].bversion, p[i].byear, p[i].bcost);
                            exists=1;         
                         } 
                    }
                    if(!exists)
                    {
                        printf("Books are not available for the given author and year");
                    }
                    break;
               case 5:
                    for(i=0;i<n;i++)
                    {
                         printf("Book Name : %s \n",p[i].bname);
                         printf("Author : %s\n",p[i].bauthor);
                         printf("Version : %d\n",p[i].bversion);
                         printf("Year : %s\n",p[i].byear);
                         printf("Cost : %d\n",p[i].bcost);
                         printf("\n------------------------------------------\n");
                    }
                    break;
               case 6:
                    exit(0);
                default:
                    printf("Invalid choice");
          }
     }
     return 0;
}
