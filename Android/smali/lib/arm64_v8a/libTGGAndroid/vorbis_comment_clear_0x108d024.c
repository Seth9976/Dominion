// 函数: vorbis_comment_clear
// 地址: 0x108d024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = arg1

if (arg1 == 0)
    return 

int64_t x0 = *x19

if (x0 != 0)
    int32_t x9_1 = x19[2].d
    
    if (x9_1 s>= 1)
        int64_t i = 0
        
        do
            int64_t x8_1 = *(x0 + (i << 3))
            
            if (x8_1 != 0)
                free(x8_1)
                x9_1 = x19[2].d
                x0 = *x19
            
            i += 1
        while (i s< sx.q(x9_1))
    
    free(x0)

int64_t x0_2 = x19[1]

if (x0_2 != 0)
    free(x0_2)

arg1 = x19[3]

if (arg1 != 0)
    free(arg1)

__builtin_memset(x19, 0, 0x20)
