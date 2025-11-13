// 函数: ogg_stream_destroy
// 地址: 0x1095e50
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
    
    free(arg1)

return 0
