// 函数: vorbis_synthesis_headerin
// 地址: 0x108d3e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t result

if (arg3 == 0)
    result = 0xffffff7b
else
    void var_88
    oggpack_readinit(&var_88, *arg3, zx.q(arg3[1].d))
    int32_t x0_2 = oggpack_read(&var_88, 8)
    char var_60 = oggpack_read(&var_88, 8)
    char var_5f_1 = oggpack_read(&var_88, 8)
    char var_5e_1 = oggpack_read(&var_88, 8)
    char var_5d_1 = oggpack_read(&var_88, 8)
    char var_5c_1 = oggpack_read(&var_88, 8)
    char var_5b_1 = oggpack_read(&var_88, 8)
    
    if (memcmp(&var_60, "vorbis", 6) != 0)
        result = 0xffffff7c
    else if (x0_2 == 5)
        if (*(arg1 + 8) == 0 || arg2[3] == 0)
            result = 0xffffff7b
        else
            void* x20_2 = *(arg1 + 0x30)
            
            if (x20_2 == 0)
                result = 0xffffff7f
            else if (*(x20_2 + 0x20) s> 0)
                result = 0xffffff7b
            else
                int32_t x8_6 = oggpack_read(&var_88, 8) + 1
                *(x20_2 + 0x20) = x8_6
                
                if (x8_6 s>= 1)
                    int64_t i = 0
                    
                    do
                        int64_t x0_22 = vorbis_staticbook_unpack(&var_88)
                        *(x20_2 + 0xb28 + (i << 3)) = x0_22
                        
                        if (x0_22 == 0)
                            goto label_108da58
                        
                        i += 1
                    while (i s< sx.q(*(x20_2 + 0x20)))
                    
                    int32_t x21_1 = oggpack_read(&var_88, 6) + 1
                    
                    if (x21_1 s< 1)
                        goto label_108da58
                    
                    int32_t x22_3 = 0
                    
                    do
                        if (oggpack_read(&var_88, 0x10) != 0)
                            goto label_108da58
                        
                        x22_3 += 1
                    while (x22_3 s< x21_1)
                    
                    int32_t x8_8 = oggpack_read(&var_88, 6) + 1
                    *(x20_2 + 0x18) = x8_8
                    
                    if (x8_8 s< 1)
                        goto label_108da58
                    
                    int64_t x21_2 = 0
                    
                    while (true)
                        int32_t x0_30 = oggpack_read(&var_88, 0x10)
                        *(x20_2 + 0x528 + (x21_2 << 2)) = x0_30
                        
                        if (x0_30 u> 1)
                            goto label_108da58
                        
                        int64_t x0_32 =
                            (*(*(_floor_P + (zx.q(x0_30) << 0x20 s>> 0x1d)) + 8))(arg1, &var_88)
                        *(x20_2 + 0x528 + (x21_2 << 3) + 0x100) = x0_32
                        
                        if (x0_32 == 0)
                            goto label_108da58
                        
                        x21_2 += 1
                        
                        if (x21_2 s>= sx.q(*(x20_2 + 0x18)))
                            int32_t x8_14 = oggpack_read(&var_88, 6) + 1
                            *(x20_2 + 0x1c) = x8_14
                            
                            if (x8_14 s< 1)
                                goto label_108da58
                            
                            int64_t x21_3 = 0
                            
                            while (true)
                                int32_t x0_36 = oggpack_read(&var_88, 0x10)
                                *(x20_2 + 0x828 + (x21_3 << 2)) = x0_36
                                
                                if (x0_36 u> 2)
                                    goto label_108da58
                                
                                int64_t x0_38 = (
                                    *(*(_residue_P + (zx.q(x0_36) << 0x20 s>> 0x1d)) + 8))(arg1, 
                                    &var_88)
                                *(x20_2 + 0x828 + (x21_3 << 3) + 0x100) = x0_38
                                
                                if (x0_38 == 0)
                                    goto label_108da58
                                
                                x21_3 += 1
                                
                                if (x21_3 s>= sx.q(*(x20_2 + 0x1c)))
                                    int32_t x8_20 = oggpack_read(&var_88, 6) + 1
                                    *(x20_2 + 0x14) = x8_20
                                    
                                    if (x8_20 s< 1)
                                        goto label_108da58
                                    
                                    int64_t x21_4 = 0
                                    
                                    while (true)
                                        int32_t x0_42 = oggpack_read(&var_88, 0x10)
                                        *(x20_2 + 0x228 + (x21_4 << 2)) = x0_42
                                        
                                        if (x0_42 != 0)
                                            goto label_108da58
                                        
                                        int64_t x0_44 = (
                                            *(*(_mapping_P + (zx.q(x0_42) << 0x20 s>> 0x1d)) + 8))(
                                            arg1, &var_88)
                                        *(x20_2 + 0x228 + (x21_4 << 3) + 0x100) = x0_44
                                        
                                        if (x0_44 == 0)
                                            goto label_108da58
                                        
                                        x21_4 += 1
                                        
                                        if (x21_4 s>= sx.q(*(x20_2 + 0x14)))
                                            int32_t x8_26 = oggpack_read(&var_88, 6) + 1
                                            *(x20_2 + 0x10) = x8_26
                                            
                                            if (x8_26 s< 1)
                                                goto label_108da58
                                            
                                            int64_t i_1 = 0
                                            
                                            do
                                                int64_t x24_1 = i_1 << 3
                                                *(x20_2 + 0x28 + x24_1) = calloc(1, 0x10)
                                                **(x20_2 + 0x28 + x24_1) = oggpack_read(&var_88, 1)
                                                *(*(x20_2 + 0x28 + x24_1) + 4) =
                                                    oggpack_read(&var_88, 0x10)
                                                *(*(x20_2 + 0x28 + x24_1) + 8) =
                                                    oggpack_read(&var_88, 0x10)
                                                int32_t x0_55 = oggpack_read(&var_88, 8)
                                                void* x8_30 = *(x20_2 + 0x28 + x24_1)
                                                int32_t x9_1 = *(x8_30 + 4)
                                                *(x8_30 + 0xc) = x0_55
                                                
                                                if (x9_1 s> 0)
                                                    goto label_108da58
                                                
                                                if (*(x8_30 + 8) s> 0)
                                                    goto label_108da58
                                                
                                                if ((x0_55 & 0x80000000) != 0)
                                                    goto label_108da58
                                                
                                                if (*(x20_2 + 0x14) s<= x0_55)
                                                    goto label_108da58
                                                
                                                i_1 += 1
                                            while (i_1 s< sx.q(*(x20_2 + 0x10)))
                                            
                                            break
                                    
                                    break
                            
                            break
                    
                    goto label_108da48
                
            label_108da58:
                vorbis_info_clear(arg1)
                result = 0xffffff7b
    else if (x0_2 == 3)
        if (*(arg1 + 8) == 0 || arg2[3] != 0)
            result = 0xffffff7b
        else
            int64_t x0_57 = oggpack_read(&var_88, 0x20)
            int64_t var_68
            
            if ((x0_57.d & 0x80000000) != 0 || sx.q(x0_57.d) s> var_68 - 8)
            label_108d960:
                vorbis_comment_clear(arg2)
                result = 0xffffff7b
            else
                char* x0_59 = calloc(((x0_57 << 0x20) + 0x100000000) s>> 0x20, 1)
                char* x19_1 = x0_59
                arg2[3] = x0_59
                
                if (x0_57.d != 0)
                    int32_t i_4 = neg.d(x0_57.d)
                    int32_t i_2
                    
                    do
                        i_2 = i_4
                        i_4 += 1
                        *x19_1 = oggpack_read(&var_88, 8)
                        x19_1 = &x19_1[1]
                    while (i_2 != 0xffffffff)
                
                int64_t x0_63 = oggpack_read(&var_88, 0x20)
                
                if ((x0_63.d & 0x80000000) != 0)
                    goto label_108d960
                
                if (sx.q(x0_63.d) s> (var_68 - oggpack_bytes(&var_88)) s>> 2)
                    goto label_108d960
                
                int64_t x21_7 = ((x0_63 << 0x20) + 0x100000000) s>> 0x20
                arg2[2].d = x0_63.d
                *arg2 = calloc(x21_7, 8)
                arg2[1] = calloc(x21_7, 4)
                
                if (x0_63.d s>= 1)
                    int64_t i_3 = 0
                    
                    do
                        int64_t x0_71 = oggpack_read(&var_88, 0x20)
                        
                        if ((x0_71.d & 0x80000000) != 0)
                            goto label_108d960
                        
                        if (sx.q(x0_71.d) s> var_68 - oggpack_bytes(&var_88))
                            goto label_108d960
                        
                        *(arg2[1] + (i_3 << 2)) = x0_71.d
                        *(*arg2 + (i_3 << 3)) = calloc(((x0_71 << 0x20) + 0x100000000) s>> 0x20, 1)
                        
                        if (x0_71.d != 0)
                            int32_t j_1 = neg.d(x0_71.d)
                            char* x24_3 = *(*arg2 + (i_3 << 3))
                            int32_t j
                            
                            do
                                j = j_1
                                j_1 += 1
                                *x24_3 = oggpack_read(&var_88, 8)
                                x24_3 = &x24_3[1]
                            while (j != 0xffffffff)
                        
                        i_3 += 1
                    while (i_3 s< sx.q(arg2[2].d))
                
                result = 0
                
                if (oggpack_read(&var_88, 1) != 1)
                    goto label_108d960
    else if (x0_2 != 1 || arg3[2] == 0 || *(arg1 + 8) != 0)
        result = 0xffffff7b
    else
        int64_t* x20_1 = *(arg1 + 0x30)
        
        if (x20_1 == 0)
            result = 0xffffff7f
        else
            int32_t x0_18 = oggpack_read(&var_88, 0x20)
            *arg1 = x0_18
            
            if (x0_18 == 0)
                arg1[1] = oggpack_read(&var_88, 8)
                *(arg1 + 8) = oggpack_read(&var_88, 0x20)
                *(arg1 + 0x10) = sx.q(oggpack_read(&var_88, 0x20))
                *(arg1 + 0x18) = sx.q(oggpack_read(&var_88, 0x20))
                *(arg1 + 0x20) = sx.q(oggpack_read(&var_88, 0x20))
                *x20_1 = sx.q(1 << oggpack_read(&var_88, 4))
                int64_t x8_56 = sx.q(1 << oggpack_read(&var_88, 4))
                x20_1[1] = x8_56
                
                if (*(arg1 + 8) s< 1 || arg1[1] s< 1 || x8_56.d s> 0x2000)
                    goto label_108da58
                
                int64_t x9_7 = *x20_1
                
                if (x9_7 s< 0x40 || x9_7 s> x8_56)
                    goto label_108da58
                
            label_108da48:
                result = 0
                
                if (oggpack_read(&var_88, 1) != 1)
                    goto label_108da58
            else
                result = 0xffffff7a

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
