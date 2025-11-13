// 函数: sub_f03ec8
// 地址: 0xf03ec8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1[9]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::GOST_3410_Signature_Operation{for `Botan::PK_Ops::Signature_with_EMSA'}

if (x20 != 0)
    int64_t* x8_1 = arg1[0xa]
    void* x0_1
    
    if (x8_1 == x20)
        x0_1 = x20
    else
        int64_t* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-5]
            void* x0 = *x21_1
            
            if (x0 != 0)
                int64_t x9_1 = x8_1[-3]
                x8_1[-4] = x0
                Botan::deallocate_memory(x0, (x9_1 - x0) s>> 2, 4)
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_1 = arg1[9]
    
    arg1[0xa] = x20
    operator delete(x0_1)

int64_t* x20_1 = arg1[7]

if (x20_1 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20_1[1])
        i = __stlxr(x9_2 - 1, &x20_1[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        std::__ndk1::__shared_weak_count::__release_weak()

uint32_t x8_6 = zx.d(arg1[2].b)
*arg1 = _vtable_for_Botan::PK_Ops::Signature_with_EMSA + 0x10

if ((x8_6 & 1) != 0)
    operator delete(arg1[4])

int64_t* result = arg1[1]
arg1[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
