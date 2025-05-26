#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/utsname.h> // Para obtener nombre del host

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tomás Ignacio Corbalán");
MODULE_DESCRIPTION("Modulo firmado que imprime nombre del equipo");

static int __init modulo_init(void) {
    struct new_utsname *uts = utsname();
    printk(KERN_INFO "Modulo firmado cargado en equipo: NUllPointerException%s\n", uts->nodename);
    return 0;
}

static void __exit modulo_exit(void) {
    printk(KERN_INFO "Modulo firmado descargado\n");
}

module_init(modulo_init);
module_exit(modulo_exit);
