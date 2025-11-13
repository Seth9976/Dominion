// 函数: _Z9UI2SelectPKcPP3UI2i
// 地址: 0x1029d24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gUI2 + 8))
void* i

if (x9.d != 0)
    i = *gUI2
    int64_t x9_1 = i + x9 * 0x19a8
    
    while (zx.d(*(i + 0x19a2)) == 0)
        i += 0x19a8
        
        if (i u>= x9_1)
            goto label_1029dfc

int32_t x22

if (x9.d == 0 || i == 0xffffffff)
label_1029dfc:
    x22 = 0
else
    x22 = 0
    
    do
        if ((operator==(i + 0x1650, arg1) & 1) != 0)
            bool cond:0_1 = x22 + 1 == arg3
            arg2[sx.q(x22)] = i
            x22 += 1
            
            if (cond:0_1)
                x22 = arg3
                break
        
        void* i_1 = *gUI2
        
        if (i == 0)
            i = i_1
        else
            i += 0x19a8
        
        int64_t x8_2 = i_1 + zx.q(*(gUI2 + 8)) * 0x19a8
        
        if (i u>= x8_2)
            break
        
        while (zx.d(*(i + 0x19a2)) == 0)
            i += 0x19a8
            
            if (i u>= x8_2)
                return zx.q(x22)
    while (i != 0xffffffff)

return zx.q(x22)
