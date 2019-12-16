#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init helloworld_init(void) {
	pr_info("Hello world!\n");
	return 0;
}

static void __exit helloworld_exit(void) {
	pr_info("End of hello world\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);
MODULE_DESCRIPTION("Hello, world! Module");
MODULE_AUTHOR("Sang Nguyen <nqsbku@gmail.com>");
MODULE_LICENSE("GPL");
