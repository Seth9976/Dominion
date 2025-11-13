// 函数: _ZN5Botan31PointGFp_Multi_Point_PrecomputeC1ERKNS_8PointGFpES3_
// 地址: 0xd34384
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x0 = operator new(0x140)
void* __offset(std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >, 0x140) var_38 =
    x0 + 0x140
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
std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> > var_d0
Botan::PointGFp::PointGFp(&var_d0)
Botan::PointGFp::mult2(&var_d0)
std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> > var_158
Botan::PointGFp::PointGFp(&var_158)
Botan::PointGFp::add(&var_158, arg2)
void var_1e0
Botan::PointGFp::PointGFp(&var_1e0)
Botan::PointGFp::mult2(&var_1e0)
void var_268
Botan::PointGFp::PointGFp(&var_268)
std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >* entry_x2
Botan::PointGFp::add(&var_268, entry_x2)
std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::reserve(arg1)
Botan::PointGFp* x22 = *(arg1 + 8)
void* __offset(Botan::PointGFp, 0x88) x22_1

if (x22 != *(arg1 + 0x10))
    Botan::PointGFp::PointGFp(x22)
    x22_1 = x22 + 0x88
    *(arg1 + 8) = x22_1
    
    if (x22_1 == *(arg1 + 0x10))
        goto label_d34558
    
    goto label_d344e8

std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::__push_back_slow_path<Botan::PointGFp const&>(
    arg1)
x22_1 = *(arg1 + 8)
void* __offset(Botan::PointGFp, 0x110) x22_2

if (x22_1 == *(arg1 + 0x10))
label_d34558:
    std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::__push_back_slow_path<Botan::PointGFp const&>(
        arg1)
    x22_2 = *(arg1 + 8)
    
    if (x22_2 != *(arg1 + 0x10))
        goto label_d34508
    
    goto label_d34570

label_d344e8:
Botan::PointGFp::PointGFp(x22_1)
x22_2 = x22_1 + 0x88
*(arg1 + 8) = x22_2
void* __offset(Botan::PointGFp, 0x198) x22_3

if (x22_2 == *(arg1 + 0x10))
label_d34570:
    std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::__push_back_slow_path<Botan::PointGFp const&>(
        arg1)
    x22_3 = *(arg1 + 8)
    
    if (x22_3 != *(arg1 + 0x10))
        Botan::PointGFp::PointGFp(x22_3)
        *(arg1 + 8) = x22_3 + 0x88
    else
        std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::__push_back_slow_path<Botan::PointGFp const&>(
            arg1)
else
label_d34508:
    Botan::PointGFp::PointGFp(x22_2)
    x22_3 = x22_2 + 0x88
    *(arg1 + 8) = x22_3
    
    if (x22_3 == *(arg1 + 0x10))
        std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::__push_back_slow_path<Botan::PointGFp const&>(
            arg1)
    else
        Botan::PointGFp::PointGFp(x22_3)
        *(arg1 + 8) = x22_3 + 0x88
Botan::PointGFp var_2f0
Botan::PointGFp::PointGFp(&var_2f0)
Botan::PointGFp::add(&var_2f0, arg2)
sub_d34c24(arg1, &var_2f0)
Botan::PointGFp::~PointGFp()
Botan::PointGFp::PointGFp(&var_2f0)
Botan::PointGFp::add(&var_2f0, &var_d0)
sub_d34c24(arg1, &var_2f0)
Botan::PointGFp::~PointGFp()
Botan::PointGFp::PointGFp(&var_2f0)
Botan::PointGFp::add(&var_2f0, &var_158)
sub_d34c24(arg1, &var_2f0)
Botan::PointGFp::~PointGFp()
Botan::PointGFp* x21_1 = *(arg1 + 8)

if (x21_1 == *(arg1 + 0x10))
    std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::__push_back_slow_path<Botan::PointGFp const&>(
        arg1)
else
    Botan::PointGFp::PointGFp(x21_1)
    *(arg1 + 8) = x21_1 + 0x88

