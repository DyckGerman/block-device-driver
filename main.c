#include <linux/init.h>
#include <linux/module.h>


static int hello_init() {
    printk(KERN_ALERT "Hello, World!\n");
    return 0;
}

static int bye_init() {
    printk(KERN_ALERT "Bue man\n");
    return 0;
}

module_init(hello_init);
module_exit(bye_init);

