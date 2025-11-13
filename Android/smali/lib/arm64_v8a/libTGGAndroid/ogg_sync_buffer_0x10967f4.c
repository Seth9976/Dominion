// 函数: ogg_sync_buffer
// 地址: 0x10967f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1[1].d

if ((x8 & 0x80000000) != 0)
    return 0

int64_t x9_1 = sx.q(arg1[2].d)

if (x9_1.d != 0)
    int64_t x2_1 = sx.q(*(arg1 + 0xc)) - x9_1
    *(arg1 + 0xc) = x2_1.d
    
    if (x2_1.d s>= 1)
        int64_t x0 = *arg1
        memmove(x0, x0 + x9_1, x2_1)
        x8 = arg1[1].d
    
    arg1[2].d = 0

int32_t x9_2 = *(arg1 + 0xc)
int64_t x0_1

if (sx.q(x8 - x9_2) s>= arg2)
    x0_1 = *arg1
else
    int64_t oldmem = *arg1
    size_t bytes = arg2 + sx.q(x9_2) + 0x1000
    
    if (oldmem != 0)
        x0_1 = realloc(oldmem, bytes)
        
        if (x0_1 == 0)
            goto label_10968ac
        
        goto label_1096874
    
    x0_1 = malloc(bytes)
    
    if (x0_1 == 0)
    label_10968ac:
        int64_t x0_4 = *arg1
        
        if (x0_4 != 0)
            free(x0_4)
        
        __builtin_memset(arg1, 0, 0x20)
        return 0
    
label_1096874:
    x9_2 = *(arg1 + 0xc)
    *arg1 = x0_1
    arg1[1].d = bytes.d

return x0_1 + sx.q(x9_2)
