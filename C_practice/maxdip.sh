#!/bin/bash

#get maximum value of a process ID can be

if [[ $(getconf LONG_BIT) == "64" ]]; then

max_pid=$(bc <<< "2^32 - 1")   # 64 bit systems

else

max_pid=$(bc <<< "2^16 - 1")  #32 bit systems

fi

echo "The maximum PID value on this system is $max_pid"

