// 函数: ov_pcm_seek
// 地址: 0x107af8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t result = ov_pcm_seek_page()

if ((result & 0x80000000) == 0)
    int32_t x8_1 = arg1[0x10].d
    void* var_c8_1
    void* var_c0_1
    void* x21_1
    void* x22_1
    void* x26_1
    
    if (x8_1 s>= 4)
        var_c0_1 = &arg1[1]
        x26_1 = &arg1[0xd]
        x22_1 = &arg1[0x5a]
        x21_1 = &arg1[0x48]
        var_c8_1 = &arg1[0x13]
    label_107aff0:
        int32_t x28_1 = 0
        
        while (true)
            void var_98
            int32_t x0_2 = ogg_stream_packetpeek(&arg1[0x15], &var_98)
            void var_b8
            
            if (x0_2 s>= 1)
                int32_t x0_4 =
                    vorbis_packet_blocksize(arg1[0xd] + sx.q(arg1[0x12].d) * 0x38, &var_98)
                
                if ((x0_4 & 0x80000000) != 0)
                    ogg_stream_packetout(&arg1[0x15], 0)
                    continue
                else
                    int64_t x28_2
                    
                    if (x28_1 == 0)
                        x28_2 = arg1[0xf]
                    else
                        x28_2 = arg1[0xf] + sx.q((x28_1 + x0_4) s>> 2)
                        arg1[0xf] = x28_2
                    
                    if (x28_2 + sx.q((vorbis_info_blocksize(*x26_1, 1) + x0_4) s>> 2) s< arg2)
                        ogg_stream_packetout(&arg1[0x15], 0)
                        vorbis_synthesis_trackonly(x22_1, &var_98)
                        vorbis_synthesis_blockin(x21_1, x22_1)
                        int64_t var_78
                        
                        if ((var_78 & 0xffffffff80000000) != 0)
                            x28_1 = x0_4
                            continue
                        else
                            int64_t x9_4 = sx.q(arg1[0x12].d)
                            int64_t* x10_1 = arg1[0xc]
                            int64_t x8_10 = var_78 - x10_1[x9_4 * 2]
                            int64_t x8_11 = x8_10 & not.q(x8_10 s>> 0x3f)
                            arg1[0xf] = x8_11
                            
                            if (x9_4.d s< 1)
                                x28_1 = x0_4
                                continue
                            else
                                int64_t i_3 = x9_4 & 0xffffffff
                                void* x10_2 = &x10_1[1]
                                int64_t i
                                
                                do
                                    int64_t x11_3 = *x10_2
                                    x10_2 += 0x10
                                    i = i_3
                                    i_3 -= 1
                                    x8_11 += x11_3
                                    arg1[0xf] = x8_11
                                while (i != 1)
                                x28_1 = x0_4
                                continue
            else if ((x0_2 == 0 || x0_2 == 0xfffffffd)
                    && (sub_107bd58(arg1, &var_b8, -1) & 0xffffffff80000000) == 0)
                if (ogg_page_bos(&var_b8) != 0)
                    vorbis_dsp_clear(x21_1)
                    vorbis_block_clear(x22_1)
                    arg1[0x10].d = 2
                label_107b150:
                    int32_t i_2 = ogg_page_serialno(&var_b8)
                    int64_t x8_13 = sx.q(arg1[8].d)
                    int64_t i_1 = sx.q(i_2)
                    int64_t x9_5
                    
                    if (x8_13.d s< 1)
                        x9_5 = 0
                        
                        if (0 == x8_13.d)
                            continue
                    else
                        x9_5 = 0
                        
                        while (*(arg1[0xb] + (x9_5 << 3)) != i_1)
                            x9_5 += 1
                            
                            if (x9_5 s>= x8_13)
                                break
                        
                        if (x9_5.d == x8_13.d)
                            continue
                    
                    arg1[0x12].d = x9_5.d
                    arg1[0x10].d = 3
                    arg1[0x11] = sx.q(ogg_page_serialno(&var_b8))
                    ogg_stream_reset_serialno(&arg1[0x15], zx.q(i_1.d))
                    int32_t x8_15 = arg1[0x10].d
                    x28_1 = 0
                    
                    if (x8_15 s<= 3)
                        if (x8_15 != 3)
                            goto label_107b33c
                        
                        int64_t x1_6 = *x26_1
                        
                        if (*var_c0_1 == 0)
                            if (vorbis_synthesis_init(x21_1, x1_6) != 0)
                                goto label_107b334_1
                        else if (vorbis_synthesis_init(x21_1, x1_6 + sx.q(arg1[0x12].d) * 0x38)
                                != 0)
                            goto label_107b334_1
                        
                        vorbis_block_init(x21_1, x22_1)
                        arg1[0x10].d = 4
                        x28_1 = 0
                        *var_c8_1 = 0
                        *(var_c8_1 + 8) = 0
                else if (arg1[0x10].d s<= 2)
                    goto label_107b150
                
                ogg_stream_pagein(&arg1[0x15], &var_b8)
                continue
            int64_t x0_26 = arg1[0xd]
            arg1[0x13] = 0
            arg1[0x14] = 0
            int32_t x0_27 = vorbis_synthesis_halfrate_p(x0_26)
            int64_t x8_20 = arg1[0xf]
            uint64_t x23_2 = zx.q(x0_27)
            int64_t x24_2 = arg2 s>> x23_2 << x23_2
            result = 0
            
            if (x8_20 s< x24_2)
                while (true)
                    int64_t x26_2 = (arg2 - x8_20) s>> x23_2
                    int64_t x27_1 = sx.q(vorbis_synthesis_pcmout(x21_1, 0))
                    int64_t x22_2
                    
                    x22_2 = x26_2 s< x27_1 ? x26_2 : x27_1
                    
                    vorbis_synthesis_read(x21_1, zx.q(x22_2.d))
                    x8_20 = (x22_2 << x23_2) + arg1[0xf]
                    arg1[0xf] = x8_20
                    
                    if (x26_2 s> x27_1)
                        if (sub_107c6cc(arg1, 1) s< 1)
                            int64_t x0_34 = ov_pcm_total(arg1, 0xffffffff)
                            x8_20 = x0_34
                            arg1[0xf] = x0_34
                            
                            if (x8_20 s>= x24_2)
                                break
                            
                            continue
                        else
                            x8_20 = arg1[0xf]
                    
                    if (x8_20 s>= x24_2)
                        break
                
                result = 0
            
            break
    else if (x8_1 != 3)
    label_107b33c:
        result = -0x81
    else
        x26_1 = &arg1[0xd]
        int64_t x1_11 = *x26_1
        x21_1 = &arg1[0x48]
        var_c0_1 = &arg1[1]
        
        if (arg1[1].d == 0)
            if (vorbis_synthesis_init(x21_1, x1_11) == 0)
            label_107b37c:
                x22_1 = &arg1[0x5a]
                vorbis_block_init(x21_1, x22_1)
                arg1[0x13] = 0
                arg1[0x10].d = 4
                var_c8_1 = &arg1[0x13]
                arg1[0x14] = 0
                goto label_107aff0
            
        label_107b334:
            result = -0x89
        else
            if (vorbis_synthesis_init(x21_1, x1_11 + sx.q(arg1[0x12].d) * 0x38) == 0)
                goto label_107b37c
            
        label_107b334_1:
            result = -0x89

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
