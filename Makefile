all: 
	gcc -o crpyt.so -shared -fPIC -O2 -lcrypt  luacrypt.c -I/usr/local/openresty/luajit/include/luajit-2.1/ 
