// 函数: vorbis_dsp_clear
// 地址: 0x107f76c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

void* x21 = *(arg1 + 8)
int64_t* x20
void* const x22

if (x21 == 0)
    x22 = nullptr
    x20 = *(arg1 + 0x88)
    
    if (x20 != 0)
    label_107f7a0:
        int64_t x0 = *x20
        
        if (x0 != 0)
            _ve_envelope_clear(x0)
            free(*x20)
        
        int64_t* x8_1 = x20[2]
        
        if (x8_1 != 0)
            mdct_clear(*x8_1)
            free(*x20[2])
            free(x20[2])
        
        int64_t* x8_3 = x20[3]
        
        if (x8_3 != 0)
            mdct_clear(*x8_3)
            free(*x20[3])
            free(x20[3])
        
        int64_t* x0_8 = x20[0xb]
        
        if (x0_8 != 0)
            if (x22 != 0 && *(x22 + 0x18) s>= 1)
                (*(*(_floor_P + (sx.q(*(x22 + 0x528)) << 3)) + 0x20))(*x0_8)
                
                if (*(x22 + 0x18) s>= 2)
                    int64_t x25_1 = 0
                    int64_t i
                    
                    do
                        (*(*(_floor_P + (sx.q(*(x22 + 0x52c + (x25_1 << 2))) << 3)) + 0x20))(
                            *(x20[0xb] + (x25_1 << 3) + 8))
                        i = x25_1 + 2
                        x25_1 += 1
                    while (i s< sx.q(*(x22 + 0x18)))
                
                x0_8 = x20[0xb]
            
            free(x0_8)
        
        int64_t* x0_11 = x20[0xc]
        
        if (x0_11 != 0)
            if (x22 != 0 && *(x22 + 0x1c) s>= 1)
                (*(*(_residue_P + (sx.q(*(x22 + 0x828)) << 3)) + 0x20))(*x0_11)
                
                if (*(x22 + 0x1c) s>= 2)
                    int64_t x25_2 = 0
                    int64_t i_1
                    
                    do
                        (*(*(_residue_P + (sx.q(*(x22 + 0x82c + (x25_2 << 2))) << 3)) + 0x20))(
                            *(x20[0xc] + (x25_2 << 3) + 8))
                        i_1 = x25_2 + 2
                        x25_2 += 1
                    while (i_1 s< sx.q(*(x22 + 0x1c)))
                
                x0_11 = x20[0xc]
            
            free(x0_11)
        
        int64_t x0_14 = x20[0xd]
        
        if (x0_14 != 0)
            if (x22 != 0 && *(x22 + 0x24) s>= 1)
                _vp_psy_clear()
                
                if (*(x22 + 0x24) s>= 2)
                    int64_t i_2 = 1
                    int64_t x24_3 = 0x60
                    
                    do
                        _vp_psy_clear(x20[0xd] + x24_3)
                        i_2 += 1
                        x24_3 += 0x60
                    while (i_2 s< sx.q(*(x22 + 0x24)))
                
                x0_14 = x20[0xd]
            
            free(x0_14)
        
        int64_t x0_16 = x20[0xe]
        
        if (x0_16 != 0)
            _vp_global_free(x0_16)
        
        vorbis_bitrate_clear(&x20[0x12])
        drft_clear(&x20[4])
        drft_clear(&x20[7])
else
    x22 = *(x21 + 0x30)
    x20 = *(arg1 + 0x88)
    
    if (x20 != 0)
        goto label_107f7a0
void* x0_22 = *(arg1 + 0x10)

if (x0_22 != 0)
    if (x21 != 0)
        int32_t x8_27 = *(x21 + 4)
        
        if (x8_27 s>= 1)
            int64_t x22_1 = 0
            int64_t x0_20 = *x0_22
            
            if (x0_20 != 0)
                goto label_107f9ac
            
            while (true)
                x22_1 += 1
                
                if (x22_1 s>= sx.q(x8_27))
                    break
                
                x0_20 = *(*(arg1 + 0x10) + (x22_1 << 3))
                
                if (x0_20 != 0)
                label_107f9ac:
                    free(x0_20)
                    x8_27 = *(x21 + 4)
            
            x0_22 = *(arg1 + 0x10)
    
    free(x0_22)
    int64_t x0_23 = *(arg1 + 0x18)
    
    if (x0_23 != 0)
        free(x0_23)

if (x20 != 0)
    int64_t x0_24 = x20[0xf]
    
    if (x0_24 != 0)
        free(x0_24)
    
    int64_t x0_25 = x20[0x10]
    
    if (x0_25 != 0)
        free(x0_25)
    
    int64_t x0_26 = x20[0x11]
    
    if (x0_26 != 0)
        free(x0_26)
    
    free(x20)

return memset(arg1, 0, 0x90) __tailcall
