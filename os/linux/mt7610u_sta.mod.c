#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0xc7a6b700, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfc118763, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x439cb751, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc7ec6c27, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0x3a013b7d, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xd8b8725f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa4eb4eff, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x5f9dcfc9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe5c6226a, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x4792c572, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xfb4626ad, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xb2d21cc6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf6fa11b2, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x7cb444f2, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3b66ae8c, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8560f1f2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x490ee10, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xc3780a2a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x68dfc59f, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x8329e6f0, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd28c4de9, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xf97456ea, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7ce2343f, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x2fd171a5, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x98728171, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x94a9df63, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xb6ed1e53, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3da36dec, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x251febc7, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x7ec254ac, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x6c2e3320, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xad24b5a3, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xb4aaef46, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x8c546f69, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc346d91c, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x627946d0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x614a9d90, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x7225d830, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xf7d0f1d7, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x8bf826c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1e4e89c0, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf1faac3a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa6927cbf, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xdb8da445, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x26d2a251, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe45f60d8, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xa56d356, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd7bd3af2, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0x80d9ca85, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0xc4554217, __VMLINUX_SYMBOL_STR(up) },
	{ 0xddea833b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x75bb675a, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x837f5928, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x19a9e62b, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8235805b, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x9a986911, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f4c1c8e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb1d9523e, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x9982d774, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x79f0fb08, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6fb1c43a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xf5b7ecb9, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xe47456dc, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "EB466CD0D594941CEB27925");
