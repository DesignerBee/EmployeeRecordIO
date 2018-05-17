//Mylib.h Copyrights to DesignerBe
#include<string.h>
calsum(int *ptr, int num)
{
int sum,i;
for(i=0;i<num;i++)
{
sum+= *(ptr+i);
}
return (sum);
}

arrpro(int *ptr,int num)
{
int product,i;
for(i=0;i<num;i++)
{
product*= *(ptr+i);
}
return product;
}

struct car
{
	char* c_name;
	int m_num;
	char* p_issue;
};

typedef struct car CARS;

typedef struct
{
	char* name[30];
	char* UID[10];
	char m_type;
	float q_litres;
}Mi;

float m_calc(char m_type, float q_litres)
{
	if(m_type='B')
		return (q_litres*20.25);
	else
		return (q_litres*12.75);
}

int* ans(int d)
{
	d = d+12;
	return &d;
}