// 函数: _ZN7XStringaSEPKc
// 地址: 0x10647ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x23 = *arg1
char* x8

x8 = x23 == 0 ? &data_793a18 : x23

char* entry_x1

if (x8 != entry_x1)
    int32_t x0_1 = strlen(entry_x1)
    
    if (x0_1 == 0)
        if (x23 != 0 && *gAllocatorArray != 0 && zx.d(*x23) != 0)
            int32_t x8_4 = *(x23 - 0xc)
            *(x23 - 0xc) = x8_4 - 1
            
            if (x8_4 == 1)
                XPooledFree(x23 - 0x10, *(x23 - 4) + 0x10)
        
        *arg1 = &data_793a18
    else
        sub_10648a8(arg1, x0_1, 0)
        memcpy(*arg1, entry_x1, sx.q(x0_1 + 1))

return arg1
