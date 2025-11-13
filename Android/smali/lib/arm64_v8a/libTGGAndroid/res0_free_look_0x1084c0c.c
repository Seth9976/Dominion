// 函数: res0_free_look
// 地址: 0x1084c0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

int32_t x9 = *(arg1 + 8)
int64_t x0 = *(arg1 + 0x20)

if (x9 s>= 1)
    int64_t i = 0
    
    do
        int64_t x8_1 = *(x0 + (i << 3))
        
        if (x8_1 != 0)
            free(x8_1)
            x9 = *(arg1 + 8)
            x0 = *(arg1 + 0x20)
        
        i += 1
    while (i s< sx.q(x9))

free(x0)
int64_t x0_2 = *(arg1 + 0x30)

if (*(arg1 + 0x28) s>= 1)
    int64_t i_1 = 0
    
    do
        free(*(x0_2 + (i_1 << 3)))
        x0_2 = *(arg1 + 0x30)
        i_1 += 1
    while (i_1 s< sx.q(*(arg1 + 0x28)))

free(x0_2)
return free(arg1) __tailcall
