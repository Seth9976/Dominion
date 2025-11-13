// 函数: sub_1082d14
// 地址: 0x1082d14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1[0xd2]
oggpack_write(arg2, sx.q(*arg1), 5)

if (*arg1 s>= 1)
    int64_t i = 0
    int32_t x27_1 = -1
    
    do
        oggpack_write(arg2, sx.q(arg1[1 + i]), 4)
        int32_t x8_3 = arg1[1 + i]
        i += 1
        
        if (x27_1 s< x8_3)
            x27_1 = x8_3
    while (i s< sx.q(*arg1))
    
    if ((x27_1 & 0x80000000) == 0)
        int64_t i_1 = 0
        void* x26_1 = &arg1[0x50]
        
        do
            oggpack_write(arg2, sx.q(arg1[0x20 + i_1]) - 1, 3)
            oggpack_write(arg2, sx.q(arg1[0x30 + i_1]), 2)
            
            if (arg1[0x30 + i_1] != 0)
                oggpack_write(arg2, sx.q(arg1[0x40 + i_1]), 8)
            
            if (arg1[0x30 + i_1] == 0 || arg1[0x30 + i_1] != 0x1f)
                int64_t j = 0
                
                do
                    oggpack_write(arg2, sx.q(*(x26_1 + (j << 2))) + 1, 8)
                    j += 1
                while (j s< sx.q(1 << arg1[0x30 + i_1]))
            
            i_1 += 1
            x26_1 += 0x20
        while (i_1 != zx.q(x27_1 + 1))

oggpack_write(arg2, sx.q(arg1[0xd0]) - 1, 2)
oggpack_write(arg2, sx.q(ov_ilog(zx.q(x8 - 1))), 4)
int32_t result = ov_ilog(zx.q(x8 - 1))
int32_t x8_12 = *arg1
int32_t result_1 = result

if (x8_12 s>= 1)
    int64_t i_2 = 0
    int32_t x9_2 = 0
    int32_t x10_1 = 0
    
    do
        int32_t x11_2 = arg1[0x20 + sx.q(arg1[1 + i_2])]
        int32_t x26_2 = x11_2 + x10_1
        
        if (x9_2 s< x26_2)
            void* x27_3 = &arg1[0xd3 + sx.q(x9_2)]
            int32_t j_2 = x10_1 + x11_2 - x9_2
            int32_t j_1
            
            do
                int64_t x1_8 = sx.q(*x27_3)
                x27_3 += 4
                result = oggpack_write(arg2, x1_8, zx.q(result_1))
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
            x8_12 = *arg1
            x9_2 = x26_2
        
        i_2 += 1
        x10_1 = x26_2
    while (i_2 s< sx.q(x8_12))

return result
