#include <REGX52.H>
#define	LED_PORT P2
sbit key = P3_2 // noi nut bam voi chanP3.2
void delay_ms(unsigned int t)
{
   unsigned int x;
   for(x=0; x<t; x++)
   {;}
}
// ham gan gia tri dem voi ma hex
unsigned char code code7seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
void main()
{
   EX0 = 1; // cho phep ngat ngoai 0
   EA = 1; // cho phep su dung ngat ngoai

}
void trinhNgat() interrupt 0 // khai bao trinh phuc vu ngat 0
{
   unsigned char dem;
   while(1)
   {
   	  if(key==0)
	  {
		// cau lenh chong doi phim
		delay_ms(100);
		if(key==0)
		{
		   dem++;
		   delay_ms(10000000);
		   if(dem>9)
		   {
		   	  dem = 0;
		   }
		   LED_PORT = code7seg[dem];
		}
	  }
   }
}
