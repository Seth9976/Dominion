// 函数: _ZN5Botan9Power_ModaSERKS0_
// 地址: 0xdd8764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1

if (arg1 != entry_x1)
    int64_t* x0 = *(entry_x1 + 8)
    
    if (x0 == 0)
        int64_t* x0_4 = *(arg1 + 8)
        *(arg1 + 8) = 0
        
        if (x0_4 != 0)
            (*(*x0_4 + 0x28))()
    else
        int64_t x0_1 = (*(*x0 + 0x18))()
        int64_t* x8_3 = *(arg1 + 8)
        *(arg1 + 8) = x0_1
        
        if (x8_3 != 0)
            (*(*x8_3 + 0x28))(x8_3)

return arg1
