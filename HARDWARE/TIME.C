#include "pbdata.h"
u32 disp_time;
void TIM3_Configuration(void)
{
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStruct;
	
	TIM_ClearITPendingBit(TIM3,TIM_IT_Update);

	TIM_TimeBaseStruct.TIM_Period=20;//��ֵ
	TIM_TimeBaseStruct.TIM_Prescaler=35999;//Ԥ��Ƶ
	TIM_TimeBaseStruct.TIM_ClockDivision=0;
	TIM_TimeBaseStruct.TIM_CounterMode=TIM_CounterMode_Up;//����

	TIM_TimeBaseInit(TIM3,&TIM_TimeBaseStruct);

	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE);
	TIM_Cmd(TIM3,ENABLE);	 
}
