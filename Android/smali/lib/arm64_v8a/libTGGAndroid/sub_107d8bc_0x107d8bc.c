// 函数: sub_107d8bc
// 地址: 0x107d8bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int32_t x27 = 0
int64_t* var_70

if (arg5 s>= 1)
    while (true)
        int32_t x0_1 = vorbis_synthesis_pcmout(arg3, &var_70)
        
        if (x0_1 == 0)
            if (sub_107c6cc(arg1, 0).d == 0xfffffffe)
                break
            
            if (x27 s>= arg5)
                break
        else
            int32_t x9_1 = arg5 - x27
            int32_t x24_1
            
            x24_1 = x0_1 s> x9_1 ? x9_1 : x0_1
            
            if (*(arg2 + 4) s>= 1)
                int64_t i = 0
                
                do
                    memcpy(arg4[i] + (sx.q(x27) << 2), var_70[i], zx.q(x24_1) << 0x20 s>> 0x1e)
                    i += 1
                while (i s< sx.q(*(arg2 + 4)))
            
            x27 += x24_1
            vorbis_synthesis_read(arg3, zx.q(x24_1))
            
            if (x27 s>= arg5)
                break

if (x27 s< arg5)
    arg1 = vorbis_synthesis_lapout(&arg1[0x48], &var_70)
    
    if (arg1.d == 0)
        if (*(arg2 + 4) s>= 1)
            int64_t x23_2 = sx.q(x27)
            int64_t i_1 = 0
            
            do
                memset(arg4[i_1] + (x23_2 << 2), 0, (zx.q(arg5) << 0x20 s>> 0x1e) - x23_2)
                i_1 += 1
            while (i_1 s< sx.q(*(arg2 + 4)))
    else if (*(arg2 + 4) s>= 1)
        int32_t x8_6 = arg5 - x27
        int32_t x8_7
        
        if (arg1.d s> x8_6)
            x8_7 = x8_6
        else
            x8_7 = arg1.d
        
        int64_t i_2 = 0
        
        do
            memcpy(arg4[i_2] + (sx.q(x27) << 2), var_70[i_2], zx.q(x8_7) << 0x20 s>> 0x1e)
            i_2 += 1
        while (i_2 s< sx.q(*(arg2 + 4)))

if (*(x8 + 0x28) == x8_1)
    return 

__stack_chk_fail()
noreturn
