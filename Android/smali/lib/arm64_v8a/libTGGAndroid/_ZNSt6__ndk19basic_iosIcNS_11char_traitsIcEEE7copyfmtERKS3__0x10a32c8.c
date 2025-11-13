// 函数: _ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEE7copyfmtERKS3_
// 地址: 0x10a32c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1

if (arg1 != entry_x1)
    int64_t x8_1 = *(arg1 + 0x48)
    
    if (x8_1 != 0)
        int64_t i = x8_1 - 1
        
        do
            (*(*(arg1 + 0x38) + (i << 3)))(0, arg1, zx.q(*(*(arg1 + 0x40) + (i << 2))))
            i -= 1
        while (i != -1)
    
    std::__ndk1::ios_base::copyfmt(arg1)
    *(arg1 + 0x88) = *(entry_x1 + 0x88)
    int64_t x8_5 = *(arg1 + 0x48)
    *(arg1 + 0x90) = *(entry_x1 + 0x90)
    
    if (x8_5 != 0)
        int64_t i_1 = x8_5 - 1
        
        do
            (*(*(arg1 + 0x38) + (i_1 << 3)))(2, arg1, zx.q(*(*(arg1 + 0x40) + (i_1 << 2))))
            i_1 -= 1
        while (i_1 != -1)
    
    int32_t x10_1 = *(entry_x1 + 0x24)
    int32_t x8_10 = *(arg1 + 0x20) | (*(arg1 + 0x28) == 0 ? 1 : 0)
    *(arg1 + 0x20) = x8_10
    *(arg1 + 0x24) = x10_1
    
    if ((x8_10 & x10_1) != 0)
        sub_10b053c()
        noreturn

return arg1
