# learn_linux

insmod hello.ko
rmmod hello.ko

modinfo hello.ko

cat /proc/sys/kernel/tainted

cat /sys/module/hello/taint #OE

find /sys -name "*helloworld*"

dmesg | tail