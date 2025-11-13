// 函数: _ZN7XString13FormatArgListEPKcSt9__va_list
// 地址: 0x1065110
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* entry_x2
int128_t v0 = entry_x2[1]
char* x20 = arg2
int128_t var_50 = *entry_x2
int128_t var_40 = v0
int32_t x0_1 = Xvscprintf(x20, &var_50)

if (x0_1 s<= 0)
    if (*gAllocatorArray != 0)
        char* x8_2 = *arg1
        
        if (x8_2 != 0 && zx.d(*x8_2) != 0)
            int32_t x9_2 = *(x8_2 - 0xc)
            *(x8_2 - 0xc) = x9_2 - 1
            
            if (x9_2 == 1)
                XPooledFree(x8_2 - 0x10, *(x8_2 - 4) + 0x10)
    
    *arg1 = &data_793a18
else
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = sub_10648a8(arg1, x0_1, 0)
    v0_1 = entry_x2[1]
    char* x0_3 = *arg1
    int128_t var_70 = *entry_x2
    int128_t var_60_1 = v0_1
    Xvsnprintf(x0_3, x0_1 + 1, x20, &var_70)

return arg1
