// 函数: _Z34GameSpecific_CanUndoPassAndPlayOneR13DecisionStyle
// 地址: 0xb34ef0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((HasActiveGame() & 1) != 0)
    if (zx.d(*(gDomClient + 0x22134)) == 0)
        void* x0_1 = ActiveGame()
        uint64_t i_1 = zx.q(*(x0_1 + 0x11b4))
        
        if (i_1.d s>= 1)
            void* x9_1 = x0_1 + 0x74
            uint64_t i
            
            do
                int32_t x12_2 = *x9_1 - 0x3e9
                
                if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
                    goto label_b34f64
                
                i = i_1
                i_1 -= 1
                x9_1 += 0x22c
            while (i != 1)
        
        goto label_b34f84
    
label_b34f64:
    ActiveGame()
    
    if (*(GetClient() + 0x5068) != 2)
    label_b34f84:
        
        if (DomLogGetLastPlayerDecision(0xffffffff, arg1) != 0xffffffff)
            void* x0_4 = ActiveGame()
            GetClient()
            int32_t x0_6 = GetUndoStyleFlag(gDomClient + 0x81450)
            
            if (x0_6 != 0)
                if (x0_6 != 1)
                    return zx.q((zx.d(*(x0_4 + 0x20)) & 4) == 0 ? 1 : 0) | zx.q(*arg1 != 2 ? 1 : 0)
                
                int32_t x8_3 = *arg1
                
                if (x8_3 != 2)
                    return zx.q((zx.d(*(x0_4 + 0x20)) & 4) == 0 ? 1 : 0) | zx.q(x8_3 != 2 ? 1 : 0)

return 0
