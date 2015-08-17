#!/bin/sh

tar xvfz gnuplot-5.0.1.tar.gz
cd gnuplot-5.0.1/
./configure
make
sudo make install
cd .. 
rm -fr gnuplot-5.0.1
