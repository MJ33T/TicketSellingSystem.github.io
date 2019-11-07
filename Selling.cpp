#include <stdio.h>
#include <string.h>

int Route_print();
void Route_choice(char d[]);
void route_wise_income(char d[]);
int Route();
int overall();
int menu();
int choice();
int total_sell_ticket();
int Division();
int i=0, count=0, n,o, count1,ticket=0;
int raj, raj1, chi, chi1, khu, khu1, bar, bar1, ran, ran1, sy, sy1;
char d[100];
int rajcountday=0,rajcountnight=0,chittcountday=0,chittcountnight=0;
int khulcountday=0,khulcountnight=0,barcountday=0,barcountnight=0;
int rancountday=0,rancountnight=0,sycountday=0,sycountnight=0;

struct division
{
    char div[100];
};
struct division a[100];


int Division()
{
    FILE *fp;
    printf("\n");
    fp=fopen("Division.txt","r");
    if(fp==NULL){
        printf("Can't Input\n");
        return 0;
    }
    while(fscanf(fp, "%s", a[i].div) != EOF)
    {
        //printf("%s\n", a[i].div);

        i++;
        //count++;
    }
}

int menu()
{
    printf("\n\n\n\n\t\t\t\t\t********BUS TICKET SELLING********\n\n\n\n\n");
    printf("\t\t\t\t\t    Selling Ticket -- Press 1\n\n\n");
    printf("\t\t\t Route Wise Total Selling Ticket And Overall Earn Money -- Press 2\n\n\n");
    printf("\t\t\t       Total Selling Ticket And Overall Earn Money -- Press 3\n\n\n");
}

int main()
{
    Division();
    while(1){
    int ch;

    menu();

    printf("\t\t\t\t\t\tEnter Your Choice: ");
    scanf("%d", &ch);


    if(ch==1)
    {
        Route();
        printf("\t\t\tEnter The Destination:");
        //getchar();
        scanf("%s",d);
        Route_choice(d);

    }
    else if(ch == 2){

        Route();
        printf("\t\t\tEnter The Destination:");
        scanf("%s", d);
        route_wise_income(d);

    }
    else if (ch == 3)
    {
        overall();
        total_sell_ticket();
    }
    }
}




int Route()
{
    printf("\n\n\t\t\t *********Please Select Destination From Central Dhaka********\n\n\n");
    Route_print();


}

int Route_print()
{
    for(o=0; o<i; o++){
        printf("\t\t\t\t\t%d. %s\n\n",o+1, a[o].div);
    }
}

void Route_choice(char d[])
{

    if(strcmp(d, a[0].div)== 0){
        choice();
        if(n == 1)
        {
            rajcountday++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Morning\n\n");

        }
        else if(n == 2)
        {
            rajcountnight++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Night\n\n");
        }
    }
    else if(strcmp(d, a[1].div)== 0){
        choice();
        if(n == 1)
        {
            chittcountday++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Morning\n\n");

        }
        else if(n == 2)
        {
            chittcountnight++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Night\n\n");

        }
    }
    else if(strcmp(d, a[2].div)== 0){
        choice();
        if(n == 1)
        {
            khulcountday++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Morning\n\n");

        }
        else if(n == 2)
        {
            khulcountnight++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Night\n\n");

        }
    }
    else if(strcmp(d, a[3].div)== 0){
        choice();
        if(n == 1)
        {
            barcountday++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Morning\n\n");
        }
        else if(n == 2)
        {
            barcountnight++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Night\n\n");
        }
    }
    else if(strcmp(d, a[4].div)== 0){
        choice();
        if(n == 1)
        {
            rancountday++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Morning\n\n");
        }
        else if(n == 2)
        {
            rancountnight++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Night\n\n");
        }
    }
    else if(strcmp(d, a[5].div)== 0){
        choice();
        if(n == 1)
        {
            sycountday++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Morning\n\n");
        }
        else if(n == 2)
        {
            sycountnight++;
            printf("\n\n\n\t\t\t\t One Ticket Successfully Buy At Night\n\n");
        }
    }
    else
        printf("\t\t\t\tNo Route\n\n");
}

int choice()
{
    printf("\n\n\n\t\t\t\t\tChoose Day Time Or Night Time\n\n\n");
    printf("\t\t\t\t\t Day -- Press 1\n\n\t\t\t\t\t Night -- Press 2\n\n\n");
    printf("\t\t\t\t Enter Your Choice: ");
    scanf("%d", &n);
}

int overall()
{
    count1=(rancountday+rancountnight+sycountday+sycountnight+khulcountday+khulcountnight+barcountday+barcountnight+rajcountday+rajcountnight+chittcountday+chittcountnight)*500;
    printf("\n\n\n\t\t\t\t\t\t Over All Income:%d/-\n\n\n", count1);
}

int total_sell_ticket()
{
    ticket=(rancountday+rancountnight+sycountday+sycountnight+khulcountday+khulcountnight+barcountday+barcountnight+rajcountday+rajcountnight+chittcountday+chittcountnight);
    printf("\t\t\t\t\t       Total Selling Ticket: %d\n\n\n", ticket);
}

void route_wise_income(char d[])
{
    if(strcmp(d, a[0].div)== 0){
        raj=rajcountday+rajcountnight;
        raj1=(rajcountday+rajcountnight)*500;
        printf("\n\t\t\t\t\t\t Total Ticket: %d\n\n", raj);
        printf("\n\n\t\t\t\t\t\t Total Income: %d", raj1);
    }
    else if(strcmp(d, a[1].div)== 0){
        chi=chittcountday+chittcountnight;
        chi1=(chittcountday+chittcountnight)*500;
        printf("\n\t\t\t\t\t\t Total Ticket: %d\n\n", chi);
        printf("\n\n\t\t\t\t\t\t Total Income: %d", chi1);
    }
    else if(strcmp(d, a[2].div)== 0){
        khu=khulcountday+khulcountnight;
        khu1=(khulcountday+khulcountnight)*500;
        printf("\n\t\t\t\t\t\t Total Ticket: %d\n\n", khu);
        printf("\n\n\t\t\t\t\t\t Total Income: %d", khu1);
    }
    else if(strcmp(d, a[3].div)== 0){
        bar=barcountday+barcountnight;
        bar1=(barcountday+barcountnight)*500;
        printf("\n\t\t\t\t\t\t Total Ticket: %d\n\n", bar);
        printf("\n\n\t\t\t\t\t\t Total Income: %d", bar1);
    }
    else if(strcmp(d, a[4].div)== 0){
        ran=rancountday+rancountnight;
        ran1=(rancountday+rancountnight)*500;
        printf("\n\t\t\t\t\t\t Total Ticket: %d\n\n", ran);
        printf("\n\n\t\t\t\t\t\t Total Income: %d", ran1);
    }
    else if(strcmp(d, a[5].div)== 0){
        sy=sycountnight+sycountday;
        sy1=(sycountnight+sycountday)*500;
        printf("\n\t\t\t\t\t\t Total Ticket: %d\n\n", sy);
        printf("\n\n\t\t\t\t\t\t Total Income: %d", sy1);
    }
}
