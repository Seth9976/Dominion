// 函数: _ZN5Botan8Blowfish13key_expansionEPKhmS2_m
// 地址: 0xce769c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x4

if ((entry_x4 & 3) != 0)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x0_3
    uint32_t* x1_2
    uint32_t* x2_2
    uint8_t* x3_2
    uint64_t x4_2
    uint64_t x5_2
    x0_3, x1_2, x2_2, x3_2, x4_2, x5_2 = Botan::assertion_failure("salt_length % 4 == 0", 
        &data_793a18, "key_expansion", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x463d)
    return Botan::Blowfish::generate_sbox(x0_3, x1_2, x2_2, x3_2, x4_2, x5_2) __tailcall

for (int64_t i = 0; i != 0x48; i += 4)
    int32_t* x13_1 = *(arg1 + 0x20)
    int32_t x9_7 = (0xffff00ff & ((0xff00ffff & zx.d(*(arg2 + i u% arg3)) << 0x18)
        | zx.d(*(arg2 + (i + 1) u% arg3)) << 0x10)) | zx.d(*(arg2 + (i + 2) u% arg3)) << 8
        | zx.d(*(arg2 + (i + 3) u% arg3))
    *(x13_1 + i) ^= x9_7

int64_t var_28 = 0
Botan::Blowfish::generate_sbox(arg1, &arg1[0x20], &var_28:4, &var_28, arg4, entry_x4)
return Botan::Blowfish::generate_sbox(arg1, &arg1[8], &var_28:4, &var_28, arg4, entry_x4)
