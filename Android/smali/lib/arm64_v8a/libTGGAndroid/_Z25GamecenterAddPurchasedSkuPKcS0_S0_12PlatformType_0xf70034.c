// 函数: _Z25GamecenterAddPurchasedSkuPKcS0_S0_12PlatformType
// 地址: 0xf70034
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gGameCenter != 0)
    MutexLock(gGameCenter + 0x40)

uint64_t x26 = zx.q(*(gGameCenter + 0x2a468))
char* s1

if (x26.d s< 1)
label_f700b0:
    int64_t x25_2 = sx.q(x26.d)
    void* x26_1 = gGameCenter + muls.dp.d(x26.d, 0x548)
    *(gGameCenter + 0x2a468) = x26.d + 1
    memset(x26_1 + 0x68, 0, 0x548)
    char* s1_1
    
    if (arg1 != 0)
        strncpy(x26_1 + 0x6c, arg1, 0x40)
        *(gGameCenter + x25_2 * 0x548 + 0xab) = 0
        s1_1 = gGameCenter + x25_2 * 0x548 + 0xac
        
        if (arg2 == 0)
            goto label_f70160
        
        goto label_f70110
    
    *(x26_1 + 0x6c) = 0
    s1_1 = gGameCenter + x25_2 * 0x548 + 0xac
    
    if (arg2 != 0)
    label_f70110:
        strncpy(s1_1, arg2, 0x100)
        *(gGameCenter + x25_2 * 0x548 + 0x1ab) = 0
        s1 = gGameCenter + x25_2 * 0x548 + 0x1ac
        
        if (arg3 == 0)
            *s1 = 0
        else
            s1 = strncpy(s1, arg3, 0x400)
            *(gGameCenter + x25_2 * 0x548 + 0x5ab) = 0
    else
    label_f70160:
        *s1_1 = 0
        s1 = gGameCenter + x25_2 * 0x548 + 0x1ac
        
        if (arg3 != 0)
            s1 = strncpy(s1, arg3, 0x400)
            *(gGameCenter + x25_2 * 0x548 + 0x5ab) = 0
        else
            *s1 = 0
    
    *(x26_1 + 0x68) = arg4
    *(gGameCenter + x25_2 * 0x548 + 0x5ac) = 0
else
    int64_t (* x22_1)() = gGameCenter + 0x6c
    uint64_t x25_1 = x26
    
    while (true)
        s1 = strcmp(x22_1, arg1)
        
        if (s1.d == 0)
            break
        
        uint64_t temp0_1 = x25_1
        x25_1 -= 1
        x22_1 += 0x548
        
        if (temp0_1 == 1)
            goto label_f700b0

if (*gGameCenter == 0)
    return s1

return MutexUnlock(gGameCenter + 0x40)
