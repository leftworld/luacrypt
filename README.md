# luacrypt

require libcrypt ,lua or openresty
yum install mcrypt
or
apt-get install mcrypt
open Makefile,add -L<path> for lua.h

run:
make

test:
lua test.lua


function:

lcrpyt : base DES
bfcrpyt : blowfish DES "$2a$"
