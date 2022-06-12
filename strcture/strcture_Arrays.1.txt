#include<stdio.h>
#include<string.h>
struct employee{
    int ID;
    float salary;
    char name[33];
};
int main(){
    struct  employee facebook[100];

    facebook[0].ID = 100;
    facebook[0].salary = 100.34;
    strcpy(facebook[0].name, "harry_bhai");

    facebook[1].ID = 106;
    facebook[1].salary = 120.34;
    strcpy(facebook[1].name, "Ai Shehaz");

    facebook[2].ID = 100;
    facebook[2].salary = 100.34;
    strcpy(facebook[2].name, "Aman sharma jadeja");
    return 0;
}