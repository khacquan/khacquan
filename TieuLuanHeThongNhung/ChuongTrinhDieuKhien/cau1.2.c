#define ledchuc P3_0
#define leddonvi P3_1
#define leddata P2

char so[]={0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0x80, 0x90};
void hienthi(char so, unsigned int time)
{
char chuc,donvi,i;
   time = time/10;
   chuc = so/10;
   donvi = so%10;
   for(i=0;i<time;i++)
   {
	  ledchuc = 0;
	  leddata = so[chuc];
	  delay_ms(10);
	  ledchuc = 1;
	  leddonvi = 0;
	  leddata = so[donvi];
	  delay_ms(10);
	  leddonvi = 1;
   }
}
void main()
{
   while(1)
   {
	  int c;
	  for(c=0;c<51;c++)
	  {
	     hienthi(c,1000);
	  }
   }
}
