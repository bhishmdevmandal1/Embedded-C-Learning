
#include <stdint.h>

int main(void)
{
   uint32_t *pClockCtrlreg = (uint32_t*)0x40023830;
   uint32_t *pPortAModereg = (uint32_t*)0x40020000;
   uint32_t *pPortAOutreg = (uint32_t*)0x40020014;
   uint32_t *pPortAInreg = (uint32_t*)0x40020010;
   uint32_t *pPortAPuPdreg = (uint32_t*)0x4002000C;

   //1. enable the clock for GPIOA peripheral in the AHB1ENR (SET 0th bit position)
   *pClockCtrlreg |= ( 1 << 0 );


   // Configuring PA5 as output mode (01: Output mode)
   *pPortAModereg &= ~ ( 3 << 5*2 ) ;   // clear the 10th and 11th bit position (CLEAR)
   *pPortAModereg |= ( 1 << 5*2 );      // make 10 bit position as 1 (SET Output mode)

   *pPortAModereg &= ~ ( 3 << 1*2 ) ; //Configuring PA1 as input mode (00: Input mode)
   *pPortAPuPdreg &= ~ ( 3 << 1*2 ) ; //reset GPIOA_PUPDR1 (PA1)
   *pPortAPuPdreg |= ( 2 << 1*2 ); // set GPIOA_PUPDR1 pull-down(1:0)

   while(1)
   {
      //read pin status of the PA1 (GPIOA input data register)
      uint32_t pinStatus = (uint32_t)(*pPortAInreg & (1 << 1));

      if(pinStatus)
      {
         //pin is HIGH
         *pPortAOutreg |= ( 1 << 5 );
      }
      else
      {
         //pin is LOW
         *pPortAOutreg &= ~( 1 << 5 );
      }

   }

 }



