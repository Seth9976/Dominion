// 函数: _Z15StructureUpdateP9Structure
// 地址: 0xfd40e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x40)

if (x8 s>= 1)
    int64_t i = 0
    
    do
        int32_t* x22_1 = *(arg1 + 0x48) + (i << 4)
        
        if (*x22_1 s>= 1)
            int64_t x23_1 = 0
            int64_t j = 0
            
            do
                MaterialStateUpdate(*(x22_1 + 8) + x23_1)
                j += 1
                x23_1 += 0x1a20
            while (j s< sx.q(*x22_1))
            
            x8 = *(arg1 + 0x40)
        
        i += 1
    while (i s< sx.q(x8))

StructureAnim* result = *(arg1 + 0x38)

if (result != 0)
    result = AnimationUpdate(result)

int32_t* x25_2 = *(arg1 + 0x50)

if (x25_2 != 0)
    while (true)
        int32_t* x26_1 = *(x25_2 + 0x18)
        Transform var_70
        int128_t v0_1
        result, v0_1 = StructureGetHardPointPlace(arg1, zx.q(*x25_2), &var_70)
        
        if (x25_2[4] != 2)
            result = XTrace("Unknown attachment type")
            x25_2 = x26_1
            
            if (x26_1 == 0)
                break
        else
            void* x8_7 = ***gpGameData + zx.q(x25_2[5].w) * 0x98
            int32_t var_54
            *(x8_7 + 0x18) = var_54
            int64_t var_5c
            *(x8_7 + 0x10) = var_5c
            *(x8_7 + 0x1c) = *(&var_70 | 4)
            x25_2 = x26_1
            
            if (x26_1 == 0)
                break

return result
