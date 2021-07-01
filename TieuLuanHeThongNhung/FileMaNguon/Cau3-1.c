sbit LCD_RS at P2_5_bit;
sbit LCD_RW at P2_6_bit;
sbit LCD_EN at P2_7_bit;
sbit LCD_D4 at P3_4_bit;
sbit LCD_D5 at P3_5_bit;
sbit LCD_D6 at P3_6_bit;
sbit LCD_D7 at P3_7_bit;
void main()
{
   LCD_RW = 0;
   Lcd_Init();
   Lcd_Cmd(_LCD_CLEAR);
   Lcd_Cmd(_LCD_CURSOR_OFF);
   Lcd_Out(1,1,"LEKHACQUAN");
   Lcd_Out(2,1,"1755252021600046");
   while(1)
   {
   }
}