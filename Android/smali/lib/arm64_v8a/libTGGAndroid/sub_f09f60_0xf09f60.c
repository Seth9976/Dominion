// 函数: sub_f09f60
// 地址: 0xf09f60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 0x38)

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

uint32_t x8_4 = zx.d(*(arg1 + 0x10))
*arg1 = _vtable_for_Botan::PK_Ops::Verification_with_EMSA + 0x10

if ((x8_4 & 1) != 0)
    operator delete(*(arg1 + 0x20))

int64_t* x0_3 = *(arg1 + 8)
*(arg1 + 8) = 0

if (x0_3 != 0)
    (*(*x0_3 + 8))()

return operator delete(arg1) __tailcall
