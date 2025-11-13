// 函数: _Z16GamecenterHasSkuPKc
// 地址: 0xf70524
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x20 = arg1

if (arg1 != 0)
    MutexLock(gGameCenter + 0x40)
    uint64_t x22_1 = zx.q(*(gGameCenter + 0x2a468))
    
    if (x22_1.d s< 1)
        x20 = nullptr
    else if (strcmp(gGameCenter + 0x6c, x20) == 0)
        x20 = 1
    else
        int64_t (* x21_1)() = gGameCenter + 0x5b4
        int64_t x8_1 = 1
        int64_t x23_1
        int32_t i
        
        do
            x23_1 = x8_1
            
            if (x22_1 == x8_1)
                break
            
            i = strcmp(x21_1, x20)
            x8_1 = x23_1 + 1
            x21_1 += 0x548
        while (i != 0)
        x20 = zx.q(x23_1 u< x22_1 ? 1 : 0)
    
    MutexUnlock(gGameCenter + 0x40)

return zx.q(x20.d)
