# learn_linux

insmod hello.ko
insmod hello.ko num=100

rmmod hello.ko

modinfo hello.ko

cat /proc/sys/kernel/tainted

cat /sys/module/hello/taint #OE
cat /sys/module/hello/parameters/num

find /sys -name "*helloworld*"

dmesg | tail