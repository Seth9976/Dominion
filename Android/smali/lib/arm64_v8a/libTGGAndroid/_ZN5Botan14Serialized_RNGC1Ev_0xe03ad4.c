// 函数: _ZN5Botan14Serialized_RNGC1Ev
// 地址: 0xe03ad4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::Serialized_RNG + 0x10
*(entry_x0 + 8) = zx.o(0)
__builtin_memset(&entry_x0[3], 0, 0x18)
Botan::RandomNumberGenerator* x0 = operator new(0x10)
Botan::system_rng()
int64_t result = Botan::AutoSeeded_RNG::AutoSeeded_RNG(x0, &data_23ecbc0)
entry_x0[6] = x0
return result
