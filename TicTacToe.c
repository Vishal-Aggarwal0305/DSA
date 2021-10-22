#include<stdio.h>
#include<string.h> 
#include<dos.h>
#include<stdlib.h>
#include<unistd.h>

int insert(char,int);
int turn(int);
int check();
int exist(int);
int a_insert(int);
int pos(int);
int position(int);
int convert();
int input_pos(char,char[]);

int a[10],i;
static char p1[100],p2[100]="COMPUTER";
char str1[]="   1\t|   2\t|   3\n________ ________ ________\n   4\t|   5\t|   6\n________ ________ ________\n   7\t|   8\t|   9";
static int t,ind=0,n1=0,n2=0,d=0;                           
char str[]="   -\t|   -\t|   -\n________ ________ ________\n   -\t|   -\t|   -\n________ ________ ________\n   -\t|   -\t|   -";


int main()
{
    system("color D0");
    int choice;

    while(1)
    {
        int choice;  
        ind=0;    
        system("cls");
        
        puts(str1);
        printf("\n");
        puts(str);
        printf("\n");

        printf("1. player 1 VS player 2    or     2. Human VS computer\n\nEnter your choice : ");
        fflush(stdin);
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("\nEnter player X name : ");
            fflush(stdin);
            gets(p1);
            printf("\nEnter player O name : ");
            gets(p2);
        }
        else
        {
            printf("\nEnter your name : ");
            fflush(stdin);
            gets(p1);
            static char p2[100]="COMPUTER";
        }

        label:
        printf("\nWho want to start game : \t1.%s X\t2.%s O\n\nYour choice : ",p1,p2);
        fflush(stdin);
        scanf("%d",&t);
        if(t!=1 && t!=2)
        {
            goto label;
        }

        turn(choice);   

        start:
        printf("\n\nDo you want to play again ?\t1.YES\t2.NO\n");
        fflush(stdin);
        scanf("%d",&choice);

        if(choice==1)
        {
            for(i=0;i<10;i++)
            {
                a[i]=0;
            }
        }

        if(choice==2)
        {
            printf("\n\nPlayer(X) wins %d times\nPlayer(O)) %d times\nnumber of draw matchs : %d",n1,n2,d);
            break;
        }

        else if(choice!=1 && choice!=2)
            goto start;

        convert();         
    }
    
}

int insert(char m,int pos)
{
    int res=position(pos);
    str[res]=m;
}

int turn(int choice)
{
    int che,res,flag=0,i;
    char pos;
    if(choice==2)
    {
        for(i=0;i<9;i++)
        {
            if(t==1)
            {
                res=input_pos('X',p1);
                if(res==1)
                {
                    n1++;
                    flag=1;
                    break;
                }
                t=2;
            }
            else if(t==2)
            {
                restart:

                pos=rand()%10;

                res=exist(pos);

                if(res==1 || (pos<1 || pos>9))
                {
                    goto restart;
                }
                else
                {
                    a_insert(pos);

                    system("cls");
                    printf("Let me think .");
                    sleep(1);
                    printf(".");
                    sleep(1);
                    printf(".");
                    sleep(1);
                    printf(".\n\n");
                    sleep(1);
                    insert('O',pos);
                    puts(str1);
                    printf("\n\n");
                    puts(str);
                    printf("\n\ncomputer enters at :%d\n",pos); 
                    sleep(3);
                    system("cls");
                    puts(str1);
                    printf("\n\n");
                    puts(str);
                    
                    che=check();
                    if(che==1)
                    {
                        printf("\n\n%s win",p2);
                        n2++;
                        flag=1;
                        break;
                    }
                    t=1;
                }
            }
        }
    } 
    else
    {
        for(i=1;i<10;i++)
        {
            if(t==1)
            {
                res=input_pos('X',p1);
                if(res==1)
                {
                    n1++;
                    flag=1;
                    break;
                }
                t=2;
            }

            else
            {
                res=input_pos('O',p2);
                if(res==1)
                {
                    n2++;
                    flag=1;
                    break;
                }
                t=1;
            }

        }
    }
    if(flag==0)
    {
        printf("\nmatch draw");
        d++;
    }
}

int check()
{
    if((str[3]==str[9] && str[9]==str[15] && str[3]!='-') || (str[3]==str[47] && str[47]==str[91] && str[3]!='-') || (str[3]==str[53] && str[53]==str[103] && str[3]!='-') || (str[15]==str[53] && str[53]==str[91] && str[15]!='-'))
    {
        return 1;
    }

    else if((str[9]==str[53] && str[53]==str[97] && str[9]!='-') ||(str[15]==str[59] && str[59]==str[103] && str[15]!='-') ||(str[91]==str[97] && str[97]==str[103] && str[91]!='-'))
    {
        return 1;
    }

    else if((str[47]==str[53] && str[53]==str[59] && str[53]!='-'))
    {
        return 1;
    }

    else
    {
        return 0;
    }
    
}

int exist(int pos)
{
    int flag=0,i;
    pos=position(pos);
    for(i=0;i<ind;i++)
    {
        if(a[i]==pos)
        {
            flag=1;
        }
    }
    
    return flag;
}

int a_insert(int pos)
{
    int res=position(pos);
    a[ind++]=res;
}
int position(int pos)
{
    int res;
    switch(pos)
    {
        case 1: res=3;   break;
        case 2: res=9;   break;
        case 3: res=15;  break;
        case 4: res=47;  break;
        case 5: res=53;  break;
        case 6: res=59;  break;
        case 7: res=91;  break;
        case 8: res=97;  break;
        case 9: res=103; break;
    }

    return res;
}

int convert()
{
    int i=1,res;
    for(i=1;i<10;i++)
    {
        res=position(i);
        str[res]='-';
    }
}

int input_pos(char m,char p1[])
{
    int res,che,pos;

    start:
    printf("\nEnter position %s(%c) : ",p1,m); 
    fflush(stdin);
    scanf("%d",&pos);

    res=exist(pos);

    if(res==1 || (pos<1 || pos>9))
    {
        printf("\n Error!!! retry\n");
        goto start;
    }
    else
    {
        a_insert(pos);

        insert(m,pos);
        system("cls");
        puts(str1);    
        printf("\n\n");
        puts(str);

        che=check();
        if(che==1)
        {
            printf("\n\n%s win ",p1);
            return 1;
        }
    }
}
