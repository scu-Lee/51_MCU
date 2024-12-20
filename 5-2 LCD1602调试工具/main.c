#include <REGX52.H>
#include "LCD1602.h"

void main()
{
	LCD_Init();
	LCD_ShowChar(1,1,'A');
	LCD_ShowString(1,3,"Hello");
	LCD_ShowNum(1,9,123,3);
	LCD_ShowSignedNum(1,13,-66,2);
	LCD_ShowHexNum(2,1,0xA8,2);
	LCD_ShowBinNum(2,4,0xAA,8);
	while(1)
	{
		
	}
}

//void main()
//{
//	int result;
//	LCD_Init();
//	Result=1+1;
//	LCD_showNum(1,1,Result,3);
//	while(1)
//	{
//		
//	}
//}

//#include "Delay.h"
//void main()
//{
//	LCD_Init();
//	while(1)
//	{
//		Result++;
//		Delay(1000);
//		LCD_ShowNum(1,1,Result,3);
//	}
//}