// 函数: _Z28StructuresUnbindFromMaterialP6XAsset
// 地址: 0xfd2f14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = GameExists()

if ((result.d & 1) == 0)
    return result

int64_t* x19_1 = **gpGameData

while (true)
    void* x8_2 = *x19_1
    void* x20_1 = x8_2
    
    while (true)
        int64_t x8_3 = x8_2 + zx.q(x19_1[1].d) * 0x98
        
        if (x20_1 u>= x8_3)
            return result
        
        while (true)
            result = zx.q(*(x20_1 + 0x90))
            
            if (result.d u>> 0x10 != 0)
                break
            
            x20_1 += 0x98
            
            if (x20_1 u>= x8_3)
                return result
        
        result = StructureUnbindMaterial(result)
        
        if (x20_1 == 0)
            break
        
        x8_2 = *x19_1
        x20_1 += 0x98
