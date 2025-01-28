#include <stdio.h>
#include <stdlib.h>
struct batsman {
    char name[20];
    int runs,score,balls,toruns,tobal,ones,twos,threes,fours,sixes;
    int maxsix,maxrun,maxfour,maxw;
    float str;
}p11[100],p13;

struct bowler {
    char name[25];
    int runsgv,wkttkn,overs;
    int maxw;
    float econ;
}p12[100],p14;

int main() {
int plno,choice;
    int i,n,m;
    printf("Vurucu ayrintisini giriniz:\n");
    printf("Vurucu sayisini giriniz:\n");
    scanf("%d",&m);
    for (i=0; i<m; i++) {
        printf("%d.Vurucu ismini giriniz:\n",i+1);
        scanf("%s",&p11[i].name);

        printf("%d.Oyuncunun aldigi birli puan sayisini giriniz:\n",i+1);
        scanf("%d",&p11[i].ones);
        printf("%d.Oyuncunun aldigi ikili puan sayisini giriniz:\n",i+1);
        scanf("%d",&p11[i].twos);
        printf("%d.Oyuncunun aldigi uclu puan sayisini giriniz:\n",i+1);
        scanf("%d",&p11[i].threes);
        printf("%d.Oyuncunun aldigi dortlu puan sayisini giriniz:\n",i+1);
        scanf("%d",&p11[i].fours);
        printf("%d.Oyuncunun aldigi altili puan sayisini giriniz:\n",i+1);
        scanf("%d",&p11[i].sixes);
        printf("%d.Oyuncunun oynadigi toplari giriniz:\n",i+1);
        scanf("%d",&p11[i].balls);
    }
    printf("\nBowlers detaylarini giriniz:\n");
    printf("Bowlers numarasini  giriniz:\n");
    scanf("%d",&n);
for (i=0; i<n; i++) {
    printf("Bowler ismini giriniz:\n");
    scanf("%s",&p12[i].name);
    printf("Bowlerin kosu mesafesini giriniz :\n");
    scanf("%d",&p12[i].runsgv);
    printf("Bowler attigi atislari giriniz:\n");
    scanf("%s",&p12[i].overs);
    printf("Bowlerin wicketlerini giriniz:\n");
    scanf("%s",&p12[i].wkttkn);
}
    printf("Detaylar icin tesekkurer\n");

do {
    printf("Secim yapiniz:\n1) Vurucu detaylari:\n2) Bowler detaylari:\n3) Mac ozeti:\n4) Kayit:\n5) Exit\n");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            printf("Detaylarini gormek icin vurucu numarasini giriniz:\n");
        scanf("%d",&plno);
        plno--;
        printf("===========================================================================\n");
        printf(" Vurucu        Kosu           toplar        dortluk       altilik        sr   \n");
        printf("===========================================================================\n");
        p11[plno].runs=(1*p11[plno].ones)+(2*p11[plno].twos)+(3*p11[plno].threes)+(4*p11[plno].fours)+(6*p11[plno].sixes);
        p11[plno].str=(p11[plno].runs*100.00)/p11[plno].balls;
        printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",p11[plno].name,p11[plno].runs,p11[plno].balls,p11[plno].fours,p11[plno].sixes,p11[plno].str);

        break;
        case 2:
            printf("Detaylarini gormek istediginiz bowler numarasini giriniz:");
        scanf("%d",&plno);
        plno--;
        printf("                         Player Detail\n  ");
        printf("=================================================================\n");
        printf(" Bowler        overs           runs        wicket       economy\n");
        printf("=================================================================\n");
        for (i=0; i<n; i++) {
            p12[plno].econ = p12[plno].runsgv/p12[plno].overs;
            printf("%-15s %-14d %-13d %-11d %-11.2f\n\n",p12[plno].name,p12[plno].overs,p12[plno].runsgv,p12[plno].wkttkn,p12[plno].econ);
        }
            break;
            case 3:
                printf("                     Mac Ozeti\n");
            printf("==========================================================================\n");
            printf(" Vurucu        Mesafe           Toplar        Dortluk      altılık       sr   \n");
            printf("==========================================================================\n");
            for (i=0; i<1; i++) {
              p11[i].runs= p11[i].runs=(1*p11[i].ones)+(2*p11[i].twos)+(3*p11[i].threes)+(4*p11[i].fours)+(6*p11[i].sixes);
                p13.toruns+=p11[i].runs;
                p11[i].str=(p11[i].runs*100.00)/p11[i].balls;
                printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",p11[i].name,p11[i].runs,p11[i].balls,p11[i].fours,p11[i].sixes,p11[i].str);
            }
            printf("TOPLAM MESAFE:%d\n\n",p13.toruns);
            printf("\n\n");
            printf("=================================================================\n");
            printf(" Bowler        overs           runs        wicket       economy\n");
            printf("=================================================================\n");
            for (i=0; i<n; i++) {
                p12[i].econ = p12[i].runsgv/p12[i].overs;
                printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n\n",p12[i].name,p12[i].overs,p12[i].runsgv,p12[i].wkttkn,p12[i].econ);
            }
            break;
            case 4:
                p13.maxrun = 0,p14.maxw=0,p13.maxfour=0,p13.maxsix=0;
            for (i=0; i<m; i++) {
                p11[i].runs=(1*p11[i].ones)+(2*p11[i].twos)+(3*p11[i].threes)+(4*p11[i].fours)+(6*p11[i].sixes);
                if (p13.maxrun < p11[i].runs) {
                    p13.maxrun = p11[i].runs;
                }
                if (p13.maxsix < p11[i].sixes) {
                    p13.maxsix = p11[i].sixes;
                }
                if (p13.maxfour < p11[i].fours) {
                    p13.maxfour = p11[i].fours;
                }
                if (p13.maxw < p12[i].wkttkn) {
                    p14.maxw = p12[i].wkttkn;
                }
            }
            printf("En fazla mesafeye sahip vurucu : %d\n",p13.maxrun);
            printf("En fazla dortluk skora sahip vurucu : %d\n",p13.maxfour);
            printf("En fazla altilik skora sahip vurucu : %d\n",p13.sixes);
            printf("En fazla wicket sahip bowler : %d\n",p13.maxw);
            break;
            case 5:
                exit(1);
            default:
                printf("Gecerli bir secim yapiniz...");
            break;

        }

}while (choice!=5);

    return 0;
}