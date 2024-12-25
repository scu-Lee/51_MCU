#include <REGX52.H>

/**
  * @brief  串口初始化，4800bps@12.000MHz
  * @param  无
  * @retval 无
  */

void UART_Init()
{
	SCON=0x40;
	PCON|=0x80;
	TMOD&=0x0F;       //设置定时器模式
	TMOD|=0x20;       //设置定时器模式
	TH1=0xF3;         //设置定时初值
	TL1=0xF3;         //设置定时器重装值
	ET1=0;            //禁止定时器1中断
	TR1=0;            //启动定时器1
}

/**
   *  @brief    串口发送一个字节数据
   *  @param    Byte要发送的一个字节数据
   *  @retval   无
   */

void UART_SendByte(unsigned char Byte)
{
	SBUF=Byte;
	while(TI==0);
		TI=0;
}