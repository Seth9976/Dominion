// 函数: spAnimationState_apply
// 地址: 0xfbbe7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_90 = v12
int64_t v11
int64_t var_80 = v11
int64_t var_78 = arg5.q
int64_t var_70 = arg4.q
int64_t var_68 = arg3.q
int32_t x24
uint64_t x9_2

if (*(arg1 + 0x60) == 0)
label_fbbf38:
    x9_2 = zx.q(*(arg1 + 8))
    
    if (x9_2.d s< 1)
        x24 = 0
    else
    label_fbbf44:
        int64_t fp_1 = 0
        x24 = 0
        v11.d = 0f
        v12.d = fconvert.s(1f)
        uint64_t var_a0_1 = x9_2
        
        do
            int64_t* x23_3 = *(*(arg1 + 0x10) + (fp_1 << 3))
            
            if (x23_3 != 0 && not(x23_3[0xa].d f> 0f))
                int32_t x24_1
                
                if (fp_1 == 0)
                    x24_1 = 1
                    arg3.d = x23_3[0xd].d
                    
                    if (x23_3[2] != 0)
                        arg3.d = arg3.d
                            f* _spAnimationState_applyMixingFrom(arg1, x23_3, arg2, zx.q(x24_1))
                    else
                    label_fbc028:
                        
                        if (not(*(x23_3 + 0x54) f< x23_3[0xc].d))
                            if (x23_3[1] == 0)
                                arg3.d = v11.d
                            else
                                arg3.d = arg3.d
                else
                    x24_1 = *(x23_3 + 0x7c)
                    arg3.d = x23_3[0xd].d
                    
                    if (x23_3[2] == 0)
                        goto label_fbc028
                    
                    arg3.d =
                        arg3.d f* _spAnimationState_applyMixingFrom(arg1, x23_3, arg2, zx.q(x24_1))
                
                arg4.d = x23_3[9].d
                float v0
                
                if (*(x23_3 + 0x2c) == 0)
                    int32_t v2 = *(x23_3 + 0x44)
                    v0 = *(x23_3 + 0x54) f+ x23_3[8].d
                    
                    if (v0 f< v2)
                        arg5.d = v0
                    else
                        arg5.d = v2
                else
                    arg5.d = x23_3[8].d
                    float y = *(x23_3 + 0x44) f- arg5.d
                    
                    if (not(y == 0f))
                        arg5.d = arg5.d f+ fmodf(*(x23_3 + 0x54), y)
                
                void* x9_3 = *x23_3
                uint64_t i_5 = zx.q(*(x9_3 + 0xc))
                int64_t* x28_1 = *(x9_3 + 0x10)
                
                if (x24_1 != 3 && ((fp_1 == 0 ? 1 : 0) & (arg3.d f== v12.d ? 1 : 0)) == 0)
                    int32_t x8_10 = x23_3[0x13].d
                    void* x25_1 = x23_3[0x10]
                    
                    if (x8_10 == 0)
                        int32_t x27_1 = i_5.d << 1
                        
                        if (x27_1 != 0)
                            int64_t x0_5 = _spCalloc(sx.q(x27_1), 4, 
                                "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x37c)
                            _spFree(x23_3[0x12])
                            x23_3[0x12] = x0_5
                            x23_3[0x13].d = x27_1
                    
                    if (i_5.d s>= 1)
                        int64_t x8_12 = x23_3[0x12]
                        int32_t x26_2 = 0
                        int64_t x27_2 = 0
                        
                        while (true)
                            int32_t* x0_7 = x28_1[x27_2]
                            int32_t x4_1
                            
                            if ((*(*(x25_1 + 8) + (x27_2 << 2)) & 3) == 0)
                                x4_1 = x24_1
                            else
                                x4_1 = 0
                            
                            if (*x0_7 != 0)
                                spTimeline_apply(x0_7, arg2, *(arg1 + 0x40), arg1 + 0x38, x4_1, 0, 
                                    arg4, arg5, arg3)
                                x27_2 += 1
                                x26_2 += 2
                                
                                if (i_5 == x27_2)
                                    break
                            else
                                _spAnimationState_applyRotateTimeline(x0_7, x0_7, arg2, zx.q(x4_1), 
                                    x8_12, zx.q(x26_2), zx.q(x8_10 == 0 ? 1 : 0), arg5, arg3)
                                x27_2 += 1
                                x26_2 += 2
                                
                                if (i_5 == x27_2)
                                    break
                else if (i_5.d s>= 1)
                    uint64_t i
                    
                    do
                        int64_t x0_8 = *x28_1
                        x28_1 = &x28_1[1]
                        spTimeline_apply(x0_8, arg2, *(arg1 + 0x40), arg1 + 0x38, zx.q(x24_1), 0, 
                            arg4, arg5, arg3)
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
                
                _spAnimationState_queueEvents(arg1, x23_3, arg5)
                *(arg1 + 0x38) = 0
                v0 = *(x23_3 + 0x54)
                x9_2 = var_a0_1
                x24 = -1
                *(x23_3 + 0x4c) = arg5.d
                *(x23_3 + 0x5c) = v0
            
            fp_1 += 1
        while (fp_1 != x9_2)
else
    uint64_t x22_1 = zx.q(*(arg1 + 8))
    *(arg1 + 0x60) = 0
    *(arg1 + 0x58) = 0
    
    if (x22_1.d s> 0)
        int64_t x23_1 = 0
        
        do
            void* i_1 = *(*(arg1 + 0x10) + (x23_1 << 3))
            
            if (i_1 != 0)
                void* i_4
                
                do
                    i_4 = i_1
                    i_1 = *(i_1 + 0x10)
                while (i_1 != 0)
                
                void* i_2
                
                do
                    i_2 = *(i_4 + 0x18)
                    
                    if (i_2 == 0 || *(i_4 + 0x7c) != 3)
                        _spTrackEntry_computeHold(i_4, arg1)
                        i_2 = *(i_4 + 0x18)
                    
                    i_4 = i_2
                while (i_2 != 0)
            
            x23_1 += 1
        while (x23_1 != x22_1)
        
        uint64_t x22_2 = zx.q(*(arg1 + 8))
        *(arg1 + 0x58) = 0
        
        if (x22_2.d s>= 1)
            bool cond:0_1
            
            do
                for (void* i_3 = *(*(arg1 + 0x10) + ((x22_2 - 1) << 3)); i_3 != 0; 
                        i_3 = *(i_3 + 0x10))
                    _spTrackEntry_computeNotLast(i_3, arg1)
                
                cond:0_1 = x22_2 s<= 1
                x22_2 -= 1
            while (not(cond:0_1))
        
        goto label_fbbf38
    
    *(arg1 + 0x58) = 0
    x9_2 = zx.q(*(arg1 + 8))
    
    if (x9_2.d s>= 1)
        goto label_fbbf44
    
    x24 = 0
_spEventQueue_drain(*(arg1 + 0x48))
arg4.q = var_70
arg3.q = var_68
arg5.q = var_78
return zx.q(x24)
