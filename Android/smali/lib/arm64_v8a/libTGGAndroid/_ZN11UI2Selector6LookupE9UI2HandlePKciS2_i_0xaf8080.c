// 函数: _ZN11UI2Selector6LookupE9UI2HandlePKciS2_i
// 地址: 0xaf8080
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x21 = arg5
int32_t x22 = arg4.d
int32_t* x20 = arg1
char* x23 = arg3
int32_t x24 = arg2.d
int32_t entry_x5

if (*(arg1 + 8) == arg3 && *x20 == x24 && x20[4] == x22 && *(x20 + 0x18) == x21
        && x20[8] == entry_x5 && *(x20 + 0x28) == 0)
    return zx.q(x20[0xe])

uint64_t x0 = zx.q(x24)
uint64_t result

if (entry_x5 == 0xffffffff)
    result = UI2GetHandle(x0, x23, x22)
    x20[0xe] = result.d
    
    if (result.d != 0)
        result = UI2GetHandle(result, x21)
        x20[0xe] = result.d
    label_af8130:
        *x20 = x24
        *(x20 + 8) = x23
        x20[4] = x22
        *(x20 + 0x18) = x21
        x20[8] = entry_x5
        *(x20 + 0x28) = 0
else
    result = UI2GetHandle(x0, x23, x22, x21, entry_x5)
    x20[0xe] = result.d
    
    if (result.d != 0)
        goto label_af8130

return result
