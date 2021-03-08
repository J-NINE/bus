#!/bin/bash

ifconfig -a | grep "ether" | awk '{ print $0 }' | tr -d '\t' | grep ^ether | awk '{ print $2 }'
