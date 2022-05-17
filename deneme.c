#include <stdio.h>
#include <string.h>
int main()
{
    char name[40],bolum[50],gname[40],yname[40],ydepartment[50];
    int n,no,o,nmb,yno,counter=0;
    FILE *std;
    if((std=fopen("students.dat","w"))==NULL) printf("no file!!!\n");
    else{
        printf("olusturmak istediginiz ogrenci sayisini giriniz?");
        scanf("%d",&n);
            for(int i=0;i<n;i++)
             {
            printf("lutfen sirasiyla numara isim ve bolum bilgilerini giriniz?");
            scanf("%d %s %s",&no,name,bolum);
            fprintf(std,"\n***%d. student***\nNumber: %d\nName: %s\nDepartment: %s\n",i+1,no,name,bolum);
            }
            g:
            fclose(std);
            printf("\n***yapmak istediginiz islemi seciniz?***\n1-)dosya bilgilerini listele\n2-)belirli kisileri yazdirma\n3-)ogrenci ekleme\n4-)ogrenci duzeltme");
            scanf("%d",&o);
            switch(o)
            {
                case 1:
                if((std=fopen("students.dat","r"))==NULL) printf("no file!!!\n");
                else{
                    while(!feof(std))
                    {
                        fscanf(std,"%d %s %s",&no,name,bolum);
                        printf("***\nNumber: %d\nName: %s\nDepartment: %s\n",no,name,bolum);
                    }
                }
                goto g;
                break;
            case 2:
            printf("bilgilerini yazdirmak istediginiz kisinin ismini giriniz???");
            scanf("%s",gname);
            if((std=fopen("students.dat","r"))==NULL) printf("no file!!!\n");
            else{
                while(!feof(std))
                {
                    fscanf(std,"%d %s %s",&no,name,bolum);
                    if(strlen(gname)==strlen(name)){
                    printf("***\nNumber: %d\nName: %s\nDepartment: %s\n",no,name,bolum);
                }
                }
            }
            goto g;
            break;
            case 3:
            if((std=fopen("students.dat","a"))==NULL) printf("no file!!!\n");
            else
            {
            printf("lutfen sirasiyla numara isim ve bolum bilgilerini giriniz?");
            scanf("%d %s %s",&no,name,bolum);
            fprintf(std,"\n***\nNumber: %d\nName: %s\nDepartment: %s\n",no,name,bolum);
            }
            goto g;
            break;
            case 4:
            if((std=fopen("students.dat","r+"))==NULL) printf("no file!!!\n");
            else{
            printf("guncellemek istediginiz ogrencinin numarasini giriniz??");
            scanf("%d",&nmb);
            while(!feof(std))
            {
                fscanf(std,"%d %s %s",&no,name,bolum);
                if(no==nmb)
                {
                    printf("guncellemek istediginiz ogrenci bilgileri:\n");
                    printf("***\nNumber: %d\nName: %s\nDepartment: %s\n",no,name,bolum);
                    printf("lutfen sirasiyla guncel numara isim ve bolum bilgilerini giriniz?");
                    scanf("%d %s %s",&yno,yname,ydepartment);
                    no=yno;
                    strcpy(name,yname);
                    strcpy(bolum,ydepartment);
                    printf("guncel bilgiler basariyla kaydedildi:\n");
                    printf("***\nNumber: %d\nName: %s\nDepartment: %s\n",no,name,bolum);
                    counter++;
                }
            }
            if(counter==0)
            {
                printf("ogrenci bulunamadi!!!");
            }
            goto g;
            break;
            }
            default:
            printf("yanlis secim, program sonlandiriliyor......");
            break;
    }
    }
    fclose(std);
    return 0;

}