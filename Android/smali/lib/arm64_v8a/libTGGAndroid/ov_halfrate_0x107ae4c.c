// 函数: ov_halfrate
// 地址: 0x107ae4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x68) != 0)
    if (*(arg1 + 0x80) s>= 4)
        vorbis_dsp_clear(arg1 + 0x240)
        vorbis_block_clear(arg1 + 0x2d0)
        int64_t x1 = *(arg1 + 0x78)
        *(arg1 + 0x80) = 3
        
        if ((x1 & 0xffffffff80000000) == 0)
            *(arg1 + 0x78) = -1
            ov_pcm_seek(arg1, x1)
    
    if (*(arg1 + 0x40) s< 1)
        return 0
    
    int64_t x21_1 = 0
    int64_t x22_1 = 0
    
    while (vorbis_synthesis_halfrate(*(arg1 + 0x68) + x21_1, zx.q(arg2)) == 0)
        x22_1 += 1
        x21_1 += 0x38
        
        if (x22_1 s>= sx.q(*(arg1 + 0x40)))
            return 0
    
    if (arg2 != 0 && *(arg1 + 0x68) != 0)
        if (*(arg1 + 0x80) s>= 4)
            vorbis_dsp_clear(arg1 + 0x240)
            vorbis_block_clear(arg1 + 0x2d0)
            int64_t x1_2 = *(arg1 + 0x78)
            *(arg1 + 0x80) = 3
            
            if ((x1_2 & 0xffffffff80000000) == 0)
                *(arg1 + 0x78) = -1
                ov_pcm_seek(arg1, x1_2)
        
        if (*(arg1 + 0x40) s>= 1)
            int64_t x20_1 = 0
            int64_t x21_2 = 0
            
            while (vorbis_synthesis_halfrate(*(arg1 + 0x68) + x20_1, 0) == 0)
                x21_2 += 1
                x20_1 += 0x38
                
                if (x21_2 s>= sx.q(*(arg1 + 0x40)))
                    return 0xffffff7d

return 0xffffff7d
