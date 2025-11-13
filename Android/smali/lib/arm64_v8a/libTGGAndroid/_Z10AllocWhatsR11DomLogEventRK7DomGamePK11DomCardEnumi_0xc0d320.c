// 函数: _Z10AllocWhatsR11DomLogEventRK7DomGamePK11DomCardEnumi
// 地址: 0xc0d320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = *(gLog + 0x30)
*(arg1 + 0x14) = 0

if (arg4 s< 1)
    return 

DomCardEnum const* x19_1 = arg3
DomLogEvent& x20_1 = arg1
uint64_t i_1 = zx.q(arg4)
uint64_t i

do
    int32_t x26_1 = *(gLog + 0x30)
    int32_t x8_5 = *(gLog + 0x34)
    DomLogEvent& x21_1
    
    if (x26_1 s< x8_5)
        x21_1 = *(gLog + 0x28)
    else
        int32_t x27_1
        
        if (x8_5 == 0)
            x27_1 = 0x10
        else
            x27_1 = x8_5 << 1
        
        arg1 = XPooledCalloc(x27_1 << 3)
        int64_t x1 = *(gLog + 0x28)
        x21_1 = arg1
        
        if (x1 != 0)
            memcpy(x21_1, x1, sx.q(x26_1 << 3))
            XPooledFree(*(gLog + 0x28), *(gLog + 0x34) << 3)
        
        x26_1 = *(gLog + 0x30)
        *(gLog + 0x28) = x21_1
        *(gLog + 0x34) = x27_1
    
    *(gLog + 0x30) = x26_1 + 1
    int32_t x8_2 = *x19_1
    x19_1 += 4
    void* x9_1 = x21_1 + (sx.q(x26_1) << 3)
    i = i_1
    i_1 -= 1
    *x9_1 = x8_2
    *(x9_1 + 4) = 1
    *(x20_1 + 0x14) += 1
while (i != 1)
