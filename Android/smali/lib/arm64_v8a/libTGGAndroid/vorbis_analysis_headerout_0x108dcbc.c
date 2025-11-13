// 函数: vorbis_analysis_headerout
// 地址: 0x108dcbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
void* x27 = *(arg1 + 0x88)
void* x20 = *(arg1 + 8)

if (x27 == 0)
    goto label_108dd18

int32_t x23_1
void var_90

if (*(x20 + 4) - 1 u<= 0xff)
    oggpack_writeinit(&var_90)
    int64_t* x24_1 = *(x20 + 0x30)
    
    if (x24_1 == 0)
    label_108e274:
        x23_1 = -0x82
        goto label_108e280
    
    int64_t x8_3 = *x24_1
    
    if (x8_3 s< 0x40 || x24_1[1] s< x8_3)
        goto label_108e274
    
    oggpack_write(&var_90, 1, 8)
    oggpack_write(&var_90, 0x76, 8)
    oggpack_write(&var_90, 0x6f, 8)
    oggpack_write(&var_90, 0x72, 8)
    oggpack_write(&var_90, 0x62, 8)
    oggpack_write(&var_90, 0x69, 8)
    oggpack_write(&var_90, 0x73, 8)
    oggpack_write(&var_90, 0, 0x20)
    oggpack_write(&var_90, sx.q(*(x20 + 4)), 8)
    oggpack_write(&var_90, *(x20 + 8), 0x20)
    oggpack_write(&var_90, *(x20 + 0x10), 0x20)
    oggpack_write(&var_90, *(x20 + 0x18), 0x20)
    oggpack_write(&var_90, *(x20 + 0x20), 0x20)
    oggpack_write(&var_90, sx.q(ov_ilog(zx.q(*x24_1 - 1))), 4)
    oggpack_write(&var_90, sx.q(ov_ilog(zx.q(x24_1[1].d - 1))), 4)
    oggpack_write(&var_90, 1, 1)
    int64_t x0_21 = *(x27 + 0x78)
    
    if (x0_21 != 0)
        free(x0_21)
    
    int64_t x0_24 = malloc(oggpack_bytes(&var_90))
    *(x27 + 0x78) = x0_24
    int64_t var_80
    memcpy(x0_24, var_80, oggpack_bytes(&var_90))
    *arg3 = *(x27 + 0x78)
    arg3[1] = oggpack_bytes(&var_90)
    arg3[2] = 1
    __builtin_memset(&arg3[3], 0, 0x18)
    oggpack_reset(&var_90)
    sub_108db48(&var_90, arg2)
    int64_t x0_32 = *(x27 + 0x80)
    
    if (x0_32 != 0)
        free(x0_32)
    
    int64_t x0_35 = malloc(oggpack_bytes(&var_90))
    *(x27 + 0x80) = x0_35
    memcpy(x0_35, var_80, oggpack_bytes(&var_90))
    *arg4 = *(x27 + 0x80)
    arg4[1] = oggpack_bytes(&var_90)
    __builtin_memset(&arg4[2], 0, 0x18)
    arg4[5] = 1
    oggpack_reset(&var_90)
    void* x23_3 = *(x20 + 0x30)
    
    if (x23_3 == 0)
        goto label_108e274
    
    oggpack_write(&var_90, 5, 8)
    oggpack_write(&var_90, 0x76, 8)
    oggpack_write(&var_90, 0x6f, 8)
    oggpack_write(&var_90, 0x72, 8)
    oggpack_write(&var_90, 0x62, 8)
    oggpack_write(&var_90, 0x69, 8)
    oggpack_write(&var_90, 0x73, 8)
    oggpack_write(&var_90, sx.q(*(x23_3 + 0x20)) - 1, 8)
    
    if (*(x23_3 + 0x20) s>= 1)
        int64_t i = 0
        
        do
            if (vorbis_staticbook_pack(*(x23_3 + 0xb28 + (i << 3)), &var_90) != 0)
                goto label_108e274
            
            i += 1
        while (i s< sx.q(*(x23_3 + 0x20)))
    
    oggpack_write(&var_90, 0, 6)
    oggpack_write(&var_90, 0, 0x10)
    oggpack_write(&var_90, sx.q(*(x23_3 + 0x18)) - 1, 6)
    
    if (*(x23_3 + 0x18) s>= 1)
        int64_t i_1 = 0
        
        do
            int64_t x28_1 = i_1 << 2
            oggpack_write(&var_90, sx.q(*(x23_3 + 0x528 + x28_1)), 0x10)
            int64_t x8_15 = **(_floor_P + (sx.q(*(x23_3 + 0x528 + x28_1)) << 3))
            
            if (x8_15 == 0)
                goto label_108e274
            
            x8_15(*(x23_3 + 0x528 + (i_1 << 3) + 0x100), &var_90)
            i_1 += 1
        while (i_1 s< sx.q(*(x23_3 + 0x18)))
    
    oggpack_write(&var_90, sx.q(*(x23_3 + 0x1c)) - 1, 6)
    
    if (*(x23_3 + 0x1c) s>= 1)
        int64_t i_2 = 0
        
        do
            int64_t x25_4 = i_2 << 2
            oggpack_write(&var_90, sx.q(*(x23_3 + 0x828 + x25_4)), 0x10)
            (**(_residue_P + (sx.q(*(x23_3 + 0x828 + x25_4)) << 3)))(
                *(x23_3 + 0x828 + (i_2 << 3) + 0x100), &var_90)
            i_2 += 1
        while (i_2 s< sx.q(*(x23_3 + 0x1c)))
    
    oggpack_write(&var_90, sx.q(*(x23_3 + 0x14)) - 1, 6)
    
    if (*(x23_3 + 0x14) s>= 1)
        int64_t i_3 = 0
        
        do
            int64_t x25_5 = i_3 << 2
            oggpack_write(&var_90, sx.q(*(x23_3 + 0x228 + x25_5)), 0x10)
            (*_mapping_P[sx.q(*(x23_3 + 0x228 + x25_5))])(x20, 
                *(x23_3 + 0x228 + (i_3 << 3) + 0x100), &var_90)
            i_3 += 1
        while (i_3 s< sx.q(*(x23_3 + 0x14)))
    
    oggpack_write(&var_90, sx.q(*(x23_3 + 0x10)) - 1, 6)
    
    if (*(x23_3 + 0x10) s>= 1)
        int64_t i_4 = 0
        
        do
            int64_t x22_3 = i_4 << 3
            oggpack_write(&var_90, sx.q(**(x23_3 + 0x28 + x22_3)), 1)
            oggpack_write(&var_90, sx.q(*(*(x23_3 + 0x28 + x22_3) + 4)), 0x10)
            oggpack_write(&var_90, sx.q(*(*(x23_3 + 0x28 + x22_3) + 8)), 0x10)
            oggpack_write(&var_90, sx.q(*(*(x23_3 + 0x28 + x22_3) + 0xc)), 8)
            i_4 += 1
        while (i_4 s< sx.q(*(x23_3 + 0x10)))
    
    oggpack_write(&var_90, 1, 1)
    int64_t x0_69 = *(x27 + 0x88)
    
    if (x0_69 != 0)
        free(x0_69)
    
    int64_t x0_72 = malloc(oggpack_bytes(&var_90))
    *(x27 + 0x88) = x0_72
    memcpy(x0_72, var_80, oggpack_bytes(&var_90))
    *arg5 = *(x27 + 0x88)
    arg5[1] = oggpack_bytes(&var_90)
    __builtin_memset(&arg5[2], 0, 0x18)
    arg5[5] = 2
    oggpack_writeclear(&var_90)
    x23_1 = 0
else
    x27 = nullptr
label_108dd18:
    x23_1 = -0x81
label_108e280:
    __builtin_memset(arg3, 0, 0x30)
    __builtin_memset(arg4, 0, 0x30)
    __builtin_memset(arg5, 0, 0x30)
    
    if (x27 != 0)
        if (*(x20 + 4) s>= 1)
            oggpack_writeclear(&var_90)
        
        int64_t x0_80 = *(x27 + 0x78)
        
        if (x0_80 != 0)
            free(x0_80)
        
        int64_t x0_81 = *(x27 + 0x80)
        
        if (x0_81 != 0)
            free(x0_81)
        
        int64_t x0_82 = *(x27 + 0x88)
        
        if (x0_82 != 0)
            free(x0_82)
        
        __builtin_memset(x27 + 0x78, 0, 0x18)

if (*(x26 + 0x28) == x8)
    return zx.q(x23_1)

__stack_chk_fail()
noreturn
