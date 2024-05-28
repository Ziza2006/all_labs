#include"lr.h"
#include<stdio.h>
#define YES 1
#define NO 0
void sortDescending(int arr[], int n)
{
for (int i = 0; i < n - 1; i ++)
    {
for (int j = 0; j < n - i - 1; j ++)
        {
if (arr[j]<arr[j + 1])
            {
int temp = arr[j];
arr[j]=arr[j + 1];
arr[j+1] = temp;
            }
        }
    }
}

int lab1(){
float L, v1, v2, v3, t1, t2;
printf("L=");
scanf("%f", &L);
printf("v1=");
scanf("%f", &v1);
printf("t1=");
scanf("%f", &t1);
printf("t2=");
scanf("%f", &t2);
v2=(L*(t1+t2))/(2*t1*t2);
v3=v1-v2;
if (v3<=0){
    printf("Скорость течения реки равна 0");
}else{
printf("Скорость=%f\n", v3);
}
return 0;
}
const float t1=40, t2=25;
int lab21(){
float L, v1, v2, v3;
printf("L=");
scanf("%f", &L);
printf("v1=");
scanf("%f", &v1);
v2=(L*(t1+t2))/(2*t1*t2);
v3=v1-v2;
if (v3<=0){
    printf("Скорость течения реки равна 0");
}else{
printf("Скорость=%f\n", v3);
}
return 0;
}
int lab2(){
float s, a, i;
int n, sign, k;
printf("n=");
scanf("%d", &n);
s=0;
sign=1;
i=3;
k=1;
while(i<=n){
    a=i/k;
    s=s+a*sign;
    sign=-sign;
    k=k+3;
}
printf("s=%f\n", s);
return 0;
}
int lab22(){
float s, a, i;
int n, sign, k;
printf("n=");
scanf("%d", &n);
s=0;
sign=1;
i=3;
k=1;
for(n;i<=n;i++){
    a=i/k;
    s=s+a*sign;
    sign=-sign;
    k=k+3;
}
printf("s=%f\n", s);
return 0;
}
int lab3(){
    char c;
 int flag, cnt, found,buk;
    cnt = 0;
    buk=0;
    flag = NO;
    found = NO;

    while( (c = getchar()) != EOF )
    {
        if((c>='a' && c<='z') || (c>='A' && c<='Z')){
            buk+=1;
        }
        if(c=='a' || c=='u' || c=='e'|| c=='y'|| c=='i' || c=='o'){
            flag=YES;
        }
        if(c=='.' || c==',' || c=='\n' || c==' '){
            if(buk>3){
                if(flag==YES){
                    cnt+=1;
                    }
                buk=0;}
            flag=NO;
            }

    }
    printf("number of words = %d\n", cnt);
return 0;
}
int lab4(){
    char str[1000];
    int N=5,i = 0, j = 0;;
    fgets(str, sizeof(str), stdin);
    while (str[i]) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            printf("%c",str[i]);
            i++;
        }
        j = i;
        while (str[j] || str[j] != ' ' || str[j] != '\n' || str[j] != '\t') {
            j++;
        }
        if (j - i <= N) {
            while (i < j) {
                printf("%c",str[i]);
                i++;
            }
        } else {
            i = j;
        }
    }

return 0;
}
int lab24(){
        char str[1000];
    int N=5,i = 0, j = 0,M=8;
    fgets(str, sizeof(str), stdin);
    while (str[i]) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            printf("%c",str[i]);
            i++;
        }
        j = i;
        while (str[j]  || str[j] != ' ' || str[j] != '\n' || str[j] != '\t') {
            j++;
        }
        if ((j - i) <= N) {
            while (i < j) {
                printf("%c",str[i]);
                i++;
            }
        } else {if((j - i)>=M){
        while (i < j) {
                printf("%c",str[i]);
                i++;
            }
        }else{
            i = j;}
        }
    }

    return 0;
}
int lab5(){
int m[10];
for (int i = 0; i<10; i ++)
    {
scanf("%d", &m[i]);
}
int n = 0;
int k = 9;
int x;
for (int i = 0; i<5; i++)
{
    x = m[n];
m[n]= m[k];
m[k] = x;
    n = n +1;
    k = k-1;
}
for (int i = 0; i<10; i ++)
{
printf("%d", m [i]);
}
return 0;
}
int lab25(){
int arr[6] = {1, 2, 3, 4, 5, 6};
sortDescending (arr, 3);
sortDescending (arr + 3, 3);
for (int i = 0; i < 6; i ++)
    {
printf("%d", arr[i]);
}
return 0;
}
int lab6(){
    int N,K;
    scanf("%d %d", &N,&K);
    int arr[N][K];

    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        int is_mirror = 1;
        for (int j = 0; j < K / 2; j++) {
            if (arr[i][j] != arr[i][K - 1 - j]) {
                is_mirror = 0;
                break;
            }
        }

        if (is_mirror && K % 2 == 1 && arr[i][K / 2] != arr[i][K / 2]) {
            is_mirror = 0;
        }

        if (is_mirror) {
            for (int j = 0; j < K; j++) {
                arr[i][j] = 0;
            }
        }
    }
printf("\n");
    // Вывод обновленного массива
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;

return 0;
}
int lab6dop(){
int n=3,k=3,b,key,c = 0;
    int arr[n][k],array[n*k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            scanf("%d", &arr[i][j]);
        }
    }printf("\n");


    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            array[c++] = arr[i][j];
        }
    }
    for (int i = 1; i < n*k; i++) {
        key = array[i];
        b = i - 1;

        while (b >= 0 && array[b] > key) {
            array[b + 1] = array[b];
            b = b - 1;
        }
        array[b + 1] = key;
    }
    c=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            arr[i][j] = array[c++];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

return 0;
}
int lab7(){
    int n,arr[1000],i=0,s=0,b=0,p;
    scanf("%d", &n);
    while(n>0){
        arr[b]=n%2;
        n=n/2;
        b++;
    }

    for(i;i<b;i++){
            int a=1;
            p=b-1-i;
            while(p!=0){
               a*=2;
               p--;
            }
            s+=arr[i]*a;
    }
printf("%d", s);

return 0;
}
