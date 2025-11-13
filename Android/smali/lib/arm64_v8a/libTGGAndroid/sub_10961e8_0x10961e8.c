// 函数: sub_10961e8
// 地址: 0x10961e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg1[6]
int64_t result = 0

if (x8 - arg2 s<= arg1[7])
    if (x8 s> 0x7fffffffffffffff - arg2)
    label_109626c:
        int64_t x0_4 = *arg1
        
        if (x0_4 != 0)
            free(x0_4)
        
        int64_t x0_5 = arg1[4]
        
        if (x0_5 != 0)
            free(x0_5)
        
        int64_t x0_6 = arg1[5]
        
        if (x0_6 != 0)
            free(x0_6)
        
        memset(arg1, 0, 0x198)
        return 0xffffffff
    
    int64_t x8_1 = x8 + arg2
    int64_t x20_1
    
    if (x8_1 s< 0x7fffffffffffffdf)
        x20_1 = x8_1 + 0x20
    else
        x20_1 = x8_1
    
    int64_t x0_1 = realloc(arg1[4], x20_1 << 2)
    
    if (x0_1 == 0)
        goto label_109626c
    
    int64_t oldmem = arg1[5]
    arg1[4] = x0_1
    int64_t x0_3 = realloc(oldmem, x20_1 << 3)
    
    if (x0_3 == 0)
        goto label_109626c
    
    result = 0
    arg1[5] = x0_3
    arg1[6] = x20_1

return result
