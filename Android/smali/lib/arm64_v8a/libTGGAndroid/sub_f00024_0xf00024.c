// 函数: sub_f00024
// 地址: 0xf00024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[0xc]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::ECKCDSA_Verification_Operation{for `Botan::PK_Ops::Verification_with_EMSA'}

if (x0 != 0)
    int64_t x8_1 = arg1[0xe]
    arg1[0xd] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x21 = arg1[8]

if (x21 != 0)
    int64_t x20_1 = arg1[9]
    void* x0_2
    
    if (x20_1 == x21)
        x0_2 = x21
    else
        do
            x20_1 -= 0x88
            Botan::PointGFp::~PointGFp()
        while (x21 != x20_1)
        
        x0_2 = arg1[8]
    
    arg1[9] = x21
    operator delete(x0_2)

int64_t* x20_2 = arg1[7]

if (x20_2 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20_2[1])
        i = __stlxr(x9_1 - 1, &x20_2[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20_2 + 0x10))(x20_2)
        std::__ndk1::__shared_weak_count::__release_weak()

uint32_t x8_5 = zx.d(arg1[2].b)
*arg1 = _vtable_for_Botan::PK_Ops::Verification_with_EMSA + 0x10

if ((x8_5 & 1) != 0)
    operator delete(arg1[4])

int64_t* result = arg1[1]
arg1[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
