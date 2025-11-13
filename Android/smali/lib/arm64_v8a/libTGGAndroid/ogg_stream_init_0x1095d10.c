// 函数: ogg_stream_init
// 地址: 0x1095d10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    memset(&arg1[2], 0, 0x188)
    arg1[1] = 0x4000
    arg1[6] = 0x400
    int64_t x0_1 = malloc(0x4000)
    *arg1 = x0_1
    int64_t x0_2 = malloc(0x1000)
    int64_t x21_1 = x0_2
    arg1[4] = x0_2
    int64_t x0_3 = malloc(0x2000)
    arg1[5] = x0_3
    
    if (x0_1 != 0)
        if (x0_3 != 0 && x21_1 != 0)
            arg1[0x2f] = sx.q(arg2)
            return 0
        
        free(x0_1)
        x21_1 = arg1[4]
    
    if (x21_1 != 0)
        free(x21_1)
    
    int64_t x0_7 = arg1[5]
    
    if (x0_7 != 0)
        free(x0_7)
    
    memset(arg1, 0, 0x198)

return 0xffffffff
