// 函数: _ZN5Botan13DH_PrivateKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd10318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x10) = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PrivateKey + 0x90
*(arg1 + 0x18) = 0
*(arg1 + 0x30) = -1
*(arg1 + 0x38) = 1
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
*arg1 = construction_vtable_for_Botan::Private_Key-in-Botan::DH_PrivateKey + 0x1f0
*(arg1 + 8) = construction_vtable_for_Botan::Private_Key-in-Botan::DH_PrivateKey + 0xc0
void* result = Botan::DL_Scheme_PrivateKey::DL_Scheme_PrivateKey(arg1 + 0x50, 
    _VTT_for_Botan::DH_PrivateKey + 0x80, arg2)
int64_t x8_1 = *(arg1 + 0x30)
*(arg1 + 8) = _vtable_for_Botan::DH_PrivateKey + 0x1f8
*(arg1 + 0x10) = _vtable_for_Botan::DH_PrivateKey + 0x340
*arg1 = _vtable_for_Botan::DH_PrivateKey + 0xa0
*(arg1 + 0x50) = _vtable_for_Botan::DH_PrivateKey + 0x490

if (x8_1 == -1)
    int64_t x9_2 = *(arg1 + 0x18)
    int64_t x11_1 = *(arg1 + 0x20)
    int64_t x10_2 = x11_1 - x9_2
    
    if (x11_1 == x9_2)
        *(arg1 + 0x30) = 0
    label_d10444:
        *(Botan::DL_Group::data() + 0x148)
        Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
            arg1 + 0x58)
        void* result_1
        void* result_2
        int64_t var_50
        
        if (arg1 + 0x18 == &result_1)
            result = result_1
            
            if (result != 0)
                result_2 = result
                return Botan::deallocate_memory(result, (var_50 - result) s>> 2, 4)
        else
            result = *(arg1 + 0x18)
            int128_t v0_1 = result_1.o
            result_1 = result
            *(arg1 + 0x18) = v0_1
            int64_t x11_4 = *(arg1 + 0x28)
            int64_t x9_4 = *(arg1 + 0x30)
            *(arg1 + 0x28) = var_50
            int64_t var_48
            *(arg1 + 0x30) = var_48
            int64_t var_48_1 = x9_4
            int32_t x9_5 = *(arg1 + 0x38)
            int32_t var_40
            *(arg1 + 0x38) = var_40
            int32_t var_40_1 = x9_5
            
            if (result != 0)
                result_2 = result
                return Botan::deallocate_memory(result, (x11_4 - result) s>> 2, 4)
    else
        int64_t x12_1
        
        x12_1 = x10_2 s>= 0 ? x10_2 : -1
        
        int64_t x11_2 = x9_2 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_2 = x10_2 s>> 2
        int64_t x10_3
        
        x10_3 = x11_2 s> x10_2 ? x11_2 : x10_2
        
        int64_t i_1 = x12_2 * (x10_3 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_2 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_2 -= x11_3
        while (i != 1)
        *(arg1 + 0x30) = x8_2
        
        if (x8_2 == 0)
            goto label_d10444
else if (x8_1 == 0)
    goto label_d10444

return result
