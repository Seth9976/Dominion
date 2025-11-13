// 函数: _ZN5Botan11DER_Encoder10start_consENS_8ASN1_TagES1_
// 地址: 0xcae450
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_58 = arg2
int64_t var_50 = (zx.o(0)).q
int128_t var_40
__builtin_memset(&var_40, 0, 0x20)
int64_t* x8 = *(arg1 + 0x50)
void* result = arg1

if (x8 u>= *(arg1 + 0x58))
    std::__ndk1::vector<Botan::DER_Encoder::DER_Sequence, std::__ndk1::allocator<Botan::DER_Encoder::DER_Sequence> >::__push_back_slow_path<Botan::DER_Encoder::DER_Sequence>(
        result + 0x48)
else
    __builtin_memset(&x8[1], 0, 0x30)
    int64_t v0 = *x8
    *x8 = arg2
    int32_t entry_x2
    *(x8 + 4) = entry_x2
    var_58.q = v0
    __builtin_memset(&x8[1], 0, 0x30)
    var_50 = 0
    __builtin_memset(&var_40, 0, 0x20)
    *(result + 0x50) = &x8[7]

int64_t x0_2 = var_50

if (x0_2 != 0)
    var_50 = x0_2
    Botan::deallocate_memory(x0_2, 0 - x0_2, 1)

return result
