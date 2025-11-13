// 函数: _ZN5Botan8PointGFppLERKS0_
// 地址: 0xd2f2d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = operator new(0x140)
void* var_28 = x0 + 0x140
__builtin_memset(x0, 0, 0x20)
*(x0 + 0x18) = -1
*(x0 + 0x20) = 0
*(x0 + 0x20) = 1
__builtin_memset(x0 + 0x28, 0, 0x20)
*(x0 + 0x40) = -1
*(x0 + 0x48) = 0
*(x0 + 0x48) = 1
__builtin_memset(x0 + 0x50, 0, 0x20)
*(x0 + 0x68) = -1
*(x0 + 0x70) = 0
*(x0 + 0x70) = 1
__builtin_memset(x0 + 0x78, 0, 0x20)
*(x0 + 0x90) = -1
*(x0 + 0x98) = 0
*(x0 + 0x98) = 1
__builtin_memset(x0 + 0xa0, 0, 0x20)
*(x0 + 0xb8) = -1
*(x0 + 0xc0) = 0
*(x0 + 0xc0) = 1
__builtin_memset(x0 + 0xc8, 0, 0x20)
*(x0 + 0xe0) = -1
*(x0 + 0xe8) = 0
*(x0 + 0xe8) = 1
__builtin_memset(x0 + 0xf0, 0, 0x20)
*(x0 + 0x108) = -1
*(x0 + 0x110) = 0
*(x0 + 0x110) = 1
__builtin_memset(x0 + 0x118, 0, 0x28)
*(x0 + 0x130) = -1
*(x0 + 0x138) = 1
std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >* entry_x1
Botan::PointGFp::add(arg1, entry_x1)

if (x0 != 0)
    void* x8_1 = x0 + 0x140
    void* x0_3
    
    if (x8_1 == x0)
        x0_3 = x0
    else
        void* x21_1 = x8_1
        
        do
            x21_1 -= 0x28
            void* x0_2 = *x21_1
            
            if (x0_2 != 0)
                int64_t x9_1 = *(x8_1 - 0x18)
                *(x8_1 - 0x20) = x0_2
                Botan::deallocate_memory(x0_2, (x9_1 - x0_2) s>> 2, 4)
            
            x8_1 = x21_1
        while (x0 != x21_1)
        
        x0_3 = x0
    
    void* var_30_1 = x0
    operator delete(x0_3)

return arg1
