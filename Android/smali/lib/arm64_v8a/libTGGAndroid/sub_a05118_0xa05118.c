// 函数: sub_a05118
// 地址: 0xa05118
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*(arg1 + 0xc))

if (i_2.d s>= 1)
    int64_t* x9_1 = *arg1
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        if (*x9_1 == arg2)
            return 
        
        i = i_1
        i_1 -= 1
        x9_1 = &x9_1[1]
    while (i != 1)

int32_t x9_2 = arg1[1].d

if (x9_2 == 0)
    arg1[1].d = 4
    *arg1 = operator new[](0x20)
    arg1[9] = operator new[](0x10)
else
    int64_t x26_1 = sx.q(i_2.d)
    
    if (x26_1.d == x9_2)
        void* x22_1 = *arg1
        void* x21_1 = arg1[9]
        int64_t x25_1 = x26_1 << 1
        int64_t x0
        
        if (0 == x25_1 u>> 0x3d)
            x0 = x26_1 << 4
        else
            x0 = -1
        
        arg1[1].d = x25_1.d
        int64_t x0_1 = operator new[](x0)
        int64_t x24_1 = x26_1 << 3
        *arg1 = x0_1
        int64_t x0_2
        
        if (0 == x25_1 u>> 0x3e)
            x0_2 = x24_1
        else
            x0_2 = -1
        
        int64_t x0_3 = operator new[](x0_2)
        arg1[9] = x0_3
        memcpy(x0_1, x22_1, x24_1)
        memcpy(x0_3, x21_1, x26_1 << 2)
        
        if (x22_1 != 0)
            operator delete[](x22_1)
        
        if (x21_1 != 0)
            operator delete[](x21_1)

*(arg1[9] + (sx.q(*(arg1 + 0xc)) << 2)) = 0
*(*arg1 + (sx.q(*(arg1 + 0xc)) << 3)) = arg2
*(arg1 + 0xc) += 1
