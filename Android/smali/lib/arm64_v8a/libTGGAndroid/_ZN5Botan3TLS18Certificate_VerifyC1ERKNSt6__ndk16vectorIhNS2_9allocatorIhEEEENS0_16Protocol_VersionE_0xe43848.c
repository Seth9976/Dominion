// 函数: _ZN5Botan3TLS18Certificate_VerifyC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEENS0_16Protocol_VersionE
// 地址: 0xe43848
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t entry_x2
uint32_t x8 = zx.d(entry_x2)
*arg1 = _vtable_for_Botan::TLS::Certificate_Verify + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
char const* const var_38 = "CertificateVerify"
int64_t* var_30 = arg2
int64_t var_28 = 0

if (x8 - 0x301 u>= 2 && x8 != 0xfeff)
    Botan::TLS::TLS_Data_Reader::assert_at_least(&var_38)
    int64_t var_28_1 = var_28 + 2
    *(arg1 + 0x20) = (_byteswap(zx.d(*(*var_30 + var_28))) u>> 0x10).w

Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_38, 2, 0)
void* x0_2 = *(arg1 + 8)

if (x0_2 != 0)
    *(arg1 + 0x10) = x0_2
    operator delete(x0_2)
    __builtin_memset(arg1 + 8, 0, 0x18)

int128_t var_50
*(arg1 + 8) = var_50
int64_t var_40
*(arg1 + 0x18) = var_40
return Botan::TLS::TLS_Data_Reader::assert_done()
