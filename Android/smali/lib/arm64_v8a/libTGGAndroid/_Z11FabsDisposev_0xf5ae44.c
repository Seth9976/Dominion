// 函数: _Z11FabsDisposev
// 地址: 0xf5ae44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*gUsingFabs) == 0)
    return 

void* x0 = *gFabs

if (x0 == 0)
    return 

uint64_t x8_1 = zx.q(*(gFabs + 8))

if (x8_1.d != 0)
    int64_t x8_2 = x0 + x8_1 * 0x4e8
    void* x9_1 = x0
    
    while (true)
        int32_t x10_3 = *(x9_1 + 0x4e0)
        
        if (x10_3 u>> 0x10 != 0)
            *(x9_1 + 0x4e0) = *(gFabs + 0x10)
            x9_1 += 0x4e8
            int32_t x10_2 = *(gFabs + 0x14) - 1
            *(gFabs + 0x10) = x10_3 & 0xffff
            *(gFabs + 0x14) = x10_2
            
            if (x8_2 u<= x9_1)
                break
        else
            x9_1 += 0x4e8
            
            if (x9_1 u>= x8_2)
                break

*(gFabs + 8) = 0
*(gFabs + 0x10) = 0
XFree(x0)
*(gFabs + 0x20) = 0
*(gFabs + 8) = 0
*(gFabs + 0x10) = 0
*gFabs = 0
