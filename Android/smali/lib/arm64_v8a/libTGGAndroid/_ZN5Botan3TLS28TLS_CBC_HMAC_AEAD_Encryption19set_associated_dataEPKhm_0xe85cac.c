// 函数: _ZN5Botan3TLS28TLS_CBC_HMAC_AEAD_Encryption19set_associated_dataEPKhm
// 地址: 0xe85cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::set_associated_data(arg1, arg2)

if (zx.d(arg1[0x60]) != 0)
    int64_t x8_1 = *(arg1 + 0x58)
    
    if (x8_1 == 0)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0
        uint64_t x1
        uint64_t x2
        x0, x1, x2 = Botan::throw_invalid_argument("align_to must not be 0", "round_up", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
        return Botan::TLS::TLS_CBC_HMAC_AEAD_Encryption::cbc_encrypt_record(x0, x1, x2) __tailcall
    
    void* x9_1 = *(arg1 + 0x90)
    int64_t x10_5 = *(arg1 + 0x48) + _byteswap(zx.q(*(x9_1 + 0xb)) << 0x30) + 1
    int64_t x11_3 = x10_5 u% x8_1
    int64_t x8_3
    
    if (x11_3 == 0)
        x8_3 = 0
    else
        x8_3 = x8_1 - x11_3
    
    int64_t x8_4 = x8_3 + x10_5
    *(x9_1 + 0xb) = (x8_4 u>> 8).b
    *(*(arg1 + 0x90) + 0xc) = (x8_4.d).b

return result
