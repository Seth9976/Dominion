// 函数: sub_f02098
// 地址: 0xf02098
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg1[5]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::ElGamal_Encryption_Operation{for `Botan::PK_Ops::Encryption_with_EME'}
int64_t x9_1

if (x20 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)

int64_t* x20_1

if (x20 != 0 && x9_1 == 0)
    (*(*x20 + 0x10))(x20)
    std::__ndk1::__shared_weak_count::__release_weak()
    x20_1 = arg1[3]
    
    if (x20_1 != 0)
        goto label_f020e8
else
    x20_1 = arg1[3]
    
    if (x20_1 != 0)
    label_f020e8:
        int64_t x9_2
        int32_t i_1
        
        do
            x9_2 = __ldaxr(&x20_1[1])
            i_1 = __stlxr(x9_2 - 1, &x20_1[1])
        while (i_1 != 0)
        
        if (x9_2 == 0)
            (*(*x20_1 + 0x10))(x20_1)
            std::__ndk1::__shared_weak_count::__release_weak()
int64_t* x0_4 = arg1[1]
*arg1 = _vtable_for_Botan::PK_Ops::Encryption_with_EME + 0x10
arg1[1] = 0

if (x0_4 != 0)
    (*(*x0_4 + 8))()

return operator delete(arg1) __tailcall
