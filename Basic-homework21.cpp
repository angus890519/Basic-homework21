/* �p������׹��-�򥻽m�ߧ@�~-�@�~21*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/07 01:15*/ 
#include <stdio.h>  //��ܮw 
#include <stdlib.h> //��ܮw 
struct servitor //�ŧiServitor�o�@�ӵ��c�� 
{
   char id[8],name[12];//�s���B�m�W
   int hourly_pay,hours,payment;//���~�B�u�@�ɼơB�리�J
};
void calc(struct servitor *); //�ǤJcale�禡�p�� 
int main(void)
{
   struct servitor emp; 
   printf("�p������׹��-��¦�m�ߧ@�~-�@�~21\n");
   printf("�s�@�H�G���f�W\n");
   printf("�����ɶ��G2019/05/07 01:15\n");
   printf("-------------------------------------------------\n");
   printf("                 Servitor������c��                 \n");
   printf("-------------------------------------------------\n"); 
   printf("�п�J�s��,�m�W,���~,�u�@�ɼ�: ");
   scanf(" %s %s %d %d", emp.id, emp.name, &emp.hourly_pay, &emp.hours);//��J 
   calc(&emp);
   printf("�리�J: %d\n", emp.payment);//��� 
   system("pause");//�Ȱ� 
   return 0;//�^�ǭ� 0 
}

void calc(struct servitor *p)//�p��覡 
{
    p->payment=p->hourly_pay*p->hours;
}