Botan::PointGFp::PointGFp(&var_2f0)
Botan::PointGFp::add(&var_2f0, arg2)
sub_d34c24(arg1, &var_2f0)
Botan::PointGFp::~PointGFp()
Botan::PointGFp::PointGFp(&var_2f0)
Botan::PointGFp::add(&var_2f0, &var_d0)
sub_d34c24(arg1, &var_2f0)
Botan::PointGFp::~PointGFp()
Botan::PointGFp::PointGFp(&var_2f0)
Botan::PointGFp::add(&var_2f0, &var_158)
sub_d34c24(arg1, &var_2f0)
Botan::PointGFp::~PointGFp()
Botan::PointGFp* x21_2 = *(arg1 + 8)

if (x21_2 == *(arg1 + 0x10))
    std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::__push_back_slow_path<Botan::PointGFp const&>(
        arg1)
else
    Botan::PointGFp::PointGFp(x21_2)
    *(arg1 + 8) = x21_2 + 0x88

Botan::PointGFp::PointGFp(&var_2f0)
Botan::PointGFp::add(&var_2f0, arg2)
sub_d34c24(arg1, &var_2f0)
Botan::PointGFp::~PointGFp()
Botan::PointGFp::PointGFp(&var_2f0)
Botan::PointGFp::add(&var_2f0, &var_d0)
sub_d34c24(arg1, &var_2f0)
Botan::PointGFp::~PointGFp()
Botan::PointGFp::PointGFp(&var_2f0)
Botan::PointGFp::add(&var_2f0, &var_158)
sub_d34c24(arg1, &var_2f0)
Botan::PointGFp::~PointGFp()
void* x8_13 = *arg1
int64_t x9 = *(arg1 + 8)
char x8_14

if (x8_13 == x9)
label_d34844:
    *(x0 + 0x18) = -1
    Botan::PointGFp::force_all_affine(arg1, x0)
    x8_14 = 1
else
    int32_t x10_1 = 1
    
    do
        int64_t x11_1 = *(x8_13 + 0x78)
        
        if (x11_1 == -1)
            int64_t x12_1 = *(x8_13 + 0x60)
            int64_t x14_1 = *(x8_13 + 0x68)
            int64_t x13_1 = x14_1 - x12_1
            
            if (x14_1 == x12_1)
                x11_1 = 0
            else
                int64_t x15_1
                
                x15_1 = x13_1 s>= 0 ? x13_1 : -1
                
                int64_t x14_2 = x12_1 - x14_1
                int64_t x15_2
                
                x15_2 = x15_1 s< 1 ? x15_1 : 1
                
                x11_1 = x13_1 s>> 2
                int64_t x13_2
                
                x13_2 = x14_2 s> x13_1 ? x14_2 : x13_1
                
                int64_t i_1 = x15_2 * (x13_2 u>> 2)
                uint64_t x14_3 = 1
                int64_t i
                
                do
                    int32_t x15_3 = *(x12_1 - 4 + (i_1 << 2))
                    i = i_1
                    i_1 -= 1
                    x14_3 = zx.q(x14_3.d) & zx.q(((x15_3 - 1) & not.d(x15_3)) s>> 0x1f)
                    x11_1 -= x14_3
                while (i != 1)
            
            *(x8_13 + 0x78) = x11_1
        
        x8_13 += 0x88
        x10_1 &= x11_1 != 0 ? 1 : 0
    while (x8_13 != x9)
    
    if ((x10_1 & 1) != 0)
        goto label_d34844
    
    x8_14 = 0

*(arg1 + 0x18) = x8_14
Botan::PointGFp::~PointGFp()
Botan::PointGFp::~PointGFp()
Botan::PointGFp::~PointGFp()
int64_t result = Botan::PointGFp::~PointGFp()

if (x0 == 0)
    return result

void* __offset(std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >, 0x140) x8_15 =
    x0 + 0x140
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x0_51

if (x8_15 == x0)
    x0_51 = x0
else
    void* __offset(std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >, 0x140) 
        x20_1 = x8_15
    
    do
        x20_1 -= 0x28
        void* x0_50 = *x20_1
        
        if (x0_50 != 0)
            int64_t x9_1 = *(x8_15 - 0x18)
            *(x8_15 - 0x20) = x0_50
            Botan::deallocate_memory(x0_50, (x9_1 - x0_50) s>> 2, 4)
        
        x8_15 = x20_1
    while (x0 != x20_1)
    
    x0_51 = x0

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* var_40_1 = x0
return operator delete(x0_51)
