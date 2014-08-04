## 6410x kernel path
CC =/usr/local/arm/4.3.1-eabi-armv6/usr/bin/arm-linux-gcc
6410X_KERNEL_DIR = /root/dma6410L-linux-2.6.29

ifneq ($(KERNELRELEASE),)
	obj-m := led.o
else
	KERNELDIR ?= $(6410X_KERNEL_DIR)
	
	PWD := $(shell pwd)
	
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
	
clean:
	rm -f *.ko *.o *.bak *.mod.*
endif 


