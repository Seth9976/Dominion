// 函数: _ZNK5Botan5SHA_310copy_stateEv
// 地址: 0xe2209c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0
int128_t v0
x0, v0 = operator new(0x38)
*x0 = _vtable_for_Botan::SHA_3 + 0x10
void* entry_x0
*(x0 + 8) = *(entry_x0 + 8)
int64_t result = std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::vector(&x0[3])
int64_t x8_1 = *(entry_x0 + 0x30)
void** entry_x8
*entry_x8 = x0
x0[6] = x8_1
return result
