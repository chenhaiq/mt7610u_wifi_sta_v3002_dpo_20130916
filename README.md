# mt7610u_wifi_sta_v3002_dpo_20130916
Modified usb wifi driver for TP_link TL-WDN5200 on Linux. 
1. modified:   common/rtusb_dev_id.c 
 * add product id for TL-WDN5200
1. modified:   include/os/rt_linux.h 
1. modified:   os/linux/rt_linux.c
 * fix compile error from struct _OS_FS_INFO_
 * fix problem on 64bit
1. modified:   os/linux/config.mk
 * change default setting for Ubuntu 

# how to use
```
$ make
$ make install
$ cp RT2870STA.dat  /etc/Wireless/RT2870STA/RT2870STA.dat
$ reboot
```
refer to： http://hprath.com/2014/06/cisco-linksys-ae6000-ac580-media-tek-mt7610u-mt7630u-mt7650u-linux-x64-driver-patch/

