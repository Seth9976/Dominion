// 函数: _ZNK5Botan3TLS28TLS_CBC_HMAC_AEAD_Encryption13output_lengthEm
// 地址: 0xe85e68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
int64_t x8 = entry_x1 + 1
int64_t x9_1
int64_t x10

if (zx.d(*(arg1 + 0x60)) == 0)
    x9_1 = *(arg1 + 0x58)
    
    if (x9_1 == 0)
        Botan::throw_invalid_argument("align_to must not be 0", "round_up", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
        return Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::tag_size() __tailcall
    
    x10 = 0
    x8 += *(arg1 + 0x50)
else
    x9_1 = *(arg1 + 0x58)
    
    if (x9_1 == 0)
        Botan::throw_invalid_argument("align_to must not be 0", "round_up", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
        return Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::tag_size() __tailcall
    
    x10 = *(arg1 + 0x50)

int64_t x11_3 = x8 u% x9_1
int64_t x9_3

if (x11_3 == 0)
    x9_3 = 0
else
    x9_3 = x9_1 - x11_3

return x9_3 + x8 + x10
