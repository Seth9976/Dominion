// 函数: ogg_sync_clear
// 地址: 0x1096778
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int64_t x0 = *arg1
    
    if (x0 != 0)
        free(x0)
    
    __builtin_memset(arg1, 0, 0x20)

return 0
