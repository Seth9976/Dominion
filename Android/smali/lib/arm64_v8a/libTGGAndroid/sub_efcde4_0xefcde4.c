// 函数: sub_efcde4
// 地址: 0xefcde4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1[0xa]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::ECDH_KA_Operation{for `Botan::PK_Ops::Key_Agreement_with_KDF'}

if (x20 != 0)
    int64_t* x8_1 = arg1[0xb]
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
        
        x0_1 = arg1[0xa]
    
    arg1[0xb] = x20
    operator delete(x0_1)

void* x0_2 = arg1[4]

if (x0_2 != 0)
    int64_t x8_3 = arg1[6]
    arg1[5] = x0_2
    Botan::deallocate_memory(x0_2, (x8_3 - x0_2) s>> 2, 4)

int64_t* x20_1 = arg1[3]

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

int64_t* result = arg1[1]
*arg1 = _vtable_for_Botan::PK_Ops::Key_Agreement_with_KDF + 0x10
arg1[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
