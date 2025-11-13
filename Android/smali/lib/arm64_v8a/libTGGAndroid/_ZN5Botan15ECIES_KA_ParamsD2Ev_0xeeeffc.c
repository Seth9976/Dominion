// 函数: _ZN5Botan15ECIES_KA_ParamsD2Ev
// 地址: 0xeeeffc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[3].b)
*entry_x0 = _vtable_for_Botan::ECIES_KA_Params + 0x10

if ((x8 & 1) != 0)
    operator delete(entry_x0[5])

int64_t* x19_1 = entry_x0[2]

if (x19_1 == 0)
    return 

int64_t x9_1
int32_t i

do
    x9_1 = __ldaxr(&x19_1[1])
    i = __stlxr(x9_1 - 1, &x19_1[1])
while (i != 0)

if (x9_1 == 0)
    (*(*x19_1 + 0x10))(x19_1)
    return std::__ndk1::__shared_weak_count::__release_weak() __tailcall
