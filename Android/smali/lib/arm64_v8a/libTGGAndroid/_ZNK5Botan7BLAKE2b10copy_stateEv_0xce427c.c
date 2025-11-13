// 函数: _ZNK5Botan7BLAKE2b10copy_stateEv
// 地址: 0xce427c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0x68)
void* entry_x0
int64_t x8 = *(entry_x0 + 8)
*x0 = _vtable_for_Botan::BLAKE2b + 0x10
x0[1] = x8
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&x0[2])
x0[5] = *(entry_x0 + 0x28)
int64_t result
int128_t v0
int128_t v1
result, v0, v1 = std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::vector(&x0[6])
v0 = *(entry_x0 + 0x58)
v1 = *(entry_x0 + 0x48)
void** entry_x8
*entry_x8 = x0
*(x0 + 0x58) = v0
*(x0 + 0x48) = v1
return result
