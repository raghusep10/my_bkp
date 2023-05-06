#include <linux/module.h>
#include <linux/kernel.h>

void new_printk(char *ptr)
{
	printk("adding new printk func")
}	

int init_module (void)
{
        printk("Hello World module init \n");
	new_printk("new printk");
        return 0;

}

void cleanup_module (void)
{
        printk(" Hello World module exit\n");
}

module_init(init _module);
module_exit(cleanup_module);

MODULE_AUTHOR ("raghavendraningoji@gmail.com");
MODULE_DESCRIPTION ("First kernel module:Hello world");
MODULE_LICENSE ("GPL");
