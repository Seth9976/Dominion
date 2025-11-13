// 函数: _ZN5Botan14GCM_Decryption7processEPhm
// 地址: 0xd81e14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_result

if ((entry_result & 0x3f) != 0)
    Botan::throw_invalid_argument("Invalid buffer size", "process", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0 = *(arg1 + 0x30)
    
    if (*(x0 + 0x40) - *(x0 + 0x38) == 0x10)
        *(x0 + 0xa0) += entry_result
        Botan::GHASH::ghash_update(x0, x0 + 0x38, arg2)
        int64_t* x0_1 = *(arg1 + 0x28)
        (*(*x0_1 + 0x30))(x0_1, arg2, arg2, entry_result)
        return entry_result

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_3
uint64_t x1_3
x0_3, x1_3 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
return Botan::GCM_Decryption::finish(x0_3, x1_3) __tailcall
