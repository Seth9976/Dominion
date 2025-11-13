// 函数: ogg_stream_clear
// 地址: 0x1095ddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int64_t x0 = *arg1
    
    if (x0 != 0)
        free(x0)
    
    int64_t x0_1 = arg1[4]
    
    if (x0_1 != 0)
        free(x0_1)
    
    int64_t x0_2 = arg1[5]
    
    if (x0_2 != 0)
        free(x0_2)
    
    memset(arg1, 0, 0x198)

return 0
