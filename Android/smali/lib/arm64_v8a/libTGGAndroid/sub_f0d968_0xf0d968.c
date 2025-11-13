// 函数: sub_f0d968
// 地址: 0xf0d968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1[0xc]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::SM2_Signature_Operation{for `Botan::PK_Ops::Signature'}

if (x20 != 0)
    int64_t* x8_1 = arg1[0xd]
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
        
        x0_1 = arg1[0xc]
    
    arg1[0xd] = x20
    operator delete(x0_1)

int64_t* x0_2 = arg1[0xb]
arg1[0xb] = 0

if (x0_2 != 0)
    (*(*x0_2 + 0x10))()

void* x0_3 = arg1[8]

if (x0_3 != 0)
    int64_t x8_5 = arg1[0xa]
    arg1[9] = x0_3
    Botan::deallocate_memory(x0_3, x8_5 - x0_3, 1)

void* result = arg1[5]

if (result != 0)
    arg1[6] = result
    result = operator delete(result)

int64_t* x19_1 = arg1[2]

if (x19_1 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x19_1[1])
        i = __stlxr(x9_2 - 1, &x19_1[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
