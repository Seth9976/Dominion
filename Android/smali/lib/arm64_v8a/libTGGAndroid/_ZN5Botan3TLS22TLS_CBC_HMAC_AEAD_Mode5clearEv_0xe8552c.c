// 函数: _ZN5Botan3TLS22TLS_CBC_HMAC_AEAD_Mode5clearEv
// 地址: 0xe8552c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 0x68) + 0x10))()
void* x0_1 = *(entry_x0 + 0x70)

if (x0_1 == 0)
    Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)
    return Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::reset() __tailcall

int64_t result = (*(*(x0_1 + 8) + 0x10))()
int64_t x9 = *(entry_x0 + 0x90)
int64_t x10 = *(entry_x0 + 0xa8)
*(entry_x0 + 0x80) = *(entry_x0 + 0x78)
*(entry_x0 + 0x98) = x9
*(entry_x0 + 0xb0) = x10
return result
