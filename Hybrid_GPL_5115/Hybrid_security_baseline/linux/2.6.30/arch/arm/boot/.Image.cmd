cmd_arch/arm/boot/Image := /home/zengyao/DT_Hybrid_GPL_1.00.052/Hybrid_security_baseline/output/host/usr/bin/arm-hsan-linux-uclibcgnueabi-objcopy -O binary -R .note -R .note.gnu.build-id -R .comment -S  vmlinux arch/arm/boot/Image