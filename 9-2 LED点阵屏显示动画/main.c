#include <REGX52.H>
#include "Delay.h"
#include "MatrixLED.h"

//动态笑脸
unsigned char code Animation[]={	
	0x3C,0x42,0xA9,0x85,0x85,0xA9,0x42,0x3C,
	0x3C,0x42,0xA1,0x85,0x85,0xA1,0x42,0x3C,
    0x3C,0x42,0xA5,0x89,0x89,0xA5,0x42,0x3C,
};//code关键字--数组放在flash里，只能读不能写

void main()
{
	unsigned char i,Offset=0,Count=0;
	MatrixLED_Init();
	while(1)
	{
		for(i=0;i<8;i++)	//循环8次，显示8列数据
		{
			MatrixLED_ShowColumn(i,Animation[i+Offset]);
		}
		Count++;			//计次延时
		if(Count>15)
		{
			Count=0;
			Offset+=8;		//偏移+8，切换下一帧画面
			if(Offset>16)
			{
				Offset=0;
			}
		}
	}
}

//流动Hello！
//unsigned char Animation[]={	
//	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//	0xFF,0x08,0x08,0x08,0xFF,0x00,0x0E,0x15,
//    0x15,0x15,0x08,0x00,0x7E,0x01,0x02,0x00,
//	0x7E,0x01,0x02,0x00,0x0E,0x11,0x11,0x0E,
//	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//};

//void main()
//{
//	unsigned char i,Offset=3,Count=0;
//	MatrixLED_Init();
//	while(1)
//	{
//		for(i=0;i<8;i++)
//		{
//			MatrixLED_ShowColumn(i,Animation[i+Offset]);
//		}
//		Count++;
//		if(Count>10)
//		{
//			Count=0;
//			Offset++;
//			if(Offset>32)
//			{
//				Offset=0;
//			}
//		}
//	}
//}