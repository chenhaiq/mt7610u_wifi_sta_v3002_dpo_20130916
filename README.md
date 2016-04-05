#changelog 2016-04-04
1. theoretically supported products (common/rtusb_dev_id.c):
 * {USB_DEVICE(0x148F,0x7610)}, /* MT7610U Ralink VID */
 * {USB_DEVICE(0x0E8D,0x7610)}, /* MT7610U MediaTek VID / Sabrent NTWLAC */
 * {USB_DEVICE(0x13B1,0x003E)}, /* Cisco Linksys AE6000 */
 * {USB_DEVICE(0x7392,0xA711)}, /* Edimax 7711ULC/7711MAC */
 * {USB_DEVICE(0x7392,0xB711)}, /* Elecom WDC-433SU2M */
 * {USB_DEVICE(0x148F,0x761A)}, /* TP-LINK Archer T2U(H) (tested, working) */
 * {USB_DEVICE(0x148F,0x760A)}, /* TP-LINK */
 * {USB_DEVICE(0x0B05,0x17D1)}, /* ASUS USB-AC51 */
 * {USB_DEVICE(0x0B05,0x17DB)}, /* ASUS USB-AC50 */
 * {USB_DEVICE(0x0DF6,0x0075)}, /* Edimax EW-7811UTC AC600 / Sitecom WLA-3100 */
 * {USB_DEVICE(0x2001,0x3D02)}, /* D-Link DWA-171 rev B1 */
 * {USB_DEVICE(0x0586,0x3425)}, /* ZyXEL NWD6505 */
 * {USB_DEVICE(0x07B8,0x7610)}, /* AboCom AU7212 */
 * {USB_DEVICE(0x04BB,0x0951)}, /* IO DATA WN-AC433UK */
 * {USB_DEVICE(0x057C,0x8502)}, /* AVM FRITZ!WLAN USB Stick AC 430 (not working) */
 * {USB_DEVICE(0x293C,0x5702)}, /* Comcast Xfinity KXW02AAA */
 * {USB_DEVICE(0x2019,0xAB31)}, /* Planex GW-450D/GW-450D-KATANA */
 * {USB_DEVICE(0x20F4,0x806B)}, /* TRENDnet TEW-806UBH AC600 */
2. rt_linux.c: RtmpOSFileRead/RtmpOSFileWrite
 * osfd->f_op->read/vfs_read Kernel 4.x
3. fixes from https://github.com/xtknight/mt7610u-linksys-ae6000-wifi-fixes

# mt7610u_wifi_sta_v3002_dpo_20130916
Modified usb wifi driver for TP-Link TL-WDN5200 AC600 T2U and Cisco Linksys AE6000 / AC580 on Linux. 
1. modified:   common/rtusb_dev_id.c 
 * add product id for TL-WDN5200
 * add product id for Cisco Linksys AE6000 / AC580
1. modified:   include/os/rt_linux.h 
1. modified:   os/linux/rt_linux.c
 * fix compile error from struct _OS_FS_INFO_
 * fix problem on 64bit
1. modified:   os/linux/config.mk
 * change default setting for Ubuntu 
1. modified  common/cmm_info.c 
 * fix compile with gcc 4.9.2 newer Kernel (Ubuntu 15.04)

#prepare
Ubuntu: sudo apt-get install git build-essential

# how to use
```
$ mkdir ~/src
$ cd ~/src
$ git clone https://github.com/Myria-de/mt7610u_wifi_sta_v3002_dpo_20130916.git
$ make
$ make install
$ cp RT2870STA.dat  /etc/Wireless/RT2870STA/RT2870STA.dat
$ reboot
```
refer to：
http://hprath.com/2014/06/cisco-linksys-ae6000-ac580-media-tek-mt7610u-mt7630u-mt7650u-linux-x64-driver-patch/
On this page you'll find also details about configuration in RT2870STA.dat.

https://github.com/chenhaiq/mt7610u_wifi_sta_v3002_dpo_20130916 (TP-Link T2U)



