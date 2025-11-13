// 函数: sub_f095bc
// 地址: 0xf095bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg1[3]

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

int64_t* result = arg1[1]
*arg1 = _vtable_for_Botan::PK_Ops::Encryption_with_EME + 0x10
arg1[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
