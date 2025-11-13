// 函数: vorbis_analysis_wrote
// 地址: 0x107fb74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
void* x23 = *(arg1 + 8)
void* x22 = *(x23 + 0x30)
int64_t result

if (arg2 s<= 0)
    if (*(arg1 + 0x2c) == 0)
        sub_107fd2c(arg1)
    
    vorbis_analysis_buffer(arg1, zx.q(*(x22 + 8) * 3))
    int32_t i = *(arg1 + 0x24)
    *(arg1 + 0x30) = i
    *(arg1 + 0x24) = *(x22 + 8) * 3 + i
    
    if (*(x23 + 4) s>= 1)
        int64_t x24_1 = 0
        
        for (; i s>= 0x41; i = *(arg1 + 0x30))
            int64_t i_3 = *(x22 + 8)
            int64_t i_1 = sx.q(i)
            int64_t i_2
            
            i_2 = i_3 s< i_1 ? i_3 : i_1
            
            void var_e0
            vorbis_lpc_from_data((*(arg1 + 0x10))[x24_1] + (sx.q(i) << 2) - (i_2 << 2), &var_e0, 
                i_2, 0x20)
            int64_t x9_7 = sx.q(*(arg1 + 0x30))
            int64_t x3_1 = (*(arg1 + 0x10))[x24_1] + (x9_7 << 2)
            vorbis_lpc_predict(&var_e0, x3_1 - 0x80, 0x20, x3_1, sx.q(*(arg1 + 0x24)) - x9_7)
        label_107fcb4:
            x24_1 += 1
            
            if (x24_1 s>= sx.q(*(x23 + 4)))
                goto label_107fcc0_1
        
        memset(*(*(arg1 + 0x10) + (x24_1 << 3)) + (sx.q(i) << 2), 0, 
            zx.q(*(arg1 + 0x24) - i) << 0x20 s>> 0x1e)
        goto label_107fcb4
    
label_107fcc0:
    result = 0
else
    int64_t x8_3 = sx.q(*(arg1 + 0x24)) + sx.q(arg2)
    
    if (x8_3.d s<= *(arg1 + 0x20))
        int32_t x9_10 = *(arg1 + 0x2c)
        result = 0
        *(arg1 + 0x24) = x8_3.d
        
        if (x9_10 == 0)
            result = 0
            
            if (x8_3 - *(arg1 + 0x50) s> *(x22 + 8))
                sub_107fd2c(arg1)
            label_107fcc0_1:
                result = 0
    else
        result = 0xffffff7d

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
