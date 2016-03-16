# mt7610u_wifi_sta_v3002_dpo_20130916

Modified for RaspberryPI2 kernel 4.1.7-v7+ armv7l GNU/Linux
* modified: os/linux/rt_linux.c
 * fix file operations

Modified usb wifi driver for TP-Link TL-WDN5200/Archer T2U on Linux. 
* modified: common/rtusb_dev_id.c 
 * add product id for TL-WDN5200/Archer T2U
* modified: include/os/rt_linux.h 
* modified: os/linux/rt_linux.c
 * fix compile error from struct _OS_FS_INFO_
 * fix problem on 64bit
* modified: os/linux/config.mk
 * change default setting for Ubuntu 

kernel headers 4.1.7-v7+ armv7l GNU/Linux

http://www.niksula.hut.fi/~mhiienka/Rpi/linux-headers-rpi/linux-headers-4.1.7-v7%2B_4.1.7-v7%2B-2_armhf.deb

# how to use
```
$ make
$ make install
$ cp RT2870STA.dat /etc/Wireless/RT2870STA/RT2870STA.dat
$ reboot
```

