// 函数: sub_10e9ddc
// 地址: 0x10e9ddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 1)
    sub_10ea33c(*(arg2 - 0x38))
    noreturn

void* x0 = *(arg2 - 0x58)

if (x0 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(x0 - 0x78)
        i = __stlxr(x9_1 - 1, x0 - 0x78)
    while (i != 0)
    
    if (x9_1 == 1)
        int64_t x8_2 = *(x0 - 0x68)
        
        if (x8_2 != 0)
            x8_2()
        
        sub_10ff5c0(x0 - 0x80)

return sub_10ff5c0(arg2 - 0x60) __tailcall
