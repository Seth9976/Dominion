// 函数: _Z11UI2GetChildR3UI2i
// 地址: 0x101a120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*(arg1 + 0x1970))
uint64_t x11_3

if (i_2.d == 0)
labelid_4:
    x11_3 = 0
else
    int64_t x9_2
    int32_t x11_1
    
    if (i_2.d s> arg2)
        x11_1 = *(arg1 + (sx.q(arg2) << 2) + 0x1870)
        x9_2 = *gUI2
    
    if (i_2.d s> arg2 && *(x9_2 + zx.q(x11_1.w) * 0x19a8 + 0x1658) == arg2)
        if (x11_1 == 0)
            goto label_101a1c0
        
    label_101a1bc:
        return x9_2 + mulu.dp.d(x11_1 & 0xffff, 0x19a8)
    
    if (i_2.d s< 1)
    label_101a218:
        x11_3 = 0
    else
        x9_2 = *gUI2
        void* __offset(UI2, 0x1870) x11_2 = arg1 + 0x1870
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            int32_t x14_1 = *x11_2
            
            if (*(x9_2 + zx.q(x14_1.w) * 0x19a8 + 0x1658) == arg2)
                x11_1 = x14_1
                
                if (x11_1 == 0)
                    goto label_101a1c0
                
                goto label_101a1bc
            
            i = i_1
            i_1 -= 1
            x11_2 += 4
        while (i != 1)
    label_101a1c0:
        
        if (i_2.d s< 1)
        label_101a218_1:
            x11_3 = 0
        else
            x11_3 = zx.q(*(arg1 + 0x1870))
            
            if (*(x9_2 + x11_3 * 0x19a8 + 0x1658) != 0
                    && *(x9_2 + mulu.dp.d(x11_3.d, 0x19a8) + 0x1658) != 0)
                int64_t x10 = i_2 - 1
                void* __offset(UI2, 0x1874) x11_4 = arg1 + 0x1874
                uint64_t x13_3
                
                do
                    if (x10 == 0)
                        goto label_101a218_1
                    
                    x13_3 = zx.q(*x11_4)
                    x11_4 += 4
                    x10 -= 1
                while (*(x9_2 + x13_3 * 0x19a8 + 0x1658) != 0)
                
                x11_3 = zx.q(x13_3.d)

return *gUI2 + mulu.dp.d(x11_3.d & 0xffff, 0x19a8)
