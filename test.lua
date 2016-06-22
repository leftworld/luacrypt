local xx = require "crpyt"

local encTxt = xx.lcrpyt("aaaaaaa", "aa")
print(encTxt)
local encTxt1 = xx.bfcrpyt("aaaaaaa", "$2a$10$MTQ0OTExNTE3NjE5ODIyNz")
print(encTxt1)

