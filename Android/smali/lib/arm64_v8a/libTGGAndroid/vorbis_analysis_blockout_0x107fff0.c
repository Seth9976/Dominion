// 函数: vorbis_analysis_blockout
// 地址: 0x107fff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = *(arg1 + 8)
int64_t* x28 = *(x24 + 0x30)
int64_t x8_1 = x28[*(arg1 + 0x40)]
int64_t x26

if (x8_1 s< 0)
    x26 = x8_1 + 1
else
    x26 = x8_1

if (*(arg1 + 0x2c) != 0 && *(arg1 + 0x30) != 0xffffffff)
    int64_t* x21_1 = *(arg1 + 0x88)
    int64_t x23_1 = *(arg1 + 0x50)
    int64_t* x27_1 = arg2[0x17]
    int32_t* x22_1 = x21_1[0xe]
    int64_t x0_1 = _ve_envelope_search(arg1)
    
    if (x0_1 != -1)
        if (*x28 == x28[1])
            goto label_1080080
        
        *(arg1 + 0x48) = x0_1
    label_1080090:
        int64_t x10_1 = x28[x0_1]
        int64_t result = 0
        int64_t x8_6 = x28[*(arg1 + 0x40)]
        int64_t x8_7
        
        if (x8_6 s< 0)
            x8_7 = x8_6 + 3
        else
            x8_7 = x8_6
        
        int64_t x9_4
        
        if (x10_1 s< 0)
            x9_4 = x10_1 + 3
        else
            x9_4 = x10_1
        
        int64_t x9_5 = *(arg1 + 0x50) + (x8_7 s>> 2) + (x9_4 s>> 2)
        int64_t x8_9
        
        if (x10_1 s< 0)
            x8_9 = x10_1 + 1
        else
            x8_9 = x10_1
        
        if (x9_5 + (x8_9 s>> 1) s<= sx.q(*(arg1 + 0x24)))
            int64_t* i_2 = arg2[0x12]
            
            if (i_2 != 0)
                int64_t* i
                
                do
                    i = i_2[1]
                    free(*i_2)
                    free(i_2)
                    i_2 = i
                while (i != 0)
            
            int64_t x8_11 = arg2[0x11]
            
            if (x8_11 != 0)
                int64_t x0_5 = realloc(arg2[0xe], arg2[0x10] + x8_11)
                int64_t x8_12 = arg2[0x10]
                int64_t x9_7 = arg2[0x11]
                arg2[0xe] = x0_5
                arg2[0x10] = x8_12 + x9_7
                arg2[0x11] = 0
            
            arg2[0xf] = 0
            arg2[0x12] = 0
            int64_t x8_14 = *(arg1 + 0x38)
            arg2[6] = x8_14
            int64_t x10_2 = *(arg1 + 0x40)
            arg2[7] = x10_2
            int64_t x9_8 = *(arg1 + 0x48)
            arg2[8] = x9_8
            
            if (x10_2 == 0)
                if (_ve_envelope_mark(arg1) == 0)
                    *(x27_1 + 0xc) = 1
                else
                    *(x27_1 + 0xc) = 0
            else if (x8_14 == 0 || x9_8 == 0)
                *(x27_1 + 0xc) = 0
            else
                *(x27_1 + 0xc) = 1
            
            arg2[0xd] = arg1
            int64_t x8_15 = *(arg1 + 0x60)
            *(arg1 + 0x60) = x8_15 + 1
            arg2[0xc] = x8_15
            arg2[0xb] = *(arg1 + 0x58)
            arg2[9].d = (x28[*(arg1 + 0x40)]).d
            int32_t v1_1 = x27_1[1].d
            int32_t v0_1 = *x22_1
            
            if (not(v1_1 f<= v0_1))
                v0_1 = v1_1
                *x22_1 = v1_1
            
            int32_t v0_2 = _vp_ampmax_decay(arg1, v0_1, v1_1)
            *x22_1 = v0_2
            x27_1[1].d = v0_2
            uint64_t x9_10 = sx.q(*(x24 + 4))
            int64_t x25_1 = arg2[0xf]
            uint64_t bytes_3 = arg2[0x10]
            int64_t x21_2 = arg2[0xe]
            uint64_t bytes_1 = x9_10 << 3
            uint64_t bytes
            
            if (bytes_1 + x25_1 s<= bytes_3)
                bytes = bytes_1
            else
                if (x21_2 != 0)
                    int64_t* x0_9 = malloc(0x10)
                    int64_t x9_11 = arg2[0x12]
                    arg2[0x11] += x25_1
                    arg2[0x12] = x0_9
                    *x0_9 = x21_2
                    x0_9[1] = x9_11
                
                arg2[0x10] = bytes_1
                int64_t x0_11 = malloc(bytes_1)
                arg2[0xe] = x0_11
                arg2[0xf] = 0
                x9_10 = sx.q(*(x24 + 4))
                x21_2 = x0_11
                x25_1 = 0
                bytes_3 = bytes_1
                bytes = x9_10 << 3
            
            int64_t x23_2 = x25_1 + bytes_1
            arg2[0xf] = x23_2
            *arg2 = x21_2 + x25_1
            
            if (bytes + x23_2 s> bytes_3)
                if (x21_2 != 0)
                    int64_t* x0_12 = malloc(0x10)
                    int64_t x9_12 = arg2[0x12]
                    arg2[0x11] += x23_2
                    arg2[0x12] = x0_12
                    *x0_12 = x21_2
                    x0_12[1] = x9_12
                
                arg2[0x10] = bytes
                int64_t x0_14 = malloc(bytes)
                arg2[0xe] = x0_14
                arg2[0xf] = 0
                x9_10 = zx.q(*(x24 + 4))
                x21_2 = x0_14
                x23_2 = 0
                bytes_3 = bytes
            
            int64_t x25_2 = x23_2 + bytes
            arg2[0xf] = x25_2
            *x27_1 = x21_2 + x23_2
            
            if (x9_10.d s>= 1)
                int64_t x28_1 = 0
                int64_t x26_1 = x23_1 - (x26 s>> 1)
                
                while (true)
                    int64_t x22_2 = (x26_1 + sx.q(arg2[9].d)) << 2
                    size_t bytes_2 = (x22_2 + 7) & 0xfffffffffffffff8
                    
                    if (bytes_2 + x25_2 s> bytes_3)
                        if (x21_2 != 0)
                            int64_t* x0_15 = malloc(0x10)
                            int64_t x9_18 = arg2[0x12]
                            arg2[0x11] += x25_2
                            arg2[0x12] = x0_15
                            *x0_15 = x21_2
                            x0_15[1] = x9_18
                        
                        arg2[0x10] = bytes_2
                        int64_t x0_17 = malloc(bytes_2)
                        x21_2 = x0_17
                        x25_2 = 0
                        arg2[0xe] = x0_17
                        arg2[0xf] = 0
                    
                    arg2[0xf] = x25_2 + bytes_2
                    (*x27_1)[x28_1] = x21_2 + x25_2
                    memcpy((*x27_1)[x28_1], (*(arg1 + 0x10))[x28_1], x22_2)
                    x28_1 += 1
                    (*arg2)[x28_1] = (*x27_1)[x28_1] + (x26_1 << 2)
                    
                    if (x28_1 s>= sx.q(*(x24 + 4)))
                        break
                    
                    x21_2 = arg2[0xe]
                    x25_2 = arg2[0xf]
                    bytes_3 = arg2[0x10]
            
            int64_t x8_32 = sx.q(*(arg1 + 0x30))
            
            if (x8_32.d == 0 || *(arg1 + 0x50) s< x8_32)
                int64_t x8_34 = x28[1]
                int64_t x8_35
                
                if (x8_34 s< 0)
                    x8_35 = x8_34 + 1
                else
                    x8_35 = x8_34
                
                int64_t x21_4 = (x8_35 & 0x1fffffffe) << 0x1f s>> 0x20
                int32_t x22_3 = x9_5.d - x21_4.d
                
                if (x22_3 s>= 1)
                    int64_t x20_1 = sx.q(x22_3)
                    _ve_envelope_shift(*x21_1, x20_1)
                    int32_t x8_39 = *(arg1 + 0x24) - x22_3
                    *(arg1 + 0x24) = x8_39
                    
                    if (*(x24 + 4) s>= 1)
                        int64_t x0_20 = **(arg1 + 0x10)
                        memmove(x0_20, x0_20 + (x20_1 << 2), zx.q(x8_39) << 0x20 s>> 0x1e)
                        
                        if (*(x24 + 4) s>= 2)
                            int64_t i_1 = 1
                            
                            do
                                int64_t x0_21 = *(*(arg1 + 0x10) + (i_1 << 3))
                                memmove(x0_21, x0_21 + (x20_1 << 2), sx.q(*(arg1 + 0x24)) << 2)
                                i_1 += 1
                            while (i_1 s< sx.q(*(x24 + 4)))
                    
                    int64_t x9_25 = *(arg1 + 0x40)
                    int64_t x10_6 = *(arg1 + 0x48)
                    int32_t x8_44 = *(arg1 + 0x30)
                    *(arg1 + 0x50) = x21_4
                    *(arg1 + 0x38) = x9_25
                    *(arg1 + 0x40) = x10_6
                    int64_t x8_47
                    
                    if (x8_44 == 0)
                        x8_47 = *(arg1 + 0x58) + x20_1
                    else
                        int32_t x8_45 = x8_44 - x22_3
                        int32_t x10_7
                        
                        x10_7 = x8_45 s>= 1 ? x8_45 : -1
                        
                        int64_t x8_46 = *(arg1 + 0x58)
                        int64_t x9_26 = sx.q(x10_7)
                        *(arg1 + 0x30) = x10_7
                        
                        if (x21_4 s< x9_26)
                            x8_47 = x8_46 + x20_1
                        else
                            x8_47 = x20_1 - x21_4 + x9_26 + x8_46
                    
                    *(arg1 + 0x58) = x8_47
                
                return 1
            
            result = 1
            *(arg1 + 0x30) = 0xffffffff
            arg2[0xa].d = 1
        
        return result
    
    if (*(arg1 + 0x30) != 0)
    label_1080080:
        x0_1 = 0
        *(arg1 + 0x48) = 0
        goto label_1080090

return 0
