// 函数: ov_pcm_seek_page
// 地址: 0x107be74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
int64_t x21 = ov_pcm_total(arg1, 0xffffffff)
int64_t i_8

if (arg1[0x10].d s< 2)
    i_8 = 0xffffff7d
else if (arg1[1].d == 0)
    i_8 = 0xffffff76
else
    i_8 = 0xffffff7d
    
    if ((arg2 & 0xffffffff80000000) == 0 && x21 s>= arg2)
        int64_t x13_1 = sx.q(arg1[8].d)
        int64_t x8_3 = arg1[0xc]
        int64_t x11_1 = x13_1 << 0x20
        int32_t x15_1 = (x13_1.d << 1) - 2
        int32_t x9_2
        int64_t x10_1
        int64_t* x11_2
        uint64_t x22_1
        
        while (true)
            int32_t x14_1 = x15_1 + 1
            x10_1 = x11_1
            x9_2 = x15_1
            x22_1 = x13_1 - 1
            x11_2 = x8_3 + (sx.q(x14_1) << 3)
            
            if (x13_1 s< 1)
                x22_1 = zx.q(x13_1.d - 1)
                break
            
            x15_1 = x9_2 - 2
            x13_1 = x22_1
            x21 -= *x11_2
            x11_1 = x10_1 + -0x100000000
            
            if (x21 s<= arg2)
                x11_2 = x8_3 + (sx.q(x14_1) << 3)
                break
        
        int64_t i_15 = *(arg1[9] + (x10_1 s>> 0x1d))
        int64_t i_19 = *(arg1[0xa] + ((x10_1 + -0x100000000) s>> 0x1d))
        int64_t x26_1 = *x11_2
        int64_t var_e8_1 = *(x8_3 + (sx.q(x9_2) << 3))
        void var_90
        int32_t x28_1
        
        if (i_19 != i_15)
            i_8 = 0
            x28_1 = 0
        label_107bfec:
            int64_t x8_7 = (x10_1 + -0x100000000) s>> 0x20
            
            if (i_15 s> i_19)
                int64_t x12_2 = x26_1 + var_e8_1
                int64_t i_2 = -1
                int64_t x8_9 = var_e8_1 + arg2 - x21
                
                while (true)
                    int64_t x8_10 = i_15 - i_19
                    int64_t i_16 = i_19
                    
                    if (x8_10 s>= 0x10000)
                        int64_t i_18 = i_19 + vcvtd_s64_f64(float.d(x8_9 - var_e8_1)
                            * float.d(x8_10) / float.d(x12_2 - var_e8_1)) - 0x10000
                        
                        if (i_18 s< i_19 + 0x10000)
                            i_16 = i_19
                        else
                            i_16 = i_18
                    
                    int64_t x0_5 = *arg1
                    
                    if (x0_5 == 0)
                        goto label_107c450
                    
                    if (arg1[2] != i_16)
                        int64_t x8_15 = arg1[0x73]
                        
                        if (x8_15 == 0)
                            goto label_107c654
                        
                        if (x8_15(x0_5, i_16, 0) == 0xffffffff)
                            i_8 = -0x80
                            goto label_107c660
                        
                        arg1[2] = i_16
                        ogg_sync_reset(&arg1[4])
                    
                    int64_t x0_8
                    
                    if (i_15 s> i_19)
                        int64_t i_5 = i_2
                        
                        while (true)
                        label_107c184:
                            int64_t i_20 = i_19
                            int64_t i_17 = i_15
                            int64_t i_10 = sub_107bd58(arg1, &var_90, i_15 - arg1[2])
                            i_8 = i_10
                            
                            if (i_10 == -0x80)
                                goto label_107c660
                            
                            int64_t i_14
                            
                            while (true)
                                if ((i_8 & 0xffffffff80000000) != 0)
                                    i_19 = i_20
                                    
                                    if (i_16 s<= i_19 + 1)
                                        i_2 = i_5
                                        goto label_107c2f4
                                    
                                    if (i_16 == 0)
                                        goto label_107c660
                                    
                                    int64_t x0_17 = *arg1
                                    
                                    if (i_16 - 0x10000 s> i_19)
                                        i_16 -= 0x10000
                                    else
                                        i_16 = i_19 + 1
                                    
                                    if (x0_17 == 0)
                                        goto label_107c450
                                    
                                    if (arg1[2] == i_16)
                                        i_14 = 0
                                        i_15 = i_17
                                        
                                        if (i_19 s< i_15)
                                            goto label_107c184
                                        
                                        goto label_107c2b4
                                    
                                    int64_t x8_26 = arg1[0x73]
                                    
                                    if (x8_26 == 0)
                                        goto label_107c654
                                    
                                    if (x8_26(x0_17, i_16, 0) == 0xffffffff)
                                        goto label_107c654
                                    
                                    arg1[2] = i_16
                                    ogg_sync_reset(&arg1[4])
                                    i_14 = 0
                                    i_15 = i_17
                                    goto label_107c2a8
                                
                                int32_t x0_14 = ogg_page_serialno(&var_90)
                                
                                if (*(arg1[0xb] + (x8_7 << 3)) == sx.q(x0_14))
                                    x0_8 = ogg_page_granulepos(&var_90)
                                    
                                    if (x0_8 != -1)
                                        break
                                
                                int64_t i_11 = sub_107bd58(arg1, &var_90, i_17 - arg1[2])
                                i_8 = i_11
                                x28_1 = 1
                                
                                if (i_11 == -0x80)
                                    goto label_107c660
                            
                            if (x8_9 s> x0_8)
                                i_19 = arg1[2]
                                x28_1 = 1
                                i_14 = i_8
                                i_15 = i_17
                                i_16 = i_19
                                var_e8_1 = x0_8
                                i_5 = i_8
                                
                                if (x8_9 - x0_8 s<= 0xac44)
                                    goto label_107c2ac
                                
                                var_e8_1 = x0_8
                                x0_8 = x12_2
                                i_16 = i_17
                                i_2 = i_8
                                goto label_107c0dc
                            
                            i_19 = i_20
                            
                            if (i_16 s<= i_19 + 1)
                                i_2 = i_5
                                x28_1 = 1
                                
                                if (i_2 != -1)
                                    goto label_107c2fc
                                
                                break
                            
                            if (i_17 != arg1[2])
                                x28_1 = 1
                            else
                                int64_t x0_9 = *arg1
                                
                                if (i_16 - 0x10000 s> i_19)
                                    i_16 -= 0x10000
                                else
                                    i_16 = i_19 + 1
                                
                                if (x0_9 == 0)
                                    goto label_107c450
                                
                                if (i_17 == i_16)
                                    i_14 = 0
                                    x28_1 = 1
                                    i_15 = i_8
                                    i_16 = i_17
                                    
                                    if (i_19 s< i_15)
                                        continue
                                    
                                    goto label_107c2b4
                                
                                int64_t x8_17 = arg1[0x73]
                                
                                if (x8_17 == 0)
                                    goto label_107c654
                                
                                if (x8_17(x0_9, i_16, 0) == 0xffffffff)
                                    goto label_107c654
                                
                                arg1[2] = i_16
                                ogg_sync_reset(&arg1[4])
                                i_14 = 0
                                x28_1 = 1
                                i_15 = i_8
                            label_107c2a8:
                                i_19 = i_20
                            label_107c2ac:
                                
                                if (i_19 s< i_15)
                                    continue
                                else
                                label_107c2b4:
                                    x0_8 = x12_2
                                    i_8 = i_14
                                    i_16 = i_15
                            
                            i_2 = i_5
                            goto label_107c0dc
                        
                        break
                    
                    i_8 = 0
                    i_16 = i_15
                    x0_8 = x12_2
                label_107c0dc:
                    x12_2 = x0_8
                    i_15 = i_16
                    
                    if (i_16 s<= i_19)
                    label_107c2f4:
                        
                        if (i_2 == -1)
                            break
                        
                    label_107c2fc:
                        int64_t x0_20 = *arg1
                        int64_t x25_2 = x8_7
                        
                        if (x0_20 == 0)
                            i_8 = -0x81
                        else
                            if (arg1[2] == i_2)
                                goto label_107c34c
                            
                            int64_t x8_28 = arg1[0x73]
                            int32_t x0_21
                            
                            if (x8_28 != 0)
                                x0_21 = x8_28(x0_20, i_2, 0)
                            
                            if (x8_28 != 0 && x0_21 != 0xffffffff)
                                arg1[2] = i_2
                                ogg_sync_reset(&arg1[4])
                            label_107c34c:
                                arg1[0xf] = -1
                                int128_t var_b0
                                int64_t i_12 = sub_107bd58(arg1, &var_b0, -1)
                                i_8 = i_12
                                
                                if ((i_12 & 0xffffffff80000000) != 0)
                                    goto label_107c660
                                
                                int64_t x1_9
                                void* x22_3
                                
                                if (arg1[0x12].d != x22_1.d)
                                    vorbis_dsp_clear(&arg1[0x48])
                                    vorbis_block_clear(&arg1[0x5a])
                                    arg1[0x12].d = x22_1.d
                                    x22_3 = &arg1[0x11]
                                    x1_9 = *(arg1[0xb] + (x25_2 << 3))
                                    arg1[0x10].d = 3
                                    arg1[0x11] = x1_9
                                else
                                    vorbis_synthesis_restart(&arg1[0x48])
                                    x22_3 = &arg1[0x11]
                                    x1_9 = *x22_3
                                
                                ogg_stream_reset_serialno(&arg1[0x15], x1_9)
                                ogg_stream_pagein(&arg1[0x15], &var_b0)
                                int64_t var_c0
                                
                                while (true)
                                    void var_e0
                                    int32_t i_13 = ogg_stream_packetpeek(&arg1[0x15], &var_e0)
                                    int64_t i_7
                                    
                                    if (i_13 == 0)
                                        i_7 = i_2
                                        
                                        if (i_2 s<= *(arg1[0xa] + (x25_2 << 3)))
                                            goto label_107c618
                                        
                                        int64_t i = i_2
                                        int64_t i_6 = i_2
                                        
                                        do
                                            int64_t i_4 = i
                                            int64_t i_3 = i
                                            
                                            do
                                                int64_t x0_38 = *arg1
                                                
                                                if (x0_38 == 0)
                                                    goto label_107c450
                                                
                                                i_3 = (i_3 - 0x10000)
                                                    & not.q((i_3 - 0x10000) s>> 0x3f)
                                                
                                                if (arg1[2] != i_3)
                                                    int64_t x8_41 = arg1[0x73]
                                                    
                                                    if (x8_41 == 0)
                                                        goto label_107c654
                                                    
                                                    if (x8_41(x0_38, i_3, 0) == 0xffffffff)
                                                        goto label_107c654
                                                    
                                                    arg1[2] = i_3
                                                    ogg_sync_reset(&arg1[4])
                                                
                                                int64_t i_1 = -1
                                                
                                                do
                                                    int64_t x8_42 = arg1[2]
                                                    i = i_1
                                                    
                                                    if (i_4 s<= x8_42)
                                                        break
                                                    
                                                    __builtin_memset(&var_b0, 0, 0x20)
                                                    i_1 = sub_107bd58(arg1, &var_b0, i_4 - x8_42)
                                                    
                                                    if (i_1 == -0x80)
                                                        goto label_107c654
                                                while ((i_1 & 0xffffffff80000000) == 0)
                                            while (i == -1)
                                            
                                            if (var_b0:8.q == 0)
                                                int64_t x0_42 = *arg1
                                                
                                                if (x0_42 == 0)
                                                    goto label_107c450
                                                
                                                if (arg1[2] != i)
                                                    int64_t x8_45 = arg1[0x73]
                                                    
                                                    if (x8_45 == 0)
                                                        goto label_107c654
                                                    
                                                    if (x8_45(x0_42, i, 0) == 0xffffffff)
                                                        goto label_107c654
                                                    
                                                    arg1[2] = i
                                                    ogg_sync_reset(&arg1[4])
                                                
                                                if ((sub_107bd58(arg1, &var_b0, 0x10000)
                                                        & 0xffffffff80000000) != 0)
                                                    goto label_107c450
                                            
                                            int32_t x0_48 = ogg_page_serialno(&var_b0)
                                            
                                            if (*x22_3 == sx.q(x0_48))
                                                int64_t x0_50 = ogg_page_granulepos(&var_b0)
                                                int32_t x0_52
                                                
                                                if ((x0_50 & 0xffffffff80000000) != 0)
                                                    x0_52 = ogg_page_continued(&var_b0)
                                                
                                                if ((x0_50 & 0xffffffff80000000) == 0 || x0_52 == 0)
                                                    i_8 = zx.q(ov_raw_seek(arg1, i))
                                                    goto label_107c680
                                            
                                            i_2 = i_6
                                        while (i s> *(arg1[0xa] + (x8_7 << 3)))
                                    else
                                        i_7 = sx.q(i_13)
                                    label_107c618:
                                        
                                        if ((i_7 & 0xffffffff80000000) != 0)
                                            i_8 = -0x88
                                            goto label_107c660
                                    
                                    if (var_c0 != -1)
                                        break
                                    
                                    ogg_stream_packetout(&arg1[0x15], 0)
                                    x25_2 = x8_7
                                
                                int64_t x8_50 = var_c0 - arg1[0xc][sx.q(arg1[0x12].d) * 2]
                                int64_t x8_52 = (x8_50 & not.q(x8_50 s>> 0x3f)) + x21
                                arg1[0xf] = x8_52
                                
                                if (x8_52 s<= arg2)
                                    goto label_107c444
                                
                                goto label_107c450
                            
                            i_8 = -0x80
                        
                        arg1[0xf] = -1
                        goto label_107c660
            
            if (x28_1 == 0 || i_19 != *(arg1[0xa] + (x8_7 << 3)))
                goto label_107c660
            
            int32_t x0_26 = ogg_page_serialno(&var_90)
            
            if (*(arg1[0xb] + (x8_7 << 3)) != sx.q(x0_26))
                goto label_107c660
            
            int32_t x8_34 = arg1[0x12].d
            arg1[0xf] = x21
            int64_t x1_10
            
            if (x8_34 != x22_1.d)
                vorbis_dsp_clear(&arg1[0x48])
                vorbis_block_clear(&arg1[0x5a])
                arg1[0x12].d = x22_1.d
                x1_10 = *(arg1[0xb] + (x8_7 << 3))
                arg1[0x10].d = 3
                arg1[0x11] = x1_10
            else
                vorbis_synthesis_restart(&arg1[0x48])
                x1_10 = arg1[0x11]
            
            ogg_stream_reset_serialno(&arg1[0x15], x1_10)
            ogg_stream_pagein(&arg1[0x15], &var_90)
            
            if (arg1[0xf] s> arg2)
                goto label_107c450
            
        label_107c444:
            
            if (ov_pcm_total(arg1, 0xffffffff) s< arg2)
                goto label_107c450
            
            i_8 = 0
            arg1[0x13] = 0
            arg1[0x14] = 0
        else
            int64_t x0_1 = *arg1
            
            if (x0_1 != 0)
                if (arg1[2] != i_15)
                    int64_t x8_6 = arg1[0x73]
                    int32_t x0_2
                    
                    if (x8_6 != 0)
                        x0_2 = x8_6(x0_1, i_15, 0)
                    
                    if (x8_6 == 0 || x0_2 == 0xffffffff)
                    label_107c654:
                        i_8 = -0x80
                        goto label_107c660
                    
                    arg1[2] = i_15
                    ogg_sync_reset(&arg1[4])
                
                x28_1 = 1
                int64_t i_9 = sub_107bd58(arg1, &var_90, 1)
                i_8 = i_9
                
                if ((i_9 & 0xffffffff80000000) == 0)
                    goto label_107bfec
                
                goto label_107c660
            
        label_107c450:
            i_8 = -0x81
        label_107c660:
            arg1[0xf] = -1
            vorbis_dsp_clear(&arg1[0x48])
            vorbis_block_clear(&arg1[0x5a])
            arg1[0x10].d = 2

label_107c680:

if (*(x27 + 0x28) == x8)
    return zx.q(i_8.d)

__stack_chk_fail()
noreturn
