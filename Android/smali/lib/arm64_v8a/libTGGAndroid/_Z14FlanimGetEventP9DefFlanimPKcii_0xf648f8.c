// 函数: _Z14FlanimGetEventP9DefFlanimPKcii
// 地址: 0xf648f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = sx.q(*(arg1 + 0x18))

if (x22.d s>= 1)
    char** result = *(arg1 + 0x10)
    int64_t x23_1 = 0
    
    do
        int32_t x8_1 = result[1].d
        
        if (x8_1 s>= arg3 && x8_1 s< arg4 + arg3 && strcasecmp(arg2, *result) == 0)
            return result
        
        x23_1 += 1
        result = &result[4]
    while (x23_1 s< x22)

return nullptr
