/* 計算機概論實務-基本練習作業-作業21*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/07 01:15*/ 
#include <stdio.h>  //函示庫 
#include <stdlib.h> //函示庫 
struct servitor //宣告Servitor這一個結構體 
{
   char id[8],name[12];//編號、姓名
   int hourly_pay,hours,payment;//時薪、工作時數、月收入
};
void calc(struct servitor *); //傳入cale函式計算 
int main(void)
{
   struct servitor emp; 
   printf("計算機概論實務-基礎練習作業-作業21\n");
   printf("製作人：郭柏鋒\n");
   printf("完成時間：2019/05/07 01:15\n");
   printf("-------------------------------------------------\n");
   printf("                 Servitor手機結構體                 \n");
   printf("-------------------------------------------------\n"); 
   printf("請輸入編號,姓名,時薪,工作時數: ");
   scanf(" %s %s %d %d", emp.id, emp.name, &emp.hourly_pay, &emp.hours);//輸入 
   calc(&emp);
   printf("月收入: %d\n", emp.payment);//顯示 
   system("pause");//暫停 
   return 0;//回傳值 0 
}

void calc(struct servitor *p)//計算方式 
{
    p->payment=p->hourly_pay*p->hours;
}

