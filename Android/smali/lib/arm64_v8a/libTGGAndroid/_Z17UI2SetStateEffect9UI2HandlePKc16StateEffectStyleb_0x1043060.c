// 函数: _Z17UI2SetStateEffect9UI2HandlePKc16StateEffectStyleb
// 地址: 0x1043060
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(arg1.d) & 0xffff
int64_t x8 = *gUI2
UI2* x9 = x8 + mulu.dp.d(x11.d, 0x19a8)
uint64_t x12 = zx.q(*(x9 + 0x1970))
int32_t x13_2

if (x12.d s< 1)
label_1043150:
    x13_2 = 0
else
    x13_2 = *(x8 + x11 * 0x19a8 + 0x1870)
    uint64_t x15_1 = zx.q(x13_2.w)
    int32_t x14_2 = *(x8 + x15_1 * 0x19a8 + 0x1658)
    int32_t x17_2
    
    if (x14_2 == 0)
        x17_2 = x13_2
    label_10430f8:
        
        if (x17_2 != 0)
            x13_2 = x17_2
        
        if (x17_2 == 0)
        label_1043118:
            
            if (x14_2 != 0)
                int64_t x12_1 = x12 - 1
                int16_t* x11_2 = x8 + x11 * 0x19a8 + 0x1874
                uint64_t x14_3
                
                do
                    if (x12_1 == 0)
                        goto label_1043150
                    
                    x14_3 = zx.q(*x11_2)
                    x11_2 = &x11_2[2]
                    x12_1 -= 1
                while (*(x8 + x14_3 * 0x19a8 + 0x1658) != 0)
                
                x13_2 = x14_3.d
    else
        if (*(x8 + x15_1 * 0x19a8 + 0x1658) != 0)
            int64_t i = x12 - 1
            arg1 = x8 + x11 * 0x19a8 + 0x1874
            
            while (i != 0)
                x17_2 = *arg1
                arg1 = arg1 + 4
                i -= 1
                
                if (*(x8 + zx.q(x17_2.w) * 0x19a8 + 0x1658) == 0)
                    goto label_10430f8
            
            goto label_1043118
        
        int32_t x17_3 = x13_2
        
        if (x17_3 != 0)
            x13_2 = x17_3
        
        if (x17_3 == 0)
            goto label_1043118

UI2* x20

if ((arg4.d & 1) != 0)
    x20 = x9
else
    x20 = x8 + mulu.dp.d(x13_2 & 0xffff, 0x19a8)

if (*(x20 + 0x17c4) == 0)
    *(x20 + 0x17b8) = XPooledCalloc(0xc0)
    *(x20 + 0x17c0) = 0x400000000
else if (*(x20 + 0x17c0) == 4)
    return 

int64_t* x0_2 = StateEffectDefLookup(x20, arg2)
int32_t v0 = x0_2[2].d
int64_t x10 = *x0_2
int64_t x11_4 = x0_2[1]
int32_t* x8_5 = *(x20 + 0x17b8) + sx.q(*(x20 + 0x17c0)) * 0x30
*x8_5 = 0
*(x8_5 + 8) = x10
x8_5[4] = 0
*(x8_5 + 0x18) = x11_4
x8_5[8] = v0
*(x8_5 + 0x28) = 0
*(x20 + 0x17c0) += 1
