// 函数: _Z10AppendCardR11DomLogEvent11DomCardEnum
// 地址: 0xc0d1cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(DomLogEvent, 0x14) x19_1 = arg1 + 0x14
uint64_t x8 = zx.q(*x19_1)
int32_t i = arg2
int64_t x9 = sx.q(*(x19_1 - 4))

if (x8.d s< 1)
label_c0d224:
    int32_t x10_4 = *(gLog + 0x34)
    int32_t x23_1 = x8.d + x9.d
    *(gLog + 0x30) = x23_1
    DomLogEvent& x21_1
    
    if (x23_1 s>= x10_4)
        int32_t x24_1
        
        if (x10_4 == 0)
            x24_1 = 0x10
        else
            x24_1 = x10_4 << 1
        
        arg1 = XPooledCalloc(x24_1 << 3)
        int64_t x1 = *(gLog + 0x28)
        x21_1 = arg1
        
        if (x1 != 0)
            memcpy(x21_1, x1, sx.q(x23_1 << 3))
            XPooledFree(*(gLog + 0x28), *(gLog + 0x34) << 3)
        
        x23_1 = *(gLog + 0x30)
        *(gLog + 0x28) = x21_1
        *(gLog + 0x34) = x24_1
    else
        x21_1 = *(gLog + 0x28)
    
    int32_t* x9_1 = x21_1 + (sx.q(x23_1) << 3)
    *(gLog + 0x30) = x23_1 + 1
    *x9_1 = i
    x9_1[1] = 1
else
    uint64_t x11_1 = x8
    void* x10_3 = *(gLog + 0x28) + (x9 << 3) + 4
    
    while (*(x10_3 - 4) != i)
        uint64_t temp0_1 = x11_1
        x11_1 -= 1
        x10_3 += 8
        
        if (temp0_1 == 1)
            goto label_c0d224
    
    x19_1 = x10_3

*x19_1 += 1
