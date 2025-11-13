// 函数: sub_ef71fc
// 地址: 0xef71fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[0x11]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::DSA_Signature_Operation{for `Botan::PK_Ops::Signature_with_EMSA'}

if (x0 != 0)
    int64_t x8_1 = arg1[0x13]
    arg1[0x12] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = arg1[0xc]

if (x0_1 != 0)
    int64_t x8_3 = arg1[0xe]
    arg1[0xd] = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 2, 4)

if ((zx.d(arg1[9].b) & 1) != 0)
    operator delete(arg1[0xb])

int64_t* x20 = arg1[7]

if (x20 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

uint32_t x8_9 = zx.d(arg1[2].b)
*arg1 = _vtable_for_Botan::PK_Ops::Signature_with_EMSA + 0x10

if ((x8_9 & 1) != 0)
    operator delete(arg1[4])

int64_t* result = arg1[1]
arg1[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
