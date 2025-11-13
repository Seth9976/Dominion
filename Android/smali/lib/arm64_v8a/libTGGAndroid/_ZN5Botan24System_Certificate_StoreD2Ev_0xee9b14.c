// 函数: _ZN5Botan24System_Certificate_StoreD2Ev
// 地址: 0xee9b14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x19 = entry_x0[2]
*entry_x0 = _vtable_for_Botan::System_Certificate_Store + 0x10

if (x19 == 0)
    return 

int64_t x9_1
int32_t i

do
    x9_1 = __ldaxr(&x19[1])
    i = __stlxr(x9_1 - 1, &x19[1])
while (i != 0)

if (x9_1 == 0)
    (*(*x19 + 0x10))(x19)
    return std::__ndk1::__shared_weak_count::__release_weak() __tailcall
