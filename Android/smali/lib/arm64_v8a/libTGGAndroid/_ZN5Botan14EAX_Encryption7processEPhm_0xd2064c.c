// 函数: _ZN5Botan14EAX_Encryption7processEPhm
// 地址: 0xd2064c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x48) == *(arg1 + 0x40))
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_3
    uint64_t x1_1
    x0_3, x1_1 = Botan::throw_invalid_state("m_nonce_mac.size() > 0", "process", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    return Botan::EAX_Encryption::finish(x0_3, x1_1) __tailcall

int64_t* x0 = *(arg1 + 0x18)
int64_t entry_result
(*(*x0 + 0x30))(x0, arg2, arg2, entry_result)
int64_t* x0_1 = *(arg1 + 0x20)
(*(*x0_1 + 0x18))(x0_1, arg2, entry_result)
return entry_result
