#ifndef __TEXT_H__
#define __TEXT_H__	 
#include <stm32f10x.h>
//#include "fontupd.h"
//////////////////////////////////////////////////////////////////////////////////	 

//������ʾ ��������	   
								  
////////////////////////////////////////////////////////////////////////////////// 	 
 					     
u8 Get_HzMat(unsigned char *code,unsigned char *mat,u8 size);			//�õ����ֵĵ�����
void Show_Font(u16 x,u16 y,u8 *font,u8 size,u8 mode);					//��ָ��λ����ʾһ������
void Show_Str(u16 x,u16 y,u16 width,u16 height,u8*str,u8 size,u8 mode);	//��ָ��λ����ʾһ���ַ��� 
void Show_Str_Mid(u16 x,u16 y,u8*str,u8 size,u8 len);

#endif