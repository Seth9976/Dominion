// 函数: _Z7CanUndov
// 地址: 0xb9c414
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((HasActiveGame() & 1) != 0)
    if (zx.d(*(gDomClient + 0x22134)) == 0)
        void* x0_1 = ActiveGame()
        uint64_t x8_2 = zx.q(*(x0_1 + 0x11b4))
        
        if (x8_2.d s< 1)
        label_b9c4a4:
            GetClient()
            return zx.q(GetUndoStyleFlag(gDomClient + 0x81450) != 0 ? 1 : 0)
        
        void* x9_1 = x0_1 + 0x74
        
        while (true)
            int32_t x12_2 = *x9_1 - 0x3e9
            
            if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
                break
            
            uint64_t temp0_1 = x8_2
            x8_2 -= 1
            x9_1 += 0x22c
            
            if (temp0_1 == 1)
                goto label_b9c4a4
        
        goto label_b9c480
    
label_b9c480:
    ActiveGame()
    
    if (*(GetClient() + 0x5068) != 2)
        goto label_b9c4a4

return 0
