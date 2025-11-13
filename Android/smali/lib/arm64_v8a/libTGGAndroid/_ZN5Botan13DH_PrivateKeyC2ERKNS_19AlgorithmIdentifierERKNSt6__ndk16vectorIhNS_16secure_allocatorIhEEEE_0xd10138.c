// 函数: _ZN5Botan13DH_PrivateKeyC2ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd10138
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 8)
Botan::AlgorithmIdentifier const& x19 = arg1
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x18)
void* x8_4 = *(arg2 + 0x20)
*(arg1 + 8) = x8_4
*(arg1 + 8 + *(x8_4 - 0xc8)) = *(arg2 + 0x28)
*(arg1 + 8 + *(*(arg1 + 8) - 0x88)) = *(arg2 + 0x30)
void* x8_8 = *arg2
*arg1 = x8_8
*(arg1 + *(x8_8 - 0x88)) = *(arg2 + 0x38)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x40)
*(arg1 + 8) = *(arg2 + 0x48)
*(arg1 + *(*arg1 - 0x98)) = *(arg2 + 0x50)
*(arg1 + *(*arg1 - 0xa0)) = *(arg2 + 0x58)
int64_t x8_17 = *(arg1 + 0x30)

if (x8_17 == -1)
    int64_t x9_6 = *(x19 + 0x18)
    int64_t x11_1 = *(x19 + 0x20)
    int64_t x10_4 = x11_1 - x9_6
    
    if (x11_1 == x9_6)
        *(x19 + 0x30) = 0
    label_d10278:
        *(Botan::DL_Group::data() + 0x148)
        Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
            x19 + 0x58)
        Botan::AlgorithmIdentifier const& var_60
        Botan::AlgorithmIdentifier const& var_58_1
        int64_t var_50
        
        if (x19 + 0x18 == &var_60)
            arg1 = var_60
            
            if (arg1 != 0)
                var_58_1 = arg1
                Botan::deallocate_memory(arg1, (var_50 - arg1) s>> 2, 4)
        else
            arg1 = *(x19 + 0x18)
            int128_t v0_1 = var_60.o
            var_60 = arg1
            *(x19 + 0x18) = v0_1
            int64_t x11_4 = *(x19 + 0x28)
            int64_t x9_8 = *(x19 + 0x30)
            *(x19 + 0x28) = var_50
            int64_t var_48
            *(x19 + 0x30) = var_48
            int64_t var_48_1 = x9_8
            int32_t x9_9 = *(x19 + 0x38)
            int32_t var_40
            *(x19 + 0x38) = var_40
            int32_t var_40_1 = x9_9
            
            if (arg1 != 0)
                var_58_1 = arg1
                Botan::deallocate_memory(arg1, (x11_4 - arg1) s>> 2, 4)
    else
        int64_t x12_1
        
        x12_1 = x10_4 s>= 0 ? x10_4 : -1
        
        int64_t x11_2 = x9_6 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_18 = x10_4 s>> 2
        int64_t x10_5
        
        x10_5 = x11_2 s> x10_4 ? x11_2 : x10_4
        
        int64_t i_1 = x12_2 * (x10_5 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_6 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_18 -= x11_3
        while (i != 1)
        *(x19 + 0x30) = x8_18
        
        if (x8_18 == 0)
            goto label_d10278
else if (x8_17 == 0)
    goto label_d10278
