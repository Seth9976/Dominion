// 函数: _vp_psy_clear
// 地址: 0x108a6fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

int64_t x0 = *(arg1 + 0x20)

if (x0 != 0)
    free(x0)

int64_t x0_1 = *(arg1 + 0x28)

if (x0_1 != 0)
    free(x0_1)

int64_t x0_2 = *(arg1 + 0x30)

if (x0_2 != 0)
    free(x0_2)

int64_t* x8 = *(arg1 + 0x10)

if (x8 != 0)
    int64_t x20_1 = 0
    
    while (true)
        free(**(x8 + x20_1))
        free(*(*(*(arg1 + 0x10) + x20_1) + 8))
        free(*(*(*(arg1 + 0x10) + x20_1) + 0x10))
        free(*(*(*(arg1 + 0x10) + x20_1) + 0x18))
        free(*(*(*(arg1 + 0x10) + x20_1) + 0x20))
        free(*(*(*(arg1 + 0x10) + x20_1) + 0x28))
        free(*(*(*(arg1 + 0x10) + x20_1) + 0x30))
        free(*(*(*(arg1 + 0x10) + x20_1) + 0x38))
        free(*(*(arg1 + 0x10) + x20_1))
        
        if (x20_1 == 0x80)
            break
        
        x8 = *(arg1 + 0x10)
        x20_1 += 8
    
    free(*(arg1 + 0x10))

int64_t* x8_17 = *(arg1 + 0x18)

if (x8_17 != 0)
    free(*x8_17)
    free(*(*(arg1 + 0x18) + 8))
    free(*(*(arg1 + 0x18) + 0x10))
    free(*(arg1 + 0x18))

return memset(arg1, 0, 0x60) __tailcall
