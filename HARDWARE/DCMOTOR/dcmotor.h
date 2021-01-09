#ifndef __DCMOTOR_H
#define __DCMOTOR_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 

//直流电机驱动代码	   
									  
////////////////////////////////////////////////////////////////////////////////// 
//直流电机端口定义 PB15和PG11
#define DCMOTOR1 PBout(15)	// 直流电机接口	
#define DCMOTOR2 PGout(11)	// 直流电机接口	

void DCMOTOR_Init(void);	//初始化
		 				    
#endif

