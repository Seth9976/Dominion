// 函数: _ZN5Botan11SecureQueueC1Ev
// 地址: 0xd7d4b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::Filter + 0x10
*(entry_x0 + 8) = zx.o(0)
__builtin_memset(&entry_x0[3], 0, 0x20)
std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(&entry_x0[4])
int64_t x22 = entry_x0[4]
__builtin_memset(&entry_x0[7], 0, 0x11)
*entry_x0 = _vtable_for_Botan::SecureQueue + 0x10
entry_x0[0xa] = _vtable_for_Botan::SecureQueue + 0x88
entry_x0[0xb] = 0
entry_x0[5] = x22
int64_t* x0_1 = operator new(0x30)
__builtin_memset(&x0_1[1], 0, 0x18)
int64_t x0_2 = Botan::allocate_memory(0x400, 1)
x0_1[1] = x0_2
x0_1[3] = x0_2 + 0x400
int64_t result = memset(x0_2, 0, 0x400)
x0_1[2] = x0_2 + 0x400
*x0_1 = 0
x0_1[4] = 0
x0_1[5] = 0
entry_x0[0xc] = x0_1
entry_x0[0xd] = x0_1
return result
