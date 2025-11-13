// 函数: _Z6Find_0PKcS0_RS0_
// 地址: 0xba57fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* haystack = arg1
char* x0_1

do
    x0_1 = strstr(haystack, arg2)
    *arg3 = x0_1
    
    if (x0_1 == 0)
        break
    
    haystack = &x0_1[1]
while (zx.d(*haystack) != 0)

return zx.q(x0_1 != 0 ? 1 : 0)
