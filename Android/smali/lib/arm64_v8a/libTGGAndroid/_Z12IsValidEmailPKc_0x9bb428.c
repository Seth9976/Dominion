// 函数: _Z12IsValidEmailPKc
// 地址: 0x9bb428
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = stristr(arg1, "@")
char* result = nullptr

if (x0 != 0 && x0 != arg1)
    result = stristr(x0, ".")
    
    if (result != 0)
        return zx.q(strlen(result) u> 2 ? 1 : 0)

return result
