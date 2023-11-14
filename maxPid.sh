#!/bin/bash
pid_max=$(cat  /proc/sys/kernel/pid_max)
echo "THE MAX PID VALUE IS: $pid_max"
