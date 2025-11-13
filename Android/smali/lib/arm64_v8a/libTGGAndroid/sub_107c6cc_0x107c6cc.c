// 函数: sub_107c6cc
// 地址: 0x107c6cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int32_t result

while (true)
    int32_t x8_3 = arg1[0x10].d
    
    if (x8_3 != 4)
        if (x8_3 != 3)
        label_107c7c8:
            void var_88
            
            if (x8_3 s< 2)
            label_107c874:
                
                if (arg1[1].d == 0)
                    result = sub_107e3e8(arg1, arg1[0xd], arg1[0xe], nullptr, nullptr, &var_88)
                    
                    if (result != 0)
                        break
                    
                    int32_t x9_4 = arg1[0x12].d
                    arg1[0x11] = arg1[0x44]
                    arg1[0x12].d = x9_4 + 1
                else
                label_107c87c:
                    int32_t i_4 = ogg_page_serialno(&var_88)
                    int64_t x8_7 = sx.q(arg1[8].d)
                    int64_t i = sx.q(i_4)
                    int64_t x9_3
                    
                    if (x8_7.d s< 1)
                        x9_3 = 0
                        
                        if (0 == x8_7.d)
                            continue
                    else
                        x9_3 = 0
                        
                        while (*(arg1[0xb] + (x9_3 << 3)) != i)
                            x9_3 += 1
                            
                            if (x9_3 s>= x8_7)
                                break
                        
                        if (x9_3.d == x8_7.d)
                            continue
                    
                    arg1[0x11] = i
                    arg1[0x12].d = x9_3.d
                    ogg_stream_reset_serialno(&arg1[0x15])
                    arg1[0x10].d = 3
            else
                int32_t x8_4
                int32_t i_1
                
                do
                    if ((sub_107bd58(arg1, &var_88, -1) & 0xffffffff80000000) != 0)
                        goto label_107c9b0
                    
                    x8_4 = arg1[0x10].d
                    int64_t var_80
                    arg1[0x13] = arg1[0x13] f+ float.d(var_80 << 3)
                    
                    if (x8_4 != 4)
                        goto label_107c868
                    
                    if (arg1[0x11] == sx.q(ogg_page_serialno(&var_88)))
                        goto label_107c85c
                    
                    i_1 = ogg_page_bos(&var_88)
                while (i_1 == 0)
                
                if (arg2 == 0)
                label_107c9b0:
                    result = -2
                    break
                
                vorbis_dsp_clear(&arg1[0x48])
                vorbis_block_clear(&arg1[0x5a])
                arg1[0x10].d = 2
                
                if (arg1[1].d != 0)
                    goto label_107c87c
                
                vorbis_info_clear(arg1[0xd])
                vorbis_comment_clear(arg1[0xe])
            label_107c85c:
                x8_4 = arg1[0x10].d
                
                if (x8_4 != 4)
                label_107c868:
                    
                    if (x8_4 s<= 2)
                        goto label_107c874
            
            ogg_stream_pagein(&arg1[0x15], &var_88)
            continue
        else
            int64_t x1_1 = arg1[0xd]
            
            if (arg1[1].d != 0)
                x1_1 += sx.q(arg1[0x12].d) * 0x38
            
            if (vorbis_synthesis_init(&arg1[0x48], x1_1) != 0)
                result = -0x89
                break
            
            vorbis_block_init(&arg1[0x48], &arg1[0x5a])
            arg1[0x10].d = 4
            arg1[0x13] = 0
            arg1[0x14] = 0
    
    int32_t x0_5 = vorbis_synthesis_halfrate_p(arg1[0xd])
    void var_b8
    int32_t x0_7 = ogg_stream_packetout(&arg1[0x15], &var_b8)
    
    if (x0_7 == 0xffffffff)
    label_107c918:
        result = -3
    else
        while (true)
            if (x0_7 s< 1)
                x8_3 = arg1[0x10].d
                goto label_107c7c8
            
            int64_t var_98
            int64_t x28_1 = var_98
            
            if (vorbis_synthesis(&arg1[0x5a], &var_b8) == 0)
                if (vorbis_synthesis_pcmout(&arg1[0x48], 0) == 0)
                    vorbis_synthesis_blockin(&arg1[0x48], &arg1[0x5a])
                    int32_t x0_27
                    float128 v0_2
                    float128 v2_1
                    x0_27, v0_2, v2_1 = vorbis_synthesis_pcmout(&arg1[0x48], 0)
                    int64_t var_b0
                    v2_1.q = float.d(var_b0 << 3)
                    v2_1:8.q = float.d(sx.q(x0_27 << x0_5))
                    *(arg1 + 0x98) = vaddq_f64(*(arg1 + 0x98), v2_1)
                    int64_t var_a0
                    
                    if (x28_1 != -1 && var_a0 == 0)
                        int32_t x21_1
                        
                        if (arg1[1].d == 0)
                            x21_1 = 0
                        else
                            x21_1 = arg1[0x12].d
                            
                            if (x21_1 s>= 1)
                                x28_1 -= arg1[0xc][sx.q(x21_1) * 2]
                        
                        int64_t x8_17 = (x28_1 & not.q(x28_1 s>> 0x3f))
                            - sx.q(vorbis_synthesis_pcmout(&arg1[0x48], 0) << x0_5)
                        
                        if (x21_1 s>= 1)
                            void* x9_8 = arg1[0xc]
                            uint64_t x10_2 = zx.q(x21_1)
                            int64_t i_7
                            
                            if (x21_1 != 1)
                                i_7 = x10_2 & 0xfffffffe
                                int64_t x12_1 = 0
                                int64_t* x13_1 = x9_8 + 0x18
                                int64_t i_6 = i_7
                                int64_t i_2
                                
                                do
                                    int64_t x15_1 = x13_1[-2]
                                    int64_t x16_1 = *x13_1
                                    x13_1 = &x13_1[4]
                                    i_2 = i_6
                                    i_6 -= 2
                                    x8_17 += x15_1
                                    x12_1 += x16_1
                                while (i_2 != 2)
                                x8_17 += x12_1
                                
                                if (i_7 != x10_2)
                                    goto label_107ca34
                            else
                                i_7 = 0
                            label_107ca34:
                                int64_t* x9_10 = x9_8 + (i_7 << 4) + 8
                                int64_t i_5 = x10_2 - i_7
                                int64_t i_3
                                
                                do
                                    int64_t x11_2 = *x9_10
                                    x9_10 = &x9_10[2]
                                    i_3 = i_5
                                    i_5 -= 1
                                    x8_17 += x11_2
                                while (i_3 != 1)
                        
                        arg1[0xf] = x8_17
                    
                    result = 1
                else
                    result = -0x81
                
                break
            
            x0_7 = ogg_stream_packetout(&arg1[0x15], &var_b8)
            
            if (x0_7 == 0xffffffff)
                goto label_107c918
    
    break

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
