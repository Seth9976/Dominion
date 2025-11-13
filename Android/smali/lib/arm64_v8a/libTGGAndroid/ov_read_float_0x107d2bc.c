// 函数: ov_read_float
// 地址: 0x107d2bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int32_t x8_1 = arg1[0x10].d
int64_t result

if (x8_1 s>= 2)
    if (x8_1 != 4)
        goto label_107d33c
    
    while (true)
        int64_t var_60
        int32_t result_3 = vorbis_synthesis_pcmout(&arg1[0x48], &var_60)
        
        if (result_3 != 0)
            int32_t x0_3 = vorbis_synthesis_halfrate_p(arg1[0xd])
            
            if (arg2 != 0)
                *arg2 = var_60
            
            int32_t result_2
            
            result_2 = result_3 s> arg3 ? arg3 : result_3
            
            result = sx.q(result_2)
            vorbis_synthesis_read(&arg1[0x48], result_2)
            arg1[0xf] += result << zx.q(x0_3)
            
            if (arg4 != 0)
                *arg4 = arg1[0x12].d
            
            break
        
    label_107d33c:
        int32_t result_1 = sub_107c6cc(arg1, 1)
        
        if (result_1 == 0xfffffffe)
            result = 0
            goto label_107d3b8
        
        if (result_1 s<= 0)
            result = sx.q(result_1)
            break
        
        if (arg1[0x10].d != 4)
            goto label_107d33c
else
    result = -0x83

label_107d3b8:

if (*(x26 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
