// 函数: ov_read_filter
// 地址: 0x107ceb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
int32_t x8_1 = arg1[0x10].d
char* x21 = arg2
int64_t result

if (x8_1 s>= 2)
    if (x8_1 != 4)
        goto label_107cf54
    
    while (true)
        int64_t var_70
        int32_t result_1
        double v2_1
        result_1, v2_1 = vorbis_synthesis_pcmout(&arg1[0x48], &var_70)
        
        if (result_1 != 0)
            result = sx.q(result_1)
            
            if (result_1 s< 1)
                break
            
            void* x8_5
            
            if (arg1[1].d == 0)
                x8_5 = arg1[0xd]
            else
                x8_5 = arg1[0xd]
                
                if (arg1[0x10].d s>= 3)
                    x8_5 += sx.q(arg1[0x12].d) * 0x38
            
            int64_t x24_1 = sx.q(*(x8_5 + 4))
            int64_t x9_5 = x24_1 * sx.q(arg5)
            int64_t result_4 = sx.q(arg3) s/ x9_5
            int64_t result_3
            
            result_3 = result_4 s< result ? result_4 : result
            
            if (result_3 s< 1)
                goto label_107cf10
            
            if (arg8 != 0)
                arg8(var_70, x24_1, result_3, arg9)
            
            int64_t x25_1
            
            if (arg5 != 1)
                int32_t x8_9
                
                x8_9 = arg6 != 0 ? 0 : 0x8000
                
                if (arg4 != 0)
                    x25_1 = x9_5
                    int64_t x9_7 = 0
                    
                    do
                        if (x24_1.d s>= 1)
                            int64_t x13_2 = 0
                            char* x14_7 = x21
                            
                            do
                                int64_t x15_2 = *(var_70 + (x13_2 << 3))
                                x13_2 += 1
                                v2_1.d = *(x15_2 + (x9_7 << 2))
                                v2_1.d = v2_1.d f* 32768f
                                uint32_t temp0_2 =
                                    vcvtmd_s32_f64(fconvert.d(v2_1.d) + fconvert.d(0.5))
                                uint32_t x15_4
                                
                                x15_4 = temp0_2 s> 0xffff8000 ? temp0_2 : -0x8000
                                
                                uint32_t x15_5
                                
                                x15_5 = x15_4 s< 0x7fff ? x15_4 : 0x7fff
                                
                                int32_t x15_6 = x15_5 + x8_9
                                x14_7[1] = x15_6.b
                                *x14_7 = (x15_6 u>> 8).b
                                x14_7 = &x14_7[2]
                            while (x24_1 != x13_2)
                            
                            x21 = &x21[x24_1 << 1]
                        
                        x9_7 += 1
                    while (result_3 s> x9_7)
                else if (arg6 == 0)
                    x25_1 = x9_5
                    
                    if (x24_1.d s>= 1)
                        int64_t x10_4 = var_70
                        int64_t x9_12 = 0
                        
                        do
                            int64_t x15_8 = *(x10_4 + (x9_12 << 3))
                            int64_t x14_9 = 0
                            char* x16_5 = x21
                            
                            do
                                v2_1.d = *(x15_8 + (x14_9 << 2))
                                x14_9 += 1
                                v2_1.d = v2_1.d f* 32768f
                                uint32_t temp0_4 =
                                    vcvtmd_s32_f64(fconvert.d(v2_1.d) + fconvert.d(0.5))
                                uint32_t x17_2
                                
                                x17_2 = temp0_4 s> 0xffff8000 ? temp0_4 : -0x8000
                                
                                int16_t x17_3
                                
                                x17_3 = x17_2 s< 0x7fff ? x17_2.w : 0x7fff
                                
                                *x16_5 = x17_3 + x8_9.w
                                x16_5 = &x16_5[x24_1 << 1]
                            while (result_3 s> x14_9)
                            
                            x9_12 += 1
                            x21 = &x21[2]
                        while (x9_12 != x24_1)
                else
                    x25_1 = x9_5
                    
                    if (x24_1.d s>= 1)
                        int64_t x9_11 = var_70
                        int64_t x8_13 = 0
                        
                        do
                            int64_t x14_8 = *(x9_11 + (x8_13 << 3))
                            int64_t x13_3 = 0
                            char* x15_7 = x21
                            
                            do
                                v2_1.d = *(x14_8 + (x13_3 << 2))
                                x13_3 += 1
                                v2_1.d = v2_1.d f* 32768f
                                uint32_t temp0_3 =
                                    vcvtmd_s32_f64(fconvert.d(v2_1.d) + fconvert.d(0.5))
                                uint32_t x16_3
                                
                                x16_3 = temp0_3 s> 0xffff8000 ? temp0_3 : -0x8000
                                
                                int16_t x16_4
                                
                                x16_4 = x16_3 s< 0x7fff ? x16_3.w : 0x7fff
                                
                                *x15_7 = x16_4
                                x15_7 = &x15_7[x24_1 << 1]
                            while (result_3 s> x13_3)
                            
                            x8_13 += 1
                            x21 = &x21[2]
                        while (x8_13 != x24_1)
            else
                x25_1 = x9_5
                int64_t x8_8 = 0
                
                do
                    if (x24_1.d s>= 1)
                        int64_t x13_1 = 0
                        
                        do
                            v2_1.d = *(*(var_70 + (x13_1 << 3)) + (x8_8 << 2))
                            v2_1.d = v2_1.d f* 128f
                            uint32_t temp0_1 = vcvtmd_s32_f64(fconvert.d(v2_1.d) + fconvert.d(0.5))
                            uint32_t x14_4
                            
                            x14_4 = temp0_1 s> 0xffffff80 ? temp0_1 : -0x80
                            
                            char x14_5
                            
                            x14_5 = x14_4 s< 0x7f ? x14_4.b : 0x7f
                            
                            x21[x13_1] = x14_5 + ((arg6 == 0 ? 1 : 0) << 7).b
                            x13_1 += 1
                        while (x24_1 != x13_1)
                    
                    x8_8 += 1
                    x21 = &x21[x24_1 & not.q(x24_1 s>> 0x3f)]
                while (result_3 s> x8_8)
            
            vorbis_synthesis_read(&arg1[0x48], zx.q(result_3.d))
            arg1[0xf] += result_3 << zx.q(vorbis_synthesis_halfrate_p(arg1[0xd]))
            
            if (arg7 != 0)
                *arg7 = arg1[0x12].d
            
            result = result_3 * x25_1
            break
        
    label_107cf54:
        int32_t result_2 = sub_107c6cc(arg1, 1)
        
        if (result_2 == 0xfffffffe)
            result = 0
            goto label_107cf7c
        
        if (result_2 s< 1)
            result = sx.q(result_2)
            break
        
        if (arg1[0x10].d != 4)
            goto label_107cf54
else
label_107cf10:
    result = -0x83

label_107cf7c:

if (*(x19 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
