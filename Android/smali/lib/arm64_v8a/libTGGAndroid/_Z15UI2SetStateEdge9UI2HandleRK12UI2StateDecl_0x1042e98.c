// 函数: _Z15UI2SetStateEdge9UI2HandleRK12UI2StateDecl
// 地址: 0x1042e98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1.d) & 0xffff
int64_t x20 = *gUI2
uint64_t x10_1 = zx.q(*(x20 + mulu.dp.d(x9.d, 0x19a8) + 0x1970))
int32_t x11_2

if (x10_1.d s< 1)
label_1042f88:
    x11_2 = 0
else
    x11_2 = *(x20 + x9 * 0x19a8 + 0x1870)
    uint64_t x13_1 = zx.q(x11_2.w)
    int32_t x12_2 = *(x20 + x13_1 * 0x19a8 + 0x1658)
    int32_t x15_2
    
    if (x12_2 == 0)
        x15_2 = x11_2
    label_1042f30:
        
        if (x15_2 != 0)
            x11_2 = x15_2
        
        if (x15_2 == 0)
        label_1042f50:
            
            if (x12_2 != 0)
                int64_t x10_2 = x10_1 - 1
                int16_t* x9_2 = x20 + x9 * 0x19a8 + 0x1874
                uint64_t x12_3
                
                do
                    if (x10_2 == 0)
                        goto label_1042f88
                    
                    x12_3 = zx.q(*x9_2)
                    x9_2 = &x9_2[2]
                    x10_2 -= 1
                while (*(x20 + x12_3 * 0x19a8 + 0x1658) != 0)
                
                x11_2 = x12_3.d
    else
        if (*(x20 + x13_1 * 0x19a8 + 0x1658) != 0)
            int64_t i = x10_1 - 1
            int32_t* x16_1 = x20 + x9 * 0x19a8 + 0x1874
            
            while (i != 0)
                x15_2 = *x16_1
                x16_1 = &x16_1[1]
                i -= 1
                
                if (*(x20 + zx.q(x15_2.w) * 0x19a8 + 0x1658) == 0)
                    goto label_1042f30
            
            goto label_1042f50
        
        int32_t x15_3 = x11_2
        
        if (x15_3 != 0)
            x11_2 = x15_3
        
        if (x15_3 == 0)
            goto label_1042f50

uint64_t x21 = zx.q(x11_2) & 0xffff
void* x8 = x20 + mulu.dp.d(x21.d, 0x19a8)
int32_t x9_3 = *(x8 + 0x17c4)
int32_t x8_2

if (x9_3 == 0)
    x8_2 = 0
    *(x8 + 0x17b8) = XPooledCalloc(0x180)
    *(x20 + x21 * 0x19a8 + 0x17c0) = 0x800000000
else
    x8_2 = *(x20 + x21 * 0x19a8 + 0x17c0)
    
    if (x8_2 == x9_3)
        (*(*arg2 + 8))(arg2)
        return XTrace("dropped state edge %s") __tailcall

int32_t* x8_6 = *(x8 + 0x17b8) + muls.dp.d(x8_2, 0x30)
void* x9_6 = x20 + x21 * 0x19a8
*x8_6 = 1
*(x8_6 + 8) = 0
x8_6[4] = 0
*(x8_6 + 0x18) = 0
x8_6[8] = 0
*(x8_6 + 0x28) = arg2
*(x9_6 + 0x17c0) += 1
