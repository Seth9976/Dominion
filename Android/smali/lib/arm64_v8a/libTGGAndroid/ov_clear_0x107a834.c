// 函数: ov_clear
// 地址: 0x107a834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    vorbis_block_clear(&arg1[0x5a])
    vorbis_dsp_clear(&arg1[0x48])
    ogg_stream_clear(&arg1[0x15])
    int64_t x0_3 = arg1[0xd]
    
    if (x0_3 != 0)
        int32_t x8_1 = arg1[8].d
        
        if (x8_1 != 0)
            if (x8_1 s>= 1)
                int64_t x20_1 = 0
                int64_t x21_1 = 0
                int64_t i = 0
                
                do
                    vorbis_info_clear(x0_3 + x20_1)
                    vorbis_comment_clear(arg1[0xe] + x21_1)
                    x0_3 = arg1[0xd]
                    i += 1
                    x21_1 += 0x20
                    x20_1 += 0x38
                while (i s< sx.q(arg1[8].d))
            
            free(x0_3)
            free(arg1[0xe])
    
    int64_t x0_7 = arg1[0xa]
    
    if (x0_7 != 0)
        free(x0_7)
    
    int64_t x0_8 = arg1[0xc]
    
    if (x0_8 != 0)
        free(x0_8)
    
    int64_t x0_9 = arg1[0xb]
    
    if (x0_9 != 0)
        free(x0_9)
    
    int64_t x0_10 = arg1[9]
    
    if (x0_10 != 0)
        free(x0_10)
    
    ogg_sync_clear(&arg1[4])
    int64_t x0_12 = *arg1
    
    if (x0_12 != 0)
        int64_t x8_4 = arg1[0x74]
        
        if (x8_4 != 0)
            x8_4(x0_12)
    
    memset(arg1, 0, 0x3b0)

return 0
