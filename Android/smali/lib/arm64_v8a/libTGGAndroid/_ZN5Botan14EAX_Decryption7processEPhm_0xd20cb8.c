// 函数: _ZN5Botan14EAX_Decryption7processEPhm
// 地址: 0xd20cb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x48) == *(arg1 + 0x40))
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_3
    uint64_t x1_1
    x0_3, x1_1 = Botan::throw_invalid_state("m_nonce_mac.size() > 0", "process", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    return Botan::EAX_Decryption::finish(x0_3, x1_1) __tailcall

(*(**(arg1 + 0x20) + 0x18))()
int64_t* x0_1 = *(arg1 + 0x18)
int64_t entry_result
(*(*x0_1 + 0x30))(x0_1, arg2, arg2, entry_result)
return entry_result
