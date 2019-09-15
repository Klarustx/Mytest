//////////////////�ļ����� MatrixLib.h ////////////////////////////////////////
////  ��������ģ��Ŀ⺯��ͷ�ļ�
/* ��Ҫ���ܣ� �������ɿ⺯��
*/
/***********************************************************/
#ifndef     _TEST_H_
#define    _TEST_H_

#include <math.h>  
#include <malloc.h>  
#include<string.h>
#include<stdio.h>
#include <stdlib.h>
  
typedef struct  
{  
    double re;  
    double im;  
}COMPLEX;  


/*������ʼ��*/  
COMPLEX first_set_value(double c1, double c2)  
{  
    COMPLEX c;  
    c.re =c1;  
    c.im = c2;  
    return c;  
}  

/*�����ļ�����*/  
COMPLEX Add(COMPLEX c1, COMPLEX c2)  
{  
    COMPLEX c;  
    c.re = c1.re + c2.re;  
    c.im = c1.im + c2.im;  
    return c;  
}  
/*�����ļ�����*/  
COMPLEX Sub(COMPLEX c1, COMPLEX c2)  
{  
    COMPLEX c;  
    c.re = c1.re - c2.re;  
    c.im = c1.im - c2.im;  
    return c;  
}  
/*�����ĳ�����*/  
COMPLEX Mul(COMPLEX c1, COMPLEX c2)  
{  
    COMPLEX c;  
    c.re = c1.re*c2.re - c1.im*c2.im;  
    c.im = c1.re*c2.im + c1.im*c2.re;  
    return c;  
}  


/*�������෴��*/  
COMPLEX Oppsite(COMPLEX c1)  
{  
    COMPLEX c;  
    c.re = -c1.re;  
    c.im = -c1.im;  
    return c;  
}  

/*������ģ*/
double Module(COMPLEX c1)
{
	double c;
	c =  pow(c1.re*c1.re + c1.im*c1.im,2);
    return c; 
}
/*�����ĸ�ֵ*/ 
COMPLEX Set_value(COMPLEX c1)  
{  
    COMPLEX c;  
    c.re = c1.re;  
    c.im = c1.im;  
    return c;  
}  


/*��������*/ 
COMPLEX Get_inverse(COMPLEX c1)  
{  
    COMPLEX c; 
	double p = c1.re*c1.re + c1.im*c1.im;
    c.re = c1.re/p;  
    c.im = -c1.im/p;  
    return c;  
}  


#endif