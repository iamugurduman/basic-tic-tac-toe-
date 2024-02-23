

#include <stdio.h>
#include <stdlib.h>

char sira[10]={'0','1','2','3','4','5','6','7','8','9'};

void ekran(){
    printf("TIC-TAC-TOE\n");
    printf("1.Oyuncu =X\n");
    printf("2.Oyuncu =O\n\n");
    printf("__  __  __ \n");
    printf("|%c | %c | %c|\n",sira[1],sira[2],sira[3]);
    printf("__  __  __\n");
    printf("|%c | %c | %c|\n",sira[4],sira[5],sira[6]);
    printf("__  __  __\n");
    printf("|%c | %c | %c|",sira[7],sira[8],sira[9]);
}

int kontrolEt(){
    if(sira[1]==sira[2] && sira[2]==sira[3])
        {
        return 1;
        }
    else if(sira[4]==sira[5] && sira[5]==sira[6])
        {
        return 1;
        }
    else if(sira[7]==sira[8] && sira[8]==sira[9])
        {
        return 1;
        }
    else if(sira[1]==sira[4] && sira[4]==sira[7])
        {
        return 1;
        }
    else if(sira[2]==sira[5] && sira[5]==sira[8])
        {
        return 1;
        }
    else if(sira[3]==sira[6] && sira[6]==sira[9])
        {
        return 1;
        }
    else if(sira[1]==sira[5] && sira[5]==sira[9])
        {
        return 1;
        }
    else if(sira[3]==sira[5] && sira[5]==sira[7])
        {
        return 1;
        }
    else if(sira[1]!='1' && sira[2]!='2' && sira[3]!='3' && sira[4]!='4' && sira[5]!='5' && sira[6]!='6' && sira[7]!='7' && sira[8]!='8' && sira[9]!='9')
        {
        return 0;
        }
    else
        {
        return -1;
        }

}

    int main(){
        int oyuncu=1;
        char deger;
        int secim;

    ekran();
        while(1==1){


    printf("\n\nOyuncu-%d ->",oyuncu);
    scanf("%d",&secim);

         if(secim>9)
    {
        printf("Yanlis deger girdiniz.");
    }
        else
        {

    if(oyuncu==1)
        {
        deger='X';
        }
    else if (oyuncu ==2)
        {
        deger='O';
        }
    if(secim==1 && sira[1]=='1')
        {
        sira[secim]=deger;
        }
    else if(secim==2 && sira[2]=='2')
        {
        sira[secim]=deger;
        }
    else if(secim==3 && sira[3]=='3')
        {
        sira[secim]=deger;
        }
    else if(secim==4 && sira[4]=='4')
        {
        sira[secim]=deger;
        }
    else if(secim==5 && sira[5]=='5')
        {
        sira[secim]=deger;
        }
    else if(secim==6 && sira[6]=='6')
        {
        sira[secim]=deger;
        }
    else if(secim==7 && sira[7]=='7')
        {
        sira[secim]=deger;
        }
    else if(secim==8 && sira[8]=='8')
        {
       sira[secim]=deger;
        }
     else if(secim==9 && sira[9]=='9')
        {
        sira[secim]=deger;
        }

    int sonuc=kontrolEt();

    if(sonuc==1)
        {
        ekran();
        printf("\n\nOyuncu-%d kazandi!!!\n",oyuncu);
        break;
        }
    else if(sonuc==0)
        {
        ekran();
        printf("\nBerabere");
        break;
        }
    else
        {
         ekran();
        if(oyuncu==1)
            {
            oyuncu=2;
            }
        else
            {
            oyuncu=1;
            }
        }
 }
        }
}