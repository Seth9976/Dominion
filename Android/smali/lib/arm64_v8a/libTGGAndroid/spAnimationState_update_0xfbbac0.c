// 函数: spAnimationState_update
// 地址: 0xfbbac0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_40 = v9
int64_t var_38 = arg3.q
uint64_t x23 = zx.q(*(arg1 + 8))

if (x23.d s>= 1)
    int64_t x20_1 = 0
    arg3.d = *(arg1 + 0x20) * arg2
    
    do
        void* x21_1 = *(*(arg1 + 0x10) + (x20_1 << 3))
        
        if (x21_1 != 0)
            float v1 = *(x21_1 + 0x50)
            arg2 = *(x21_1 + 0x5c)
            v9.d = arg3.d f* *(x21_1 + 0x64)
            *(x21_1 + 0x48) = *(x21_1 + 0x4c)
            *(x21_1 + 0x58) = arg2
            
            if (v1 <= 0f)
                goto label_fbbb4c
            
            v1 = v1 f- v9.d
            *(x21_1 + 0x50) = v1
            
            if (not(v1 > 0f))
                v9.d = fneg(v1)
                *(x21_1 + 0x50) = 0
            label_fbbb4c:
                void* i_4 = *(x21_1 + 8)
                
                if (i_4 == 0)
                    v1 = *(x21_1 + 0x60)
                    
                    if (arg2 < v1 || *(x21_1 + 0x10) != 0)
                    label_fbbbec:
                        
                        if (*(x21_1 + 0x10) != 0
                                && _spAnimationState_updateMixingFrom(arg1, x21_1, arg3, v1) != 0)
                            void* i = *(x21_1 + 0x10)
                            *(x21_1 + 0x10) = 0
                            
                            if (i != 0)
                                *(i + 0x18) = 0
                                
                                do
                                    _spEventQueue_end(*(arg1 + 0x48), i)
                                    i = *(i + 0x10)
                                while (i != 0)
                        
                        *(x21_1 + 0x54) = v9.d f+ *(x21_1 + 0x54)
                    else
                        *(*(arg1 + 0x10) + (x20_1 << 3)) = 0
                        _spEventQueue_end(*(arg1 + 0x48), x21_1)
                        
                        for (void* i_1 = *(x21_1 + 8); i_1 != 0; i_1 = *(i_1 + 8))
                            _spEventQueue_dispose(*(arg1 + 0x48), i_1)
                        
                        *(x21_1 + 8) = 0
                else
                    v1 = *(i_4 + 0x50)
                    arg2 = arg2 - v1
                    
                    if (arg2 < 0f)
                        goto label_fbbbec
                    
                    *(i_4 + 0x50) = 0
                    v1 = *(x21_1 + 0x64)
                    float v2 = 0f
                    
                    if (not(v1 == 0f))
                        v2 = (arg3.d f+ arg2 / v1) * *(i_4 + 0x64)
                    
                    *(i_4 + 0x54) = v2
                    arg2 = v9.d f+ *(x21_1 + 0x54)
                    *(x21_1 + 0x54) = arg2
                    _spAnimationState_setCurrent(arg1, zx.q(x20_1.d), i_4, 1, arg2, v1)
                    void* i_2 = *(i_4 + 0x10)
                    
                    while (i_2 != 0)
                        void* i_3 = i_2
                        *(i_4 + 0x6c) = arg3.d f+ *(i_4 + 0x6c)
                        i_2 = *(i_2 + 0x10)
                        i_4 = i_3
        
        x20_1 += 1
    while (x20_1 != x23)

arg3.q = var_38
return _spEventQueue_drain(*(arg1 + 0x48)) __tailcall
