// 函数: _ZN5Botan11SecureQueueC1ERKS0_
// 地址: 0xd7d634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(arg1 + 0x20)
int64_t x9 = *(arg1 + 0x20)
__builtin_memset(arg1 + 0x38, 0, 0x11)
*arg1 = _vtable_for_Botan::SecureQueue + 0x10
*(arg1 + 0x50) = _vtable_for_Botan::SecureQueue + 0x88
*(arg1 + 0x58) = 0
*(arg1 + 0x28) = x9
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
*(arg1 + 0x60) = x0_1
*(arg1 + 0x68) = x0_1
void* entry_x1

for (void** i = *(entry_x1 + 0x60); i != 0; i = *i)
    i[5]
    result = Botan::SecureQueue::write(arg1, i[1] + i[4])

return result
