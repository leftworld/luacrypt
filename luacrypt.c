#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
#include <stdio.h>
#include <stdlib.h>
#define __USE_GNU
#include <string.h>

#include <crypt.h>

static int lcrpyt( lua_State *L )
{
	size_t textLength;
	size_t keyLength;
	const char *text = (const  char *)luaL_checklstring( L, 1, &textLength );
	const char *key = (const  char *)luaL_checklstring( L, 2, &keyLength );
	struct crypt_data data;
	data.initialized = 0;
	char * result = crypt_r (text, key,&data);
	if(result == NULL){
		return 0;
	}
	lua_pushlstring(L, result, strlen(result));
	
	return 1;
}

static const struct luaL_reg cpt[] = {
	{"lcrpyt", lcrpyt},
	{NULL, NULL}
};

/* register library */
LUALIB_API int luaopen_crpyt( lua_State *L ){
	luaL_openlib( L, "crpyt", cpt, 0 );
	return 1;
}
