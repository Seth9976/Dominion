// 函数: _ZN5Botan8CCM_Mode7processEPhm
// 地址: 0xcf260c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x28) == *(arg1 + 0x20))
    int64_t x0_2
    uint8_t* x1_1
    uint8_t* x2_1
    x0_2, x1_1, x2_1 = Botan::throw_invalid_state("m_nonce.size() > 0", "process", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<uint8_t*>(x0_2, 
        x1_1, x2_1) __tailcall

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<uint8_t*>(&arg1[0x38], 
    *(arg1 + 0x40), arg2)
return 0
