// 函数: _Z12CanCtrlZUndov
// 地址: 0xb35f88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((HasActiveGame() & 1) != 0)
    DomTutorial* var_18
    
    if (*(GetClient() + 0x5068) == 1
            && GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18) s> 0)
        return 0
    
    if (zx.d(*(gDomClient + 0x22134)) == 0)
        void* x0_5 = ActiveGame()
        uint64_t i_1 = zx.q(*(x0_5 + 0x11b4))
        
        if (i_1.d s>= 1)
            void* x9_1 = x0_5 + 0x74
            uint64_t i
            
            do
                int32_t x12_2 = *x9_1 - 0x3e9
                
                if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
                    goto label_b36030
                
                i = i_1
                i_1 -= 1
                x9_1 += 0x22c
            while (i != 1)
        
        goto label_b36050
    
label_b36030:
    ActiveGame()
    
    if (*(GetClient() + 0x5068) != 2)
    label_b36050:
        int32_t var_24
        
        if (DomLogGetLastPlayerDecision(LocalWho(), &var_24) != 0xffffffff)
            void* x0_9 = ActiveGame()
            GetClient()
            int64_t result = GetUndoStyleFlag(gDomClient + 0x81450)
            
            if (result.d == 0)
                return result
            
            int32_t x8_4 = var_24
            
            if (result.d != 1 || x8_4 != 2)
                return zx.q(x8_4 != 2 ? 1 : 0) | zx.q((zx.d(*(x0_9 + 0x20)) & 4) == 0 ? 1 : 0)

return 0
