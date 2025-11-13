// 函数: sub_107f328
// 地址: 0x107f328
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x26 = *(arg2 + 0x30)

if (x26 != 0 && x26[2].d s>= 1)
    int64_t x8_2 = *x26
    
    if (x8_2 s>= 0x40 && x26[1] s>= x8_2)
        uint64_t x27_1 = zx.q(x26[0x2d2].d)
        memset(arg1, 0, 0x88)
        void* x0_2 = calloc(1, 0xe8)
        *(arg1 + 0x88) = x0_2
        *(arg1 + 8) = arg2
        *(x0_2 + 0x50) = ov_ilog(zx.q(x26[2].d - 1))
        int64_t* x0_5 = calloc(1, 8)
        *(x0_2 + 0x10) = x0_5
        int64_t* x0_6 = calloc(1, 8)
        *(x0_2 + 0x18) = x0_6
        int64_t x0_7 = calloc(1, 0x20)
        *x0_5 = x0_7
        *x0_6 = calloc(1, 0x20)
        mdct_init(x0_7, *x26 s>> x27_1)
        mdct_init(**(x0_2 + 0x18), x26[1] s>> x27_1)
        *(x0_2 + 8) = ov_ilog(zx.q(*x26)) - 7
        *(x0_2 + 0xc) = ov_ilog(zx.q(x26[1].d)) - 7
        
        if (arg3 != 0)
            drft_init(x0_2 + 0x20, zx.q(*x26))
            drft_init(x0_2 + 0x38, zx.q(x26[1].d))
            
            if (x26[0x265] == 0)
                int64_t x0_35 = calloc(sx.q(x26[4].d), 0x60)
                int32_t x8_33 = x26[4].d
                x26[0x265] = x0_35
                
                if (x8_33 s>= 1)
                    vorbis_book_init_encode(x0_35, x26[0x165])
                    
                    if (x26[4].d s> 1)
                        int64_t x23_4 = 0x166
                        int64_t x22_4 = 0x60
                        int64_t i
                        
                        do
                            vorbis_book_init_encode(x26[0x265] + x22_4, x26[x23_4])
                            i = x23_4 - 0x164
                            x23_4 += 1
                            x22_4 += 0x60
                        while (i s< sx.q(x26[4].d))
            
            int64_t x0_18 = calloc(sx.q(*(x26 + 0x24)), 0x60)
            *(x0_2 + 0x68) = x0_18
            
            if (*(x26 + 0x24) s>= 1)
                int64_t x23_2 = 0
                int64_t x24_2 = 0x266
                
                while (true)
                    int32_t* x1_4 = x26[x24_2]
                    int64_t x8_11 = x26[sx.q(*x1_4)]
                    int64_t x8_12
                    
                    if (x8_11 s< 0)
                        x8_12 = x8_11 + 1
                    else
                        x8_12 = x8_11
                    
                    _vp_psy_init(x0_18 + x23_2, x1_4, &x26[0x26a], x8_12 u>> 1, *(arg2 + 8))
                    
                    if (x24_2 - 0x265 s>= sx.q(*(x26 + 0x24)))
                        break
                    
                    x0_18 = *(x0_2 + 0x68)
                    x23_2 += 0x60
                    x24_2 += 1
            
            *arg1 = 1
        else if (x26[0x265] == 0)
            int64_t x0_38 = calloc(sx.q(x26[4].d), 0x60)
            uint64_t x8_37 = zx.q(x26[4].d)
            x26[0x265] = x0_38
            
            if (x8_37.d s>= 1)
                int64_t x22_5 = 0
                int64_t x23_5 = 0
                
                while (true)
                    int64_t x1_9 = x26[0x165 + x23_5]
                    
                    if (x1_9 != 0)
                        if (vorbis_book_init_decode(x26[0x265] + x22_5, x1_9) != 0)
                            x8_37 = zx.q(x26[4].d)
                        else
                            vorbis_staticbook_destroy(x26[0x165 + x23_5])
                            x26[0x165 + x23_5] = 0
                            x8_37 = sx.q(x26[4].d)
                            x23_5 += 1
                            x22_5 += 0x60
                            
                            if (x23_5 s>= x8_37)
                                break
                            
                            continue
                    
                    if (x8_37.d s>= 1)
                        int64_t i_1 = 0
                        
                        do
                            int64_t x0_42 = x26[0x165 + i_1]
                            
                            if (x0_42 != 0)
                                vorbis_staticbook_destroy(x0_42)
                                x26[0x165 + i_1] = 0
                                x8_37 = zx.q(x26[4].d)
                            
                            i_1 += 1
                        while (i_1 s< sx.q(x8_37.d))
                    
                    vorbis_dsp_clear(arg1)
                    return 0xffffffff
        
        int32_t x23_3 = (x26[1]).d
        arg1[8] = x23_3
        int64_t x24_3 = sx.q(*(arg2 + 4))
        int64_t bytes = x24_3 << 3
        *(arg1 + 0x10) = malloc(bytes)
        *(arg1 + 0x18) = malloc(bytes)
        
        if (x24_3.d s>= 1)
            int64_t i_2 = 0
            
            do
                *(*(arg1 + 0x10) + (i_2 << 3)) = calloc(sx.q(x23_3), 4)
                i_2 += 1
            while ((x24_3 & 0xffffffff) != i_2)
        
        *(arg1 + 0x38) = 0
        *(arg1 + 0x40) = 0
        int64_t x8_16 = x26[1]
        int64_t x8_17
        
        if (x8_16 s< 0)
            x8_17 = x8_16 + 1
        else
            x8_17 = x8_16
        
        int64_t x8_18 = x8_17 s>> 1
        *(arg1 + 0x50) = x8_18
        arg1[9] = x8_18.d
        *(x0_2 + 0x58) = calloc(sx.q(x26[3].d), 8)
        *(x0_2 + 0x60) = calloc(sx.q(*(x26 + 0x1c)), 8)
        
        if (x26[3].d s>= 1)
            int64_t i_3 = 0
            
            do
                int64_t x0_31 = (
                    *(*(_floor_P + (sx.q(*(&x26[0xc5] + (i_3 << 2) - 0x100)) << 3)) + 0x10))(arg1, 
                    x26[0xc5 + i_3])
                i_3 += 1
                (*(x0_2 + 0x58))[i_3] = x0_31
            while (i_3 s< sx.q(x26[3].d))
        
        if (*(x26 + 0x1c) s>= 1)
            int64_t i_4 = 0
            
            do
                int64_t x0_33 = (
                    *(*(_residue_P + (sx.q(*(&x26[0x125] + (i_4 << 2) - 0x100)) << 3)) + 0x10))(arg1, 
                    x26[0x125 + i_4])
                i_4 += 1
                (*(x0_2 + 0x60))[i_4] = x0_33
            while (i_4 s< sx.q(*(x26 + 0x1c)))
        
        return 0

return 1
