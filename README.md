# Modified version

This version can be used for in-place calibration of the imu, without detaching your sensor from your robot.

# Prerequisites

sudo apt install libwxgtk*


# Troubleshooting

(if problems about libpng12, on ubuntu 18)

wget -q -O /tmp/libpng12.deb http://mirrors.kernel.org/ubuntu/pool/main/libp/libpng/libpng12-0_1.2.54-1ubuntu1_amd64.deb

dpkg -i /tmp/libpng12.deb

sudo dpkg -i /tmp/libpng12.deb

