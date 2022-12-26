#include <linux/module.h> //所有模块都需要的头文件
#include <linux/init.h>   // init&exit相关宏
#include <linux/kernel.h>
 
static int num = 5; 
module_param(num,int,S_IRUGO);

static int __init hello_init(void)
{
      printk(KERN_WARNING "hello world insert.\n");
      pr_info("parameter num = %d\n",num);
      return 0;
}
static void __exit hello_exit(void)
{     
      pr_info("exit");
      printk(KERN_WARNING "hello exit!\n");
}
 
module_init(hello_init);
module_exit(hello_exit);
MODULE_AUTHOR("w0x7ce");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("test module dev");