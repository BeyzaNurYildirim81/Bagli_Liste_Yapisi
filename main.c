#include <stdio.h>
#include <stdlib.h>

//d���m olu�turmak i�in struct yap�s� kullan�l�yor.
struct node{
int data;
struct node *sonraki;

};


int main()
{
    struct node* ilkdugum = NULL;
    ilkdugum = (struct node*)malloc(sizeof(struct node));
    struct node* ikincidugum = (struct node*)malloc(sizeof(struct node)); // �stte iki sat�rda yapt���m�z� tek sat�rda yeni bir d���m i�in yapt�k.
    struct node* ucuncudugum = (struct node*)malloc(sizeof(struct node));
    struct node* dort=(struct node*)malloc(sizeof(struct node));


    ilkdugum->data=15;
    ilkdugum->sonraki=ikincidugum;

    ikincidugum->data=81;
    ikincidugum->sonraki=ucuncudugum;

    ucuncudugum->data=24;
    ucuncudugum->sonraki=dort;

    dort->data=76;
    dort->sonraki=NULL;

    printf("%d->%d->%d->%d",ilkdugum->data,ikincidugum->data,ucuncudugum->data,dort->data);

    return 0;
}
