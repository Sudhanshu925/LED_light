#include<reg51.h>
void main()
{
  unsigned char x,y;
  unsigned int i;
  while(1)
  {
    x=0x01;              // Start with first LED ON
    for(y=0;y<8;y++)     // Repeat for 8 LEDs
    {
      P1=x;              // Send pattern to Port 1
      for(i=0;i<6000;i++); // Small delay
      x=x<<1;            // Move to next LED
    }
  }
}
