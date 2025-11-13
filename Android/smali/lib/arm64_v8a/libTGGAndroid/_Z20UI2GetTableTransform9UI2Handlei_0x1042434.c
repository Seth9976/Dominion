// 函数: _Z20UI2GetTableTransform9UI2Handlei
// 地址: 0x1042434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(arg1.d) & 0xffff
int64_t x9 = *gUI2
uint64_t x11_1 = zx.q(*(x9 + mulu.dp.d(x12.d, 0x19a8) + 0x1970))
uint64_t x13_3

if (x11_1.d == 0)
label_10424c0:
    x13_3 = 0
else
    if (x11_1.d s> arg2)
        x13_3 = zx.q(*(x9 + x12 * 0x19a8 + (sx.q(arg2) << 2) + 0x1870))
    
    if (x11_1.d s<= arg2 || *(x9 + x13_3 * 0x19a8 + 0x1658) != arg2)
        if (x11_1.d s< 1)
        label_10424c0_1:
            x13_3 = 0
        else
            int16_t* x12_2 = x9 + x12 * 0x19a8 + 0x1870
            
            while (true)
                uint64_t x14_3 = zx.q(*x12_2)
                
                if (*(x9 + x14_3 * 0x19a8 + 0x1658) == arg2)
                    x13_3 = zx.q(x14_3.d)
                    break
                
                uint64_t temp0_1 = x11_1
                x11_1 -= 1
                x12_2 = &x12_2[2]
                
                if (temp0_1 == 1)
                    goto label_10424c0_1

void* x9_1 = x9 + mulu.dp.d(x13_3.d, 0x19a8)
int128_t v0 = *(x9_1 + 0x16c0)
int128_t* entry_x8
*entry_x8 = *(x9_1 + 0x16b0)
entry_x8[1] = v0
