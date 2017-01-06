obj-m += hello.o

all: check-env
	make -C ${KERNEL_SOURCE} M=$(PWD) modules

clean:
	make -C ${KERNEL_SOURCE} M=$(PWD) clean

check-env:
ifndef KERNEL_SOURCE
 KERNEL_SOURCE := /lib/modules/$(shell uname -r)/build
endif
