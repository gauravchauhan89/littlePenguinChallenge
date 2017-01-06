#include <linux/sched.h>
#include <linux/slab.h>
#include <linux/poll.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/input.h>
#include <linux/random.h>
#include <linux/major.h>
#include <linux/device.h>
#include <linux/kernel.h>
#include <linux/usb.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gaurav");
MODULE_DESCRIPTION("A Simple Hello World module");

static const struct usb_device_id mac_hid_emumouse_ids[] = {
        {  USB_INTERFACE_INFO(3, 1,1)},
	{ }
};
MODULE_DEVICE_TABLE(usb, mac_hid_emumouse_ids);

static int __init hello_init(void)
{
	printk("Hello World!\n");
	return 0;
}

static void __exit hello_cleanup(void)
{
	printk("Cleaning up module.\n");
}
module_init(hello_init);
module_exit(hello_cleanup);
