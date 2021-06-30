char rd;
void main(){
     UART1_Init(1200);
     Delay_ms(100);

     UART1_Write_Text("LeKhacQuan1755252021600046");
     while(1)
     {
         if(UART1_Data_Ready()==1)
         {
            rd=UART1_Read();
            UART_Write(rd);
         }
     }
}
