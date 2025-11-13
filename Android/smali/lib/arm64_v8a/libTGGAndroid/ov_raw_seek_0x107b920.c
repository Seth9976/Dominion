// 函数: ov_raw_seek
// 地址: 0x107b920
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int32_t x8_1 = arg1[0x10].d
int64_t result

if (x8_1 s< 2)
    result = 0xffffff7d
else if (arg1[1].d == 0)
    result = 0xffffff76
else if ((arg2 & 0xffffffff80000000) != 0 || arg1[3] s< arg2)
    result = 0xffffff7d
else
    if (x8_1 s>= 3)
        int64_t x8_2 = arg1[9]
        int64_t x9_3 = sx.q(arg1[0x12].d)
        
        if (*(x8_2 + (x9_3 << 3)) s> arg2 || *(x8_2 + (x9_3 << 3) + 8) s<= arg2)
            vorbis_dsp_clear(&arg1[0x48])
            vorbis_block_clear(&arg1[0x5a])
            arg1[0x10].d = 2
    
    uint64_t x1 = zx.q(arg1[0x11].d)
    arg1[0xf] = -1
    ogg_stream_reset_serialno(&arg1[0x15], x1)
    vorbis_synthesis_restart(&arg1[0x48])
    int64_t x0_4 = *arg1
    void var_208
    
    if (x0_4 == 0)
    label_107ba5c:
        arg1[0xf] = -1
        ogg_stream_clear(&var_208)
        vorbis_dsp_clear(&arg1[0x48])
        vorbis_block_clear(&arg1[0x5a])
        result = 0xffffff77
        arg1[0x10].d = 2
    else
        if (arg1[2] != arg2)
            int64_t x8_6 = arg1[0x73]
            
            if (x8_6 == 0)
                goto label_107ba5c
            
            if (x8_6(x0_4, arg2, 0) == 0xffffffff)
                goto label_107ba5c
            
            arg1[2] = arg2
            ogg_sync_reset(&arg1[4])
        
        ogg_stream_init(&var_208, zx.q(arg1[0x11].d))
        ogg_stream_reset(&var_208)
        int32_t x27_1 = 0
        int32_t var_264_1 = 0
        int64_t var_260_1 = 0
        int64_t x0_35
        
        while (true)
            void var_258
            
            if (arg1[0x10].d s>= 3 && ogg_stream_packetout(&var_208, &var_258) s>= 1)
                int64_t x8_8 = arg1[0xd]
                int64_t x9_4 = sx.q(arg1[0x12].d)
                
                if (*(x8_8 + x9_4 * 0x38 + 0x30) != 0)
                    int32_t x24_2 = vorbis_packet_blocksize(x8_8 + x9_4 * 0x38, &var_258)
                    
                    if ((x24_2 & 0x80000000) != 0)
                        ogg_stream_packetout(&arg1[0x15], 0)
                        x24_2 = 0
                    else if (var_260_1:4.d != 0 && var_260_1.d == 0)
                        ogg_stream_packetout(&arg1[0x15], 0)
                    else if (x27_1 != 0)
                        var_264_1 += (x27_1 + x24_2) s>> 2
                    
                    x27_1 = x24_2
                    int64_t var_238
                    
                    if (var_238 == -1)
                        continue
                    
                    int64_t x10_5 = sx.q(arg1[0x12].d)
                    int64_t* x9_8 = arg1[0xc]
                    int64_t x8_19 = var_238 - x9_8[x10_5 * 2]
                    int64_t x8_20 = x8_19 & not.q(x8_19 s>> 0x3f)
                    int32_t x12_1
                    
                    if (x10_5.d s< 1)
                        x12_1 = var_264_1
                    else
                        int64_t x10_6 = x10_5 & 0xffffffff
                        int64_t i_6
                        
                        if (x10_6.d != 1)
                            i_6 = x10_6 & 0xfffffffe
                            int64_t x12_2 = 0
                            void* x13_1 = &x9_8[3]
                            int64_t i_5 = i_6
                            int64_t i
                            
                            do
                                int64_t x15_1 = *(x13_1 - 0x10)
                                int64_t x16_1 = *x13_1
                                x13_1 += 0x20
                                i = i_5
                                i_5 -= 2
                                x8_20 += x15_1
                                x12_2 += x16_1
                            while (i != 2)
                            x8_20 += x12_2
                            x12_1 = var_264_1
                            
                            if (i_6 != x10_6)
                                goto label_107bd30
                        else
                            x12_1 = var_264_1
                            i_6 = 0
                        label_107bd30:
                            void* x9_11 = &x9_8[i_6 * 2 + 1]
                            int64_t i_4 = x10_6 - i_6
                            int64_t i_1
                            
                            do
                                int64_t x11_3 = *x9_11
                                x9_11 += 0x10
                                i_1 = i_4
                                i_4 -= 1
                                x8_20 += x11_3
                            while (i_1 != 1)
                    
                    int64_t x8_22 = x8_20 - sx.q(x12_1)
                    x0_35 = x8_22 & not.q(x8_22 s>> 0x3f)
                    break
                else
                    ogg_stream_packetout(&arg1[0x15], 0)
            
            if (x27_1 != 0)
                x0_35 = -1
                break
            
            void var_228
            int64_t x0_20 = sub_107bd58(arg1, &var_228, -1)
            
            if ((x0_20 & 0xffffffff80000000) != 0)
                x0_35 = ov_pcm_total(arg1, 0xffffffff)
                break
            
            if (arg1[0x10].d s>= 3 && arg1[0x11] != sx.q(ogg_page_serialno(&var_228))
                    && ogg_page_bos(&var_228) != 0)
                vorbis_dsp_clear(&arg1[0x48])
                vorbis_block_clear(&arg1[0x5a])
                arg1[0x10].d = 2
                ogg_stream_clear(&var_208)
            
            if (arg1[0x10].d s< 3 || arg1[0x10].d s<= 2)
                int32_t i_3 = ogg_page_serialno(&var_228)
                int64_t x8_11 = sx.q(arg1[8].d)
                int64_t i_2 = sx.q(i_3)
                int64_t x23_2
                
                if (x8_11.d s< 1)
                    x23_2 = 0
                    
                    if (0 == x8_11.d)
                        continue
                else
                    x23_2 = 0
                    
                    while (*(arg1[0xb] + (x23_2 << 3)) != i_2)
                        x23_2 += 1
                        
                        if (x23_2 s>= x8_11)
                            break
                    
                    if (x23_2.d == x8_11.d)
                        continue
                
                arg1[0x12].d = x23_2.d
                arg1[0x11] = i_2
                ogg_stream_reset_serialno(&arg1[0x15], zx.q(i_2.d))
                ogg_stream_reset_serialno(&var_208, zx.q(i_2.d))
                arg1[0x10].d = 3
                var_260_1.d = x0_20 s<= *(arg1[0xa] + (zx.q(x23_2.d) << 3)) ? 1 : 0
            
            ogg_stream_pagein(&arg1[0x15], &var_228)
            ogg_stream_pagein(&var_208, &var_228)
            var_260_1:4.d = ogg_page_eos(&var_228)
        
        arg1[0xf] = x0_35
        ogg_stream_clear(&var_208)
        result = 0
        arg1[0x13] = 0
        arg1[0x14] = 0

if (*(x26 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
