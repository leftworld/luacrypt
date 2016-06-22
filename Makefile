main: crypt_blowfish.o
	gcc crypt_blowfish.o -o crpyt.so -shared -fPIC -O2 -lcrypt   luacrypt.c -I/usr/local/openresty/luajit/include/luajit-2.1/ 
crypt_blowfish.o: crypt_blowfish.c crypt_blowfish.h 
	gcc -c crypt_blowfish.c  -fPIC
	
clean:
	rm -rf *.so *.o
