// 函数: _Z16RemoveAllOngoing14DomOngoingType
// 地址: 0xadcd2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = DomGetContext()
DomGame* x21 = *(x0 + 8)
int32_t x8 = *(x21 + 0x19c0)
int32_t x22

if (x8 s< 1)
    x22 = 0
else
    x22 = 0
    int32_t x23_1 = 0
    
    do
        void* x9_1 = x21 + muls.dp.d(x23_1, 0xb8)
        
        if (*(x9_1 + 0x3c254) == 3)
            int64_t x11_1 = sx.q(x23_1)
            
            if (*(x21 + x11_1 * 0xb8 + 0x3c258) == x19)
                int32_t x12_3 = *(x21 + x11_1 * 0xb8 + 0x3c21c)
                
                if (x12_3 == *(x0 + 0x18))
                    int32_t x8_2 = *(x21 + 0x3c208 + x11_1 * 0xb8 + 0x18)
                    uint64_t x2_1
                    
                    if (x8_2 == 0xffffffff)
                        x2_1 = zx.q(x12_3)
                    else
                        x2_1 = zx.q(x8_2)
                    
                    int64_t var_68_1 = 0
                    int32_t var_70_1 = 0
                    int32_t var_78_1 = 0
                    int32_t var_80_1 = 0
                    int128_t v0_1
                    int128_t v1_1
                    int128_t v2_1
                    int128_t v3_1
                    v0_1, v1_1, v2_1, v3_1 = NotifyEffect(x21, 0x1c, x2_1, zx.q(x19), 
                        zx.q(*(x21 + x11_1 * 0xb8 + 0x3c25c)), 0, 0, 0)
                    x23_1 -= 1
                    x22 += 1
                    int64_t x8_4 = sx.q(*(x21 + 0x19c0)) - 1
                    *(x21 + 0x19c0) = x8_4.d
                    int128_t* x8_5 = x21 + 0x3c208 + x8_4 * 0xb8
                    v0_1 = x8_5[3]
                    v3_1 = *x8_5
                    v2_1 = x8_5[1]
                    *(x9_1 + 0x3c228) = x8_5[2]
                    *(x9_1 + 0x3c238) = v0_1
                    *(x9_1 + 0x3c208) = v3_1
                    *(x9_1 + 0x3c218) = v2_1
                    v0_1 = x8_5[7]
                    v3_1 = x8_5[4]
                    v2_1 = x8_5[5]
                    *(x9_1 + 0x3c268) = x8_5[6]
                    *(x9_1 + 0x3c278) = v0_1
                    *(x9_1 + 0x3c248) = v3_1
                    *(x9_1 + 0x3c258) = v2_1
                    v1_1 = x8_5[9]
                    v0_1 = x8_5[0xa]
                    v2_1 = x8_5[8]
                    *(x9_1 + 0x3c2b8) = x8_5[0xb].q
                    *(x9_1 + 0x3c298) = v1_1
                    *(x9_1 + 0x3c2a8) = v0_1
                    *(x9_1 + 0x3c288) = v2_1
                    x8 = *(x21 + 0x19c0)
        
        x23_1 += 1
    while (x23_1 s< x8)

return zx.q(x22)
