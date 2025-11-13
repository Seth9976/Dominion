// 函数: _Z17GamecenterGetSkusPPKc
// 地址: 0xf6fdc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1

if (*(gGameCenter + 4) s< 1)
    x8_1 = 0
else
    int64_t x10_1 = 0
    int64_t i = 0
    x8_1 = 0
    
    do
        int32_t x12_3 = *gGameCenter
        char* x12_1
        
        if (x12_3 == 3)
            x12_1 = *(*(gGameCenter + 8) + x10_1 + 0x20)
            
            if (x12_1 != 0 && zx.d(*x12_1) != 0)
                arg1[sx.q(x8_1)] = x12_1
                x8_1 += 1
        else
            if (x12_3 != 4)
                pthread_kill(pthread_self(), 6)
                char* x0_2
                char* x1
                int32_t x2
                x0_2, x1, x2 = XNoReturn()
                return StrCopySafe(x0_2, x1, x2) __tailcall
            
            x12_1 = *(*(gGameCenter + 8) + x10_1 + 0x18)
            
            if (x12_1 != 0)
                arg1[sx.q(x8_1)] = x12_1
                x8_1 += 1
        i += 1
        x10_1 += 0x38
    while (i s< sx.q(*(gGameCenter + 4)))

return zx.q(x8_1)
