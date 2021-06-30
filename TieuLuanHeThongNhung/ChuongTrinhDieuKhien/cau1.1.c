#include <REGX51.H>
void delay(int n)
{
   int i;
   for(i=0;i<=n;i++);
}
void hienthi(int chuc,donvi)
{
   P3_1 = 1;
   P2 = chuc;
   P3_1 = 0;
   P3_0 = 1;
   P2 = donvi;
   P3_0 = 0;
}
void main()
{
   while(1)
   {
	  hienthi(0,0);
   }
}
