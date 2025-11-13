// 函数: _Z10AllocCardsR11DomLogEventRK7DomGamePK6CardIDi15DomLogEventType
// 地址: 0xc0d404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg5
void* __offset(DomLogEvent, 0x14) x24_1 = arg1 + 0x14
*x24_1 = 0
*(x24_1 - 4) = *(gLog + 0x30)
CardID const* x21_1
int32_t x25_1

if (arg4 != 0)
    x21_1 = arg3
    x25_1 = arg4 s> 0 ? 1 : 0
    *(arg1 + 0xc) = *arg3

DomCardEnum var_ce0

if (arg4 == 0 || arg4 s< 1)
    x25_1 = 0
    
    if (x20 != 2)
    label_c0d49c:
        std::__ndk1::__less<DomCardEnum, DomCardEnum> var_58
        
        if (x20 != 0x30)
            std::__ndk1::__sort<std::__ndk1::__less<DomCardEnum, DomCardEnum>&, DomCardEnum*>(
                &var_ce0, &var_ce0 + (sx.q(arg4) << 2), &var_58)
else
    uint64_t i_3 = zx.q(arg4)
    void* x27_1 = &var_ce0
    uint64_t i
    
    do
        uint64_t x1 = zx.q(*x21_1)
        x21_1 += 4
        i = i_3
        i_3 -= 1
        *x27_1 = CardWhat(arg2, x1).d
        x27_1 += 4
    while (i != 1)
    
    if (x20 != 2)
        goto label_c0d49c

if (x25_1 == 0)
    return 

int32_t* x8_2 = nullptr
uint64_t i_2 = zx.q(arg4)
DomCardEnum* x21_2 = &var_ce0
uint64_t i_1

do
    void* __offset(DomLogEvent, 0x14) x9_2
    
    if (x8_2 == 0 || *x8_2 != *x21_2)
        int32_t x26_1 = *(gLog + 0x30)
        int32_t x8_3 = *(gLog + 0x34)
        DomLogEvent& x19_1
        
        if (x26_1 s< x8_3)
            x19_1 = *(gLog + 0x28)
        else
            int32_t x27_2
            
            if (x8_3 == 0)
                x27_2 = 0x10
            else
                x27_2 = x8_3 << 1
            
            arg1 = XPooledCalloc(x27_2 << 3)
            int64_t x1_2 = *(gLog + 0x28)
            x19_1 = arg1
            
            if (x1_2 != 0)
                memcpy(x19_1, x1_2, sx.q(x26_1 << 3))
                XPooledFree(*(gLog + 0x28), *(gLog + 0x34) << 3)
            
            x26_1 = *(gLog + 0x30)
            *(gLog + 0x28) = x19_1
            *(gLog + 0x34) = x27_2
        
        int32_t x9_1 = *x21_2
        x8_2 = x19_1 + (sx.q(x26_1) << 3)
        *(gLog + 0x30) = x26_1 + 1
        *x8_2 = x9_1
        x8_2[1] = 1
        x9_2 = x24_1
    else
        x9_2 = &x8_2[1]
    
    i_1 = i_2
    i_2 -= 1
    x21_2 += 4
    *x9_2 += 1
while (i_1 != 1)
