// 函数: _Z4TrimRK7XString
// 地址: 0x10662c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

TrimR(arg1)
char* var_18
int64_t result = TrimL(&var_18)

if (*gAllocatorArray != 0)
    char* x8_1 = var_18
    
    if (x8_1 != 0 && zx.d(*x8_1) != 0)
        int32_t x9_2 = *(x8_1 - 0xc)
        *(x8_1 - 0xc) = x9_2 - 1
        
        if (x9_2 == 1)
            return XPooledFree(x8_1 - 0x10, *(x8_1 - 4) + 0x10)

return result
