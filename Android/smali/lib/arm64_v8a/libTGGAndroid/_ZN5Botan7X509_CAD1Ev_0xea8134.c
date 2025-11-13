// 函数: _ZN5Botan7X509_CAD1Ev
// 地址: 0xea8134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t* x20 = entry_x0[0x1c]
entry_x0[0x1c] = 0

if (x20 != 0)
    int64_t* x0 = *x20
    *x20 = 0
    
    if (x0 != 0)
        (*(*x0 + 0x20))()
    
    operator delete(x20)

if ((zx.d(entry_x0[0x19].b) & 1) != 0)
    operator delete(entry_x0[0x1b])

int64_t* x20_1 = entry_x0[0x18]
entry_x0[8] = _vtable_for_Botan::X509_Certificate + 0x10

if (x20_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20_1[1])
        i = __stlxr(x9_1 - 1, &x20_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_5 = entry_x0[0x14]
entry_x0[8] = _vtable_for_Botan::X509_Object + 0x10

if (x0_5 != 0)
    entry_x0[0x15] = x0_5
    operator delete(x0_5)

void* x0_6 = entry_x0[0x11]

if (x0_6 != 0)
    entry_x0[0x12] = x0_6
    operator delete(x0_6)

void* x0_7 = entry_x0[0xe]
entry_x0[9] = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_7 != 0)
    entry_x0[0xf] = x0_7
    operator delete(x0_7)

void* x0_8 = entry_x0[0xb]
entry_x0[0xa] = _vtable_for_Botan::OID + 0x10

if (x0_8 != 0)
    entry_x0[0xc] = x0_8
    operator delete(x0_8)

void* x0_9 = entry_x0[5]
*entry_x0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_9 != 0)
    entry_x0[6] = x0_9
    operator delete(x0_9)

void* result = entry_x0[2]
entry_x0[1] = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

entry_x0[3] = result
return operator delete(result) __tailcall
