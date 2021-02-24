#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
     int bcost,bversion, byears;
     char bname[20],bauthor[20], byear[20];
}p[10];
int main()
{
     int n,i,ch, t=1;
     char year[20],authorname[20];
     printf("/*How Many Records of Applications You Want to Add*/\n\nEnter Limit : ");
     scanf("%d",&n);
     printf("------------------------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("\tEnter Details of Application-%d",i+1);
          printf("\n------------------------------------------\n");
          printf("Application Name : ");
          scanf("%s",p[i].bname);
          printf("Author Name : ");
          scanf("%s",p[i].bauthor);
          printf("version of application : ");
          scanf("%d",&p[i].bversion);
          printf("Year : ");
          scanf("%s",p[i].byear);
          printf("Cost of application : ");
          scanf("%d",&p[i].bcost);
          printf("------------------------------------------\n");
     }
     while(1)
     {
          printf("\n\t\tMENU\n");
          printf("------------------------------------------\n");
          printf("\n1.Applications of Specific Author");
          printf("\n2.Applications of price");
          printf("\n3.Applications of year ");
          printf("\n4.Applications of specific author and year");
          printf("\n5.Applications in the order of two fields of author and year ");
          printf("\n6.All Applications");
          printf("\n7.Exit");
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
                            printf("\nApplication Name\t:\t%s\nAuthor name\t\t:\t%s\nVersion of application\t:\t%d\nYear\t\t\t:\t%s\nCost of application\t:\t%d\n\n",p[i].bname,p[i].bauthor,p[i].bversion, p[i].byear, p[i].bcost);
                            exists=1;         
                         } 
                    }
                         if(!exists){
                             printf("Applications are not available for the given author");
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
                         printf("\nApplication Name\t:\t%s\nAuthor name\t\t:\t%s\nVersion of application\t:\t%d\nYear\t\t\t:\t%s\nCost of application\t:\t%d\n\n",p[i].bname,p[i].bauthor,p[i].bversion, p[i].byear, p[i].bcost);
                    }
                    break;
               case 3:
                    printf("Enter year: ");
                    scanf("%s",year);
                    exists=0;
                    for(i=0;i<n;i++)
                    {
                    if(strcmp(p[i].byear,year)==0){
                            printf("\nApplication Name\t:\t%s\nAuthor name\t\t:\t%s\nVersion of application\t:\t%d\nYear\t\t\t:\t%s\nCost of application\t:\t%d\n\n",p[i].bname,p[i].bauthor,p[i].bversion, p[i].byear, p[i].bcost);
                            exists=1;
                    }   
                    }
                    if(!exists)
                    {
                        printf("Applications are not available for the given year");
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
                            printf("\nApplication Name\t:\t%s\nAuthor name\t\t:\t%s\nVersion of application\t:\t%d\nYear\t\t\t:\t%s\nCost of application\t:\t%d\n\n",p[i].bname,p[i].bauthor,p[i].bversion, p[i].byear, p[i].bcost);
                            exists=1;         
                         } 
                    }
                    if(!exists)
                    {
                        printf("Books are not available for the given author and year");
                    }
                    break;
                case 5:
                    printf("Enter Author Name : ");
                    scanf("%s",authorname);
                    exists=0;
                    int byears=atoi(p[i].byear);
                    for(i=0;i<n;i++)
                    {
                         if(strcmp(p[i].bauthor,authorname)==0){
                            for(int j=0;j<n-1;j++,t++)
                            {
                            if(p[j].byears>p[j+1].byears)
                            {
                            t=p[j].byears;
                            p[j].byears=p[j+1].byears;
                            p[j+1].byears=t;
                            }
                            }
                            printf("\nApplication Name\t:\t%s\nAuthor name\t\t:\t%s\nVersion of application\t:\t%d\nYear\t\t\t:\t%s\nCost of application\t:\t%d\n\n",p[i].bname,p[i].bauthor,p[i].bversion, p[i].byear, p[i].bcost);
                            exists=1;         
                         } 
                    }
                    if(!exists)
                    {
                        printf("Applications are not available for the given year and Author");
                    }
                    break;
               case 6:
                    for(i=0;i<n;i++)
                    {
                         printf("Application Name\t:\t%s \n",p[i].bname);
                         printf("Author\t\t\t:\t%s\n",p[i].bauthor);
                         printf("Version of application\t:\t%d\n",p[i].bversion);
                         printf("Year\t\t\t:\t%s\n",p[i].byear);
                         printf("Application Cost\t:\t%d\n",p[i].bcost);
                         printf("\n------------------------------------------\n");
                    }
                    break;    
               case 7:
                    exit(0);
                default:
                    printf("Invalid choice");
          }
     }
     return 0;
}
