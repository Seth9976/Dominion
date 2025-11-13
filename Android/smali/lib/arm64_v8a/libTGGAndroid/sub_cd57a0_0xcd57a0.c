// 函数: sub_cd57a0
// 地址: 0xcd57a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Blowfish::salted_set_key(arg1, arg2, arg3 - arg2, arg4, arg5 - arg4, true)
int64_t x8 = *arg7

if (x8 == 0)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    return Botan::Blowfish::~Blowfish() __tailcall

int64_t i_1 = 0x40
__builtin_strncpy(x8, "OxychromaticBlowfishSwatDynamite", 0x20)
int64_t result
int64_t i

do
    int64_t x22_1 = *arg7
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    result, v0_1, v1_1, v2_1, v3_1 =
        (*(*arg1 + 0x48))(arg1, x22_1, x22_1, (arg7[1] - x22_1) u/ (*(*arg1 + 0x30))(arg1))
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t* x8_5 = *arg7
*x8_5 = _byteswap(*x8_5)
void* x8_6 = *arg7
*(x8_6 + 4) = _byteswap(*(x8_6 + 4))
void* x8_7 = *arg7
*(x8_7 + 8) = _byteswap(*(x8_7 + 8))
void* x8_8 = *arg7
*(x8_8 + 0xc) = _byteswap(*(x8_8 + 0xc))
void* x8_9 = *arg7
*(x8_9 + 0x10) = _byteswap(*(x8_9 + 0x10))
void* x8_10 = *arg7
*(x8_10 + 0x14) = _byteswap(*(x8_10 + 0x14))
void* x8_11 = *arg7
*(x8_11 + 0x18) = _byteswap(*(x8_11 + 0x18))
void* x8_12 = *arg7
*(x8_12 + 0x1c) = _byteswap(*(x8_12 + 0x1c))
int128_t* x8_13 = *arg6
int128_t* x9_18 = *arg7
int128_t v1_2 = x9_18[1] ^ x8_13[1]
*x8_13 ^= *x9_18
x8_13[1] = v1_2
return result
