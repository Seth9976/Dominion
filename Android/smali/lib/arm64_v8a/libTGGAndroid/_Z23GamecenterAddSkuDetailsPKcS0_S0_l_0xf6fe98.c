// 函数: _Z23GamecenterAddSkuDetailsPKcS0_S0_l
// 地址: 0xf6fe98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gGameCenter != 0)
    MutexLock(gGameCenter + 0x40)

XTrace("add details sku, %s %s")
uint64_t i_2 = zx.q(*(gGameCenter + 0x2ec70))
char* s1_2

if (i_2.d s>= 1)
    s1_2 = nullptr
    int64_t (* s1_3)() = gGameCenter + 0x2a470
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        if (strcmp(s1_3, arg1) == 0)
            s1_2 = s1_3
        
        i = i_1
        i_1 -= 1
        s1_3 += 0x90
    while (i != 1)

if (i_2.d s>= 1 && s1_2 != 0)
    goto label_f6ff9c

int64_t x24_1 = sx.q(i_2.d)
*(gGameCenter + 0x2ec70) = i_2.d + 1
s1_2 = gGameCenter + x24_1 * 0x90 + 0x2a470
__builtin_memset(&s1_2[0x10], 0, 0x80)
*s1_2 = zx.o(0)
void* s1

if (arg1 == 0)
    *s1_2 = 0
    s1 = &s1_2[0x40]
    
    if (arg2 != 0)
        strncpy(s1, arg2, 0x40)
        s1 = &s1_2[0x7f]
else
    strncpy(s1_2, arg1, 0x40)
    *(gGameCenter + x24_1 * 0x90 + 0x2a4af) = 0
label_f6ff9c:
    s1 = &s1_2[0x40]
    
    if (arg2 != 0)
        strncpy(s1, arg2, 0x40)
        s1 = &s1_2[0x7f]

*s1 = 0
void* s1_1 = &s1_2[0x80]

if (arg3 != 0)
    strncpy(s1_1, arg3, 4)
    s1_1 = &s1_2[0x83]

*s1_1 = 0
*(s1_2 + 0x88) = arg4

if (*gGameCenter == 0)
    return s1_1

return MutexUnlock(gGameCenter + 0x40)
