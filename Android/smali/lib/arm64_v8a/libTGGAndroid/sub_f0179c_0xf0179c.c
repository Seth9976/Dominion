// 函数: sub_f0179c
// 地址: 0xf0179c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 != 0x40)
    return 0

void* x9 = *(arg1 + 0x20)
uint8_t* x3 = *(x9 + 8)

if (*(x9 + 0x10) - x3 != 0x20)
    return sub_f01824(Botan::assertion_failure("pub_key.size() == 32", "Expected size", 
        "is_valid_signature", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x7e1d))
        __tailcall

uint8_t* x0 = *(arg1 + 8)
int32_t x0_1 = Botan::ed25519_verify(x0, *(arg1 + 0x10) - x0, arg2, x3, nullptr, 0)
*(arg1 + 0x10) = *(arg1 + 8)
return zx.q(x0_1) & 1
