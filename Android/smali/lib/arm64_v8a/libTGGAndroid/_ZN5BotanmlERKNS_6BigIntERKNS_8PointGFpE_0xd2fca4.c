// 函数: _ZN5BotanmlERKNS_6BigIntERKNS_8PointGFpE
// 地址: 0xd2fca4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = Botan::BigInt::bits()
void* x0_1 = operator new(0x140)
void* var_48 = x0_1 + 0x140
__builtin_memset(x0_1, 0, 0x20)
*(x0_1 + 0x18) = -1
*(x0_1 + 0x20) = 0
*(x0_1 + 0x20) = 1
__builtin_memset(x0_1 + 0x28, 0, 0x20)
*(x0_1 + 0x40) = -1
*(x0_1 + 0x48) = 0
*(x0_1 + 0x48) = 1
__builtin_memset(x0_1 + 0x50, 0, 0x20)
*(x0_1 + 0x68) = -1
*(x0_1 + 0x70) = 0
*(x0_1 + 0x70) = 1
__builtin_memset(x0_1 + 0x78, 0, 0x20)
*(x0_1 + 0x90) = -1
*(x0_1 + 0x98) = 0
*(x0_1 + 0x98) = 1
__builtin_memset(x0_1 + 0xa0, 0, 0x20)
*(x0_1 + 0xb8) = -1
*(x0_1 + 0xc0) = 0
*(x0_1 + 0xc0) = 1
__builtin_memset(x0_1 + 0xc8, 0, 0x20)
*(x0_1 + 0xe0) = -1
*(x0_1 + 0xe8) = 0
*(x0_1 + 0xe8) = 1
__builtin_memset(x0_1 + 0xf0, 0, 0x20)
*(x0_1 + 0x108) = -1
*(x0_1 + 0x110) = 0
*(x0_1 + 0x110) = 1
__builtin_memset(x0_1 + 0x118, 0, 0x28)
*(x0_1 + 0x130) = -1
*(x0_1 + 0x138) = 1
void var_168
Botan::PointGFp::PointGFp(&var_168)
void var_e0
Botan::PointGFp::PointGFp(&var_e0)

for (; i != 0; i -= 1)
    int64_t x8_1 = *arg1
    uint64_t x9_1 = (i - 1) u>> 5
    int32_t x8_2
    
    if (x9_1 u>= (*(arg1 + 8) - x8_1) s>> 2)
        x8_2 = 0
    else
        x8_2 = *(x8_1 + (x9_1 << 2))
    
    uint64_t x8_4 = zx.q(x8_2 u>> (i.d - 1)) & 1
    void* x21 = &var_168 + mulu.dp.d(x8_4.d, 0x88)
    Botan::PointGFp::add(&var_168 + (x8_4 ^ 1) * 0x88, x21)
    Botan::PointGFp::mult2(x21)

if (*(arg1 + 0x20) == 0)
    Botan::PointGFp::negate()

Botan::PointGFp* entry_x8
Botan::PointGFp::PointGFp(entry_x8)
Botan::PointGFp::~PointGFp()
int64_t result = Botan::PointGFp::~PointGFp()

if (x0_1 == 0)
    return result

void* x8_6 = x0_1 + 0x140
void* x0_8

if (x8_6 == x0_1)
    x0_8 = x0_1
else
    void* x20_1 = x8_6
    
    do
        x20_1 -= 0x28
        void* x0_7 = *x20_1
        
        if (x0_7 != 0)
            int64_t x9_4 = *(x8_6 - 0x18)
            *(x8_6 - 0x20) = x0_7
            Botan::deallocate_memory(x0_7, (x9_4 - x0_7) s>> 2, 4)
        
        x8_6 = x20_1
    while (x0_1 != x20_1)
    
    x0_8 = x0_1

void* var_50_1 = x0_1
return operator delete(x0_8)
