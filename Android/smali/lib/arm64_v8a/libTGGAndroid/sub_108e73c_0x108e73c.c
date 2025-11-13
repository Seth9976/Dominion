// 函数: sub_108e73c
// 地址: 0x108e73c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1
int64_t x1
int64_t x2

if (*arg2 s< 2)
    x2 = 1
    x0_1 = arg3
    x1 = 0
else
    oggpack_write(arg3, 1, 1)
    x2 = 4
    x0_1 = arg3
    x1 = sx.q(*arg2) - 1

oggpack_write(x0_1, x1, x2)

if (arg2[0x121] s< 1)
    oggpack_write(arg3, 0, 1)
else
    oggpack_write(arg3, 1, 1)
    oggpack_write(arg3, sx.q(arg2[0x121]) - 1, 8)
    
    if (arg2[0x121] s>= 1)
        int64_t i = 0
        
        do
            void* x24_1 = &arg2[i]
            oggpack_write(arg3, sx.q(*(x24_1 + 0x488)), zx.q(ov_ilog(zx.q(*(arg1 + 4) - 1))))
            oggpack_write(arg3, sx.q(*(x24_1 + 0x888)), zx.q(ov_ilog(zx.q(*(arg1 + 4) - 1))))
            i += 1
        while (i s< sx.q(arg2[0x121]))

int64_t result = oggpack_write(arg3, 0, 2)
int32_t x8_8 = *arg2

if (x8_8 s<= 1)
label_108e898:
    
    if (x8_8 s>= 1)
        goto label_108e8a0
else
    if (*(arg1 + 4) s>= 1)
        int64_t i_1 = 0
        
        do
            result = oggpack_write(arg3, sx.q(arg2[1 + i_1]), 4)
            i_1 += 1
        while (i_1 s< sx.q(*(arg1 + 4)))
        
        x8_8 = *arg2
        goto label_108e898
    
label_108e8a0:
    int64_t i_2 = 0
    
    do
        oggpack_write(arg3, 0, 8)
        void* x22_3 = &arg2[i_2]
        oggpack_write(arg3, sx.q(*(x22_3 + 0x404)), 8)
        result = oggpack_write(arg3, sx.q(*(x22_3 + 0x444)), 8)
        i_2 += 1
    while (i_2 s< sx.q(*arg2))

return result
