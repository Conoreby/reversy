#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd4733cff, "module_layout" },
	{ 0x4b52ed7c, "noop_llseek" },
	{ 0xa2c56c31, "param_ops_ulong" },
	{ 0xc9fc9dcd, "misc_deregister" },
	{ 0x50eedeb8, "printk" },
	{ 0x158b22f, "misc_register" },
	{ 0xce65a0a8, "__mutex_init" },
	{ 0x48eb0c0d, "__init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x95435001, "current_task" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xdd3afd66, "mutex_lock_interruptible" },
	{ 0xcc99e735, "mutex_unlock" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0xc3fa6a59, "memchr" },
	{ 0x33d169c9, "_copy_from_user" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

