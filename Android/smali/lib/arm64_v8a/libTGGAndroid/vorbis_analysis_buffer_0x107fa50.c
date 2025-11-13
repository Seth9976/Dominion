// 函数: vorbis_analysis_buffer
// 地址: 0x107fa50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(arg1 + 0x88)
void* x21 = *(arg1 + 8)
int64_t x0 = *(x22 + 0x78)

if (x0 != 0)
    free(x0)

int64_t x0_1 = *(x22 + 0x80)
*(x22 + 0x78) = 0

if (x0_1 != 0)
    free(x0_1)

int64_t x0_2 = *(x22 + 0x88)
*(x22 + 0x80) = 0

if (x0_2 != 0)
    free(x0_2)

*(x22 + 0x88) = 0
int32_t x8 = *(arg1 + 0x24)
uint64_t x8_1

if (x8 + arg2 s>= *(arg1 + 0x20))
    int32_t x8_2 = x8 + (arg2 << 1)
    *(arg1 + 0x20) = x8_2
    
    if (*(x21 + 4) s>= 1)
        **(arg1 + 0x10) = realloc(**(arg1 + 0x10), zx.q(x8_2) << 0x20 s>> 0x1e)
        x8_1 = zx.q(*(x21 + 4))
        
        if (x8_1.d s> 1)
            int64_t x20_1 = 1
            
            do
                x20_1 += 1
                (*(arg1 + 0x10))[x20_1] =
                    realloc((*(arg1 + 0x10))[x20_1], sx.q(*(arg1 + 0x20)) << 2)
                x8_1 = sx.q(*(x21 + 4))
            while (x20_1 s< x8_1)
        
        if (x8_1.d s>= 1)
            goto label_107fb34
else
    x8_1 = zx.q(*(x21 + 4))
    
    if (x8_1.d s>= 1)
    label_107fb34:
        int64_t x10_1 = sx.q(*(arg1 + 0x24))
        int64_t i = 0
        
        do
            i += 1
            (*(arg1 + 0x18))[i] = (*(arg1 + 0x10))[i] + (x10_1 << 2)
        while (i s< sx.q(x8_1.d))
return *(arg1 + 0x18)
