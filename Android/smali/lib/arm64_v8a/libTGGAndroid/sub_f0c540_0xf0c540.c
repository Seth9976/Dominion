// 函数: sub_f0c540
// 地址: 0xf0c540
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Blinder::~Blinder()
int64_t* x20 = *(arg1 + 0x48)
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
    x20_1 = *(arg1 + 0x38)
    
    if (x20_1 != 0)
        goto label_f0c58c
else
    x20_1 = *(arg1 + 0x38)
    
    if (x20_1 != 0)
    label_f0c58c:
        int64_t x9_2
        int32_t i_1
        
        do
            x9_2 = __ldaxr(&x20_1[1])
            i_1 = __stlxr(x9_2 - 1, &x20_1[1])
        while (i_1 != 0)
        
        if (x9_2 == 0)
            (*(*x20_1 + 0x10))(x20_1)
            std::__ndk1::__shared_weak_count::__release_weak()
uint32_t x8_7 = zx.d(*(arg1 + 0x10))
*arg1 = _vtable_for_Botan::PK_Ops::Signature_with_EMSA + 0x10

if ((x8_7 & 1) != 0)
    operator delete(*(arg1 + 0x20))

int64_t* x0_6 = *(arg1 + 8)
*(arg1 + 8) = 0

if (x0_6 != 0)
    (*(*x0_6 + 8))()

return operator delete(arg1) __tailcall
