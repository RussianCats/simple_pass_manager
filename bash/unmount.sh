#!/bin/bash

# 1 - откуда размонтировать 2 - пароль USER
veracrypt -t -d $1 << _EOF_
$2
_EOF_

