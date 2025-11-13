// 函数: _ZN5Botan14GCM_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xd81c18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t x8_1 = *arg2
int64_t x9_1 = *(arg2 + 8) - x8_1
int64_t entry_x2
int64_t x21 = x9_1 - entry_x2

if (x9_1 u< entry_x2)
    Botan::throw_invalid_argument("Invalid offset", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    int64_t* x0 = *(arg1 + 0x28)
    uint64_t x22_1 = x8_1 + entry_x2
    (*(*x0 + 0x30))(x0, x22_1, x22_1, x21)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_1 = *(arg1 + 0x30)
    
    if (*(x0_1 + 0x40) - *(x0_1 + 0x38) != 0x10)
        Botan::SymmetricAlgorithm::throw_key_not_set_error()
    else
        *(x0_1 + 0xa0) += x21
        Botan::GHASH::ghash_update(x0_1, x0_1 + 0x38, x22_1)
        int64_t var_48 = 0
        int64_t var_40_1 = 0
        *(arg1 + 8)
        Botan::GHASH::final(*(arg1 + 0x30), &var_48)
        int64_t x8_6 = *(arg1 + 8)
        int64_t* var_58 = &var_48
        int64_t var_50_1 = x8_6
        int64_t result =
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(arg2, &var_58)
        
        if (*(x23 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
