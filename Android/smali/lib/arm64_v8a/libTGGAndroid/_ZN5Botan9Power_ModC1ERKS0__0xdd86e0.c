// 函数: _ZN5Botan9Power_ModC1ERKS0_
// 地址: 0xdd86e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Power_Mod + 0x10
*(arg1 + 8) = 0
void* entry_x1
int64_t* result = *(entry_x1 + 8)

if (result != 0)
    int64_t x0 = (*(*result + 0x18))()
    result = *(arg1 + 8)
    *(arg1 + 8) = x0
    
    if (result != 0)
        jump(*(*result + 0x28))

return result
