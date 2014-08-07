/*
 * (C) Copyright 2000
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

/*
 * Cache support: switch on or off, get status
 */
#include <common.h>
#include <command.h>
#define GPNCON  (*(volatile unsigned *)0x7F008830)
#define GPNDAT  (*(volatile unsigned *)0x7F008834)
#define GPNPUD  (*(volatile unsigned *)0x7F008838)
#include <asm/io.h>

int do_menu ( cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
              /* printf ("Usage:\n%s\n", cmdtp->usage);*/
	GPNCON &= ~ (0xf <<28);
	GPNCON |= (1 << 28)|(1<<30);
	
        


        int i;
        for(i=0;i<10;i++)
        {
                
                printf("====== LED OFF =====\n");
	
			GPNDAT &= ~ ((1 <<14));
			GPNDAT |=  ((1<<15));
			
			udelay(10000000);                              
 
                
                printf("====== LED ON ======\n");
		
			GPNDAT |=  ((1 <<14));
			GPNDAT &= ~((1<<15));
		
                	udelay(10000000);
        }

		return 0;
}


U_BOOT_CMD(
	menu,   3,   0,     do_menu,
	"menu display menu\n",
	"display menu\n"
);


