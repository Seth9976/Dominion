// 函数: _ZN5Botan3TLS22TLS_CBC_HMAC_AEAD_Mode19assoc_data_with_lenEt
// 地址: 0xe859b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x22 = *(arg1 + 0x90)
int64_t x8 = *(arg1 + 0x98)
uint64_t x23 = x8 - x22

if (x8 == x22)
    Botan::assertion_failure("ad.size() == 13", "Expected AAD size", "assoc_data_with_len", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x158a1)
else if ((x23 & 0xffffffff80000000) == 0)
    void* x0_1 = operator new(x23)
    void* x24_1 = x0_1 + x23
    *entry_x8 = x0_1
    entry_x8[1] = x0_1
    entry_x8[2] = x24_1
    memcpy(x0_1, x22, x23)
    entry_x8[1] = x24_1
    
    if (x24_1 - x0_1 == 0xd)
        int32_t entry_x1
        *(x0_1 + 0xb) = (_byteswap(entry_x1) u>> 0x10).w
        return 
    
    Botan::assertion_failure("ad.size() == 13", "Expected AAD size", "assoc_data_with_len", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x158a1)

int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_4 = *entry_x8

if (x8_4 != 0)
    entry_x8[1] = x8_4
    operator delete(x8_4)

sub_1101e04(x0_3)
noreturn
