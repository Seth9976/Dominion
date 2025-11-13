// 函数: _ZN5Botan4PipeD1Ev
// 地址: 0xd7b9f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Filter* entry_x0
*(entry_x0 + 8)
*entry_x0 = _vtable_for_Botan::Pipe + 0x10
int64_t result = Botan::Pipe::destruct(entry_x0)
void* x19 = *(entry_x0 + 0x10)
*(entry_x0 + 0x10) = 0

if (x19 == 0)
    return result

std::__ndk1::__deque_base<std::__ndk1::unique_ptr<Botan::SecureQueue, std::__ndk1::default_delete<Botan::SecureQueue> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::SecureQueue, std::__ndk1::default_delete<Botan::SecureQueue> > > >::clear()
int64_t* x20_1 = *(x19 + 8)
int64_t x21 = *(x19 + 0x10)

if (x20_1 != x21)
    do
        void* x0_1 = *x20_1
        x20_1 = &x20_1[1]
        operator delete(x0_1)
    while (x21 != x20_1)
    
    int64_t x9_1 = *(x19 + 8)
    int64_t x8_1 = *(x19 + 0x10)
    
    if (x8_1 != x9_1)
        *(x19 + 0x10) = x8_1 + ((-1 ^ (x8_1 - x9_1 - 8) u>> 3) << 3)

void* x0_2 = *x19

if (x0_2 != 0)
    operator delete(x0_2)

return operator delete(x19) __tailcall
