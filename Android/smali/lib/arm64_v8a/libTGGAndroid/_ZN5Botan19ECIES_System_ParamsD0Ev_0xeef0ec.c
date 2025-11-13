// 函数: _ZN5Botan19ECIES_System_ParamsD0Ev
// 地址: 0xeef0ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[0xc].b)
*entry_x0 = _vtable_for_Botan::ECIES_System_Params + 0x10

if ((x8 & 1) != 0)
    operator delete(entry_x0[0xe])

if ((zx.d(entry_x0[8].b) & 1) != 0)
    operator delete(entry_x0[0xa])

uint32_t x8_2 = zx.d(entry_x0[3].b)
*entry_x0 = _vtable_for_Botan::ECIES_KA_Params + 0x10

if ((x8_2 & 1) != 0)
    operator delete(entry_x0[5])

int64_t* x20 = entry_x0[2]

if (x20 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20[1])
        i = __stlxr(x9_2 - 1, &x20[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()
        return operator delete(entry_x0) __tailcall

return operator delete(entry_x0) __tailcall
