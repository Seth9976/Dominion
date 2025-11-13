// 函数: sub_d3a078
// 地址: 0xd3a078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0

if ((zx.d(arg7) & 1) == 0)
    x0 = *(arg3 + 0x198)
    
    if (x0 != 0)
        goto label_d3a0f4
    
    goto label_d3a098

operator delete(arg8)
x0 = *(arg3 + 0x198)
void* x0_2

if (x0 == 0)
label_d3a098:
    Botan::PointGFp::~PointGFp()
    x0_2 = *arg5
    
    if (x0_2 != 0)
    label_d3a10c:
        int64_t x8_3 = *(arg3 + 0x108)
        *(arg3 + 0x100) = x0_2
        Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)
else
label_d3a0f4:
    *(arg3 + 0x1a0) = x0
    operator delete(x0)
    Botan::PointGFp::~PointGFp()
    x0_2 = *arg5
    
    if (x0_2 != 0)
        goto label_d3a10c
void* x0_5 = *arg4
int64_t* x0_6

if (x0_5 == 0)
    x0_6 = *(arg3 + 0xd8)
    *(arg3 + 0xd8) = 0
    
    if (x0_6 != 0)
        goto label_d3a268
    
    goto label_d3a134

*(arg3 + 0xe8) = x0_5
operator delete(x0_5)
x0_6 = *(arg3 + 0xd8)
*(arg3 + 0xd8) = 0
int64_t* x0_7

if (x0_6 == 0)
label_d3a134:
    x0_7 = *arg6
    *arg6 = 0
    
    if (x0_7 != 0)
        (*(*x0_7 + 0x10))()
else
label_d3a268:
    (*(*x0_6 + 8))()
    x0_7 = *arg6
    *arg6 = 0
    
    if (x0_7 != 0)
        (*(*x0_7 + 0x10))()
uint32_t x8_6 = zx.d(*(arg3 + 0xb0))
*(arg3 + 0x50) = _vtable_for_Botan::ECIES_System_Params + 0x10

if ((x8_6 & 1) != 0)
    operator delete(*(arg3 + 0xc0))

if ((zx.d(*(arg3 + 0x90)) & 1) != 0)
    operator delete(*(arg3 + 0xa0))

uint32_t x8_8 = zx.d(*(arg3 + 0x68))
*(arg3 + 0x50) = _vtable_for_Botan::ECIES_KA_Params + 0x10

if ((x8_8 & 1) != 0)
    operator delete(*(arg3 + 0x78))

int64_t* x21 = *(arg3 + 0x60)

if (x21 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x21[1])
        i = __stlxr(x9_2 - 1, &x21[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x21 + 0x10))(x21)
        std::__ndk1::__shared_weak_count::__release_weak()

uint32_t x8_12 = zx.d(*(arg3 + 0x28))
*(arg3 + 0x10) = _vtable_for_Botan::ECIES_KA_Params + 0x10

if ((x8_12 & 1) != 0)
    operator delete(*(arg3 + 0x38))

int64_t* x20 = *(arg3 + 0x20)

if (x20 != 0)
    int64_t x9_4
    int32_t i_1
    
    do
        x9_4 = __ldaxr(&x20[1])
        i_1 = __stlxr(x9_4 - 1, &x20[1])
    while (i_1 != 0)
    
    if (x9_4 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x0_16 = *arg2
*arg2 = 0

if (x0_16 != 0)
    (*(*x0_16 + 0x18))()

sub_1101e04(arg1)
noreturn
