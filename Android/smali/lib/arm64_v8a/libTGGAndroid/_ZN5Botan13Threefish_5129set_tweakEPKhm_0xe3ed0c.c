// 函数: _ZN5Botan13Threefish_5129set_tweakEPKhm
// 地址: 0xe3ed0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 != 0x10)
    uint8_t* x0_1
    uint64_t x1_1
    x0_1, x1_1 = Botan::throw_invalid_argument("Threefish-512 requires 128 bit tweak", "set_tweak", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    return Botan::Threefish_512::key_schedule(x0_1, x1_1) __tailcall

void* x20_1 = &arg1[8]
int64_t* x8 = *x20_1
void* x9_1 = *(x20_1 + 8) - x8

if (x9_1 s>> 3 u<= 2)
    std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::__append(x20_1)
    x8 = *x20_1
else if (x9_1 != 0x18)
    *(arg1 + 0x10) = &x8[3]

*x8 = *arg2
*(*x20_1 + 8) = *(arg2 + 8)
int64_t* x8_2 = *x20_1
x8_2[2] = x8_2[1] ^ *x8_2
