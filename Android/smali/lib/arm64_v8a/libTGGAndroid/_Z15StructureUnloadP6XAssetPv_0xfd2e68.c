// 函数: _Z15StructureUnloadP6XAssetPv
// 地址: 0xfd2e68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefStructureUnbindGraphicsBuffers(arg2)
uint64_t result = GameExists()

if ((result.d & 1) != 0)
    void* x21_1 = nullptr
    int64_t* x20_1 = **gpGameData
    
    while (true)
        void* x8_2
        
        if (x21_1 == 0)
            x8_2 = *x20_1
            x21_1 = x8_2
        else
            x8_2 = *x20_1
            x21_1 += 0x98
        
        int64_t x8_3 = x8_2 + zx.q(x20_1[1].d) * 0x98
        
        if (x21_1 u>= x8_3)
            break
        
        while (true)
            result = zx.q(*(x21_1 + 0x90))
            
            if (result.d u>> 0x10 != 0)
                break
            
            x21_1 += 0x98
            
            if (x21_1 u>= x8_3)
                return result
        
        if (*(x21_1 + 8) == arg1)
            result = StructureUnbindMaterial(result)

return result
