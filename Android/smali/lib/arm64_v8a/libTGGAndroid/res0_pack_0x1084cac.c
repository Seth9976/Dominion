// 函数: res0_pack
// 地址: 0x1084cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

oggpack_write(arg2, *arg1, 0x18)
oggpack_write(arg2, arg1[1], 0x18)
oggpack_write(arg2, sx.q(arg1[2].d) - 1, 0x18)
oggpack_write(arg2, sx.q(*(arg1 + 0x14)) - 1, 6)
int64_t result = oggpack_write(arg2, sx.q(*(arg1 + 0x1c)), 8)

if (*(arg1 + 0x14) s>= 1)
    int64_t i = 0
    int32_t i_3 = 0
    
    do
        int64_t x24_1 = i << 2
        int32_t x0_6 = ov_ilog(zx.q(*(&arg1[4] + x24_1)))
        int64_t x1_5 = sx.q(*(&arg1[4] + x24_1))
        int64_t x2_1
        
        if (x0_6 s< 4)
            x2_1 = 4
        else
            oggpack_write(arg2, x1_5, 3)
            oggpack_write(arg2, 1, 1)
            x2_1 = 5
            x1_5 = (zx.q(*(&arg1[4] + (i << 2))) & 0xfffffff8) << 0x20 s>> 0x23
        
        result = oggpack_write(arg2, x1_5, x2_1)
        uint32_t j = *(&arg1[4] + (i << 2))
        int32_t x8_5
        
        if (j == 0)
            x8_5 = 0
        else
            x8_5 = 0
            
            do
                int32_t x10_1 = j & 1
                j u>>= 1
                x8_5 += x10_1
            while (j != 0)
        
        i += 1
        i_3 += x8_5
    while (i s< sx.q(*(arg1 + 0x14)))
    
    if (i_3 s>= 1)
        void* x20_1 = &arg1[0x24]
        uint64_t i_2 = zx.q(i_3)
        uint64_t i_1
        
        do
            int64_t x1_6 = sx.q(*x20_1)
            x20_1 += 4
            result = oggpack_write(arg2, x1_6, 8)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
