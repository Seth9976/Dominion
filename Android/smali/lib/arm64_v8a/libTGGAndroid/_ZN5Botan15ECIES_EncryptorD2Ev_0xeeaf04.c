// 函数: _ZN5Botan15ECIES_EncryptorD2Ev
// 地址: 0xeeaf04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0x33]
*entry_x0 = _vtable_for_Botan::ECIES_Encryptor + 0x10

if (x0 != 0)
    entry_x0[0x34] = x0
    operator delete(x0)

Botan::PointGFp::~PointGFp()
void* x0_2 = entry_x0[0x1f]

if (x0_2 != 0)
    int64_t x8_1 = entry_x0[0x21]
    entry_x0[0x20] = x0_2
    Botan::deallocate_memory(x0_2, x8_1 - x0_2, 1)

void* x0_3 = entry_x0[0x1c]

if (x0_3 != 0)
    entry_x0[0x1d] = x0_3
    operator delete(x0_3)

int64_t* x0_4 = entry_x0[0x1b]
entry_x0[0x1b] = 0

if (x0_4 != 0)
    (*(*x0_4 + 8))()

int64_t* x0_5 = entry_x0[0x1a]
entry_x0[0x1a] = 0

if (x0_5 != 0)
    (*(*x0_5 + 0x10))()

uint32_t x8_6 = zx.d(entry_x0[0x16].b)
entry_x0[0xa] = _vtable_for_Botan::ECIES_System_Params + 0x10

if ((x8_6 & 1) != 0)
    operator delete(entry_x0[0x18])

if ((zx.d(entry_x0[0x12].b) & 1) != 0)
    operator delete(entry_x0[0x14])

uint32_t x8_8 = zx.d(entry_x0[0xd].b)
entry_x0[0xa] = _vtable_for_Botan::ECIES_KA_Params + 0x10

if ((x8_8 & 1) != 0)
    operator delete(entry_x0[0xf])

int64_t* x20 = entry_x0[0xc]
int64_t x9_2

if (x20 != 0)
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20[1])
        i = __stlxr(x9_2 - 1, &x20[1])
    while (i != 0)

if (x20 != 0 && x9_2 == 0)
    (*(*x20 + 0x10))(x20)
    std::__ndk1::__shared_weak_count::__release_weak()
    uint32_t x8_15 = zx.d(entry_x0[5].b)
    entry_x0[2] = _vtable_for_Botan::ECIES_KA_Params + 0x10
    
    if ((x8_15 & 1) != 0)
        operator delete(entry_x0[7])
else
    uint32_t x8_10 = zx.d(entry_x0[5].b)
    entry_x0[2] = _vtable_for_Botan::ECIES_KA_Params + 0x10
    
    if ((x8_10 & 1) != 0)
        operator delete(entry_x0[7])

int64_t* x20_1 = entry_x0[4]
int64_t x9_4

if (x20_1 != 0)
    int32_t i_1
    
    do
        x9_4 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_4 - 1, &x20_1[1])
    while (i_1 != 0)

int64_t* result

if (x20_1 != 0 && x9_4 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = entry_x0[1]
    entry_x0[1] = 0
    
    if (result != 0)
        jump(*(*result + 0x18))
else
    result = entry_x0[1]
    entry_x0[1] = 0
    
    if (result != 0)
        jump(*(*result + 0x18))

return result
