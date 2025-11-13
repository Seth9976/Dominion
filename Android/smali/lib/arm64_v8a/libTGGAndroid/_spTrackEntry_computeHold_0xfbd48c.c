// 函数: _spTrackEntry_computeHold
// 地址: 0xfbd48c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
int64_t* x28 = arg1[3]
uint64_t x19 = zx.q(*(x8 + 0xc))
int64_t x26 = *(x8 + 0x10)
int64_t x27 = *(spIntArray_setSize(arg1[0x10], zx.q(x19.d)) + 8)
*arg1[0x11] = 0
int32_t* x21_1 = arg1[0x11]
int32_t x8_2 = x21_1[1]
*x21_1 = x19.d
int64_t result

if (x8_2 s< x19.d)
    int64_t x0_2 = *(x21_1 + 8)
    uint32_t temp0_1 = vcvts_s32_f32(float.s(x19.d) * fconvert.s(1.75f))
    uint64_t x8_3
    
    if (temp0_1 s> 8)
        x8_3 = zx.q(temp0_1)
    else
        x8_3 = 8
    
    x21_1[1] = x8_3.d
    result = _spRealloc(x0_2, x8_3 << 3)
    *(x21_1 + 8) = result
    
    if (x28 != 0 && x28[6].d != 0)
        goto label_fbd538
    
    goto label_fbd604

result = *(x21_1 + 8)

if (x28 == 0 || x28[6].d == 0)
label_fbd604:
    int64_t result_1 = result
    
    if (x19.d s>= 1)
        int32_t i = 0
        
        do
            int64_t i_3 = sx.q(i)
            int64_t* x24_4
            
            while (true)
                int32_t* x24_2 = *(x26 + (i_3 << 3))
                result = spTimeline_getPropertyId(x24_2)
                uint64_t j_4 = zx.q(*(arg2 + 0x58))
                int32_t x23_2 = result.d
                int32_t x8_9
                
                if (j_4.d s>= 1)
                    int32_t* x9_4 = *(arg2 + 0x50)
                    uint64_t j_2 = j_4
                    int32_t j
                    
                    do
                        if (*x9_4 == x23_2)
                            x8_9 = 0
                            goto label_fbd620
                        
                        j = j_2
                        j_2 -= 1
                        x9_4 = &x9_4[1]
                    while (j != 1)
                
                int64_t x25_1
                
                if (*(arg2 + 0x5c) s<= j_4.d)
                    int32_t fp_1 = (j_4.d << 1) + 2
                    int64_t x0_9 = _spCalloc(sx.q(fp_1), 4, 
                        "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x387)
                    x25_1 = x0_9
                    memcpy(x0_9, *(arg2 + 0x50), sx.q(*(arg2 + 0x58)) << 2)
                    result = _spFree(*(arg2 + 0x50))
                    j_4 = zx.q(*(arg2 + 0x58))
                    *(arg2 + 0x50) = x25_1
                    *(arg2 + 0x5c) = fp_1
                else
                    x25_1 = *(arg2 + 0x50)
                
                *(x25_1 + (sx.q(j_4.d) << 2)) = x23_2
                *(arg2 + 0x58) += 1
                
                if (x28 == 0)
                label_fbd61c:
                    x8_9 = 1
                else
                    int32_t x8_14 = *x24_2
                    
                    if (x8_14 u> 8 || (1 << x8_14 & 0x190) == 0)
                        void* x8_16 = *x28
                        uint64_t x24_3 = zx.q(*(x8_16 + 0xc))
                        
                        if (x24_3.d s< 1)
                        label_fbd61c_1:
                            x8_9 = 1
                        else
                            int64_t* x25_2 = *(x8_16 + 0x10)
                            
                            while (true)
                                result = spTimeline_getPropertyId(*x25_2)
                                
                                if (result.d == x23_2)
                                    break
                                
                                uint64_t temp2_1 = x24_3
                                x24_3 -= 1
                                x25_2 = &x25_2[1]
                                
                                if (temp2_1 == 1)
                                    goto label_fbd61c_2
                            
                            x24_4 = x28[3]
                            
                            if (x24_4 != 0)
                            label_fbd73c:
                                void* x8_17 = *x24_4
                                uint64_t j_3 = zx.q(*(x8_17 + 0xc))
                                
                                if (j_3.d s>= 1)
                                    int64_t* fp_2 = *(x8_17 + 0x10)
                                    uint64_t j_1
                                    
                                    do
                                        result = spTimeline_getPropertyId(*fp_2)
                                        
                                        if (result.d == x23_2)
                                            x24_4 = x24_4[3]
                                            x8_9 = 2
                                            
                                            if (x24_4 != 0)
                                                goto label_fbd73c
                                            
                                            goto label_fbd620
                                        
                                        j_1 = j_3
                                        j_3 -= 1
                                        fp_2 = &fp_2[1]
                                    while (j_1 != 1)
                                
                                if (x24_4[0xe].d f> 0f)
                                    break
                            
                            x8_9 = 2
                    else
                    label_fbd61c_2:
                        x8_9 = 1
                
            label_fbd620:
                *(x27 + (i_3 << 2)) = x8_9
                i_3 += 1
                
                if (i_3 s>= x19)
                    return result
            
            *(x27 + (i_3 << 2)) = 3
            i = i_3.d + 1
            *(result_1 + (i_3 << 3)) = x24_4
        while (i s< x19.d)
else
label_fbd538:
    
    if (x19.d s>= 1)
        int64_t x24_1 = 0
        
        do
            result = spTimeline_getPropertyId(*(x26 + (x24_1 << 3)))
            uint64_t i_4 = zx.q(*(arg2 + 0x58))
            int32_t x22_1 = result.d
            
            if (i_4.d s>= 1)
                int32_t* x9_2 = *(arg2 + 0x50)
                uint64_t i_2 = i_4
                uint64_t i_1
                
                do
                    if (*x9_2 == x22_1)
                        goto label_fbd5a4
                    
                    i_1 = i_2
                    i_2 -= 1
                    x9_2 = &x9_2[1]
                while (i_1 != 1)
            
            int64_t x23_1
            
            if (*(arg2 + 0x5c) s<= i_4.d)
                int32_t x28_1 = (i_4.d << 1) + 2
                int64_t x0_4 = _spCalloc(sx.q(x28_1), 4, 
                    "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x387)
                x23_1 = x0_4
                memcpy(x0_4, *(arg2 + 0x50), sx.q(*(arg2 + 0x58)) << 2)
                result = _spFree(*(arg2 + 0x50))
                i_4 = zx.q(*(arg2 + 0x58))
                *(arg2 + 0x50) = x23_1
                *(arg2 + 0x5c) = x28_1
            else
                x23_1 = *(arg2 + 0x50)
            
            *(x23_1 + (sx.q(i_4.d) << 2)) = x22_1
            *(arg2 + 0x58) += 1
        label_fbd5a4:
            *(x27 + (x24_1 << 2)) = 2
            x24_1 += 1
        while (x24_1 != x19)

return result
