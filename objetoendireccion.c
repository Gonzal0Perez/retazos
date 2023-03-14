#include <stdio.h>
 
int main(){ int intspace; int *address; 
  address = &intspace; /* address = 0x100;*/ *address = 65535;
  printf("%p: %08x (=%08x)\n", address, *address, intspace);/* likely we must be worried about endianness, e.g.*/
  *((char*)address) = 0x00; *((char*)address+1) = 0x00;
  *((char*)address+2) = 0xff; *((char*)address+3) = 0xff; /* if sizeof(int) == 4!*//* which maybe is not the best way of writing 32 bit values...*/
  printf("%p: %08x (=%08x)\n", address, *address, intspace); return 0;
}

//0xbfc5675c: 0000ffff (=0000ffff)
//0xbfc5675c: ffff0000 (=ffff0000)
//A more typical embedded way of doing this is below. Note that the OS will probably not allow this due to memory protections. 
//Embedded systems often do not have memory managers.
//#include <stdint.h>
//#include <stddef.h>
//#define PORT_A (*(volatile uint32_t*)0x100) 
//int main(){ uint32_t dat; size_t addr; 
//  PORT_A ^= 0x01;   /* Toggle bit 0 of PORT_A */
//  dat = PORT_A;     /* Read PORT_A */
//  addr = &PORT_A;   /* addr = 0x100*/ return 0;}
