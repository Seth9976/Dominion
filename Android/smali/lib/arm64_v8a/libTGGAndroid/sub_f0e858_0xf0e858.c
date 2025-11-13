// 函数: sub_f0e858
// 地址: 0xf0e858
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = arg1[0xd]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::SM2_Encryption_Operation{for `Botan::PK_Ops::Encryption'}

if (result != 0)
    int64_t x8_1 = arg1[0xf]
    arg1[0xe] = result
    result = Botan::deallocate_memory(result, (x8_1 - result) s>> 2, 4)

int64_t* x20 = arg1[0xa]
int64_t x9_1

if (x20 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)

void* x20_1

if (x20 != 0 && x9_1 == 0)
    (*(*x20 + 0x10))(x20)
    result = std::__ndk1::__shared_weak_count::__release_weak()
    x20_1 = arg1[6]
    
    if (x20_1 != 0)
        goto label_f0e8b8
else
    x20_1 = arg1[6]
    
    if (x20_1 != 0)
    label_f0e8b8:
        int64_t* x8_4 = arg1[7]
        void* x0_1
        
        if (x8_4 == x20_1)
            x0_1 = x20_1
        else
            int64_t* x21_1 = x8_4
            
            do
                x21_1 = &x21_1[-5]
                void* x0 = *x21_1
                
                if (x0 != 0)
                    int64_t x9_2 = x8_4[-3]
                    x8_4[-4] = x0
                    Botan::deallocate_memory(x0, (x9_2 - x0) s>> 2, 4)
                
                x8_4 = x21_1
            while (x20_1 != x21_1)
            
            x0_1 = arg1[6]
        
        arg1[7] = x20_1
        result = operator delete(x0_1)

if ((zx.d(arg1[3].b) & 1) != 0)
    result = operator delete(arg1[5])

int64_t* x19_1 = arg1[2]

if (x19_1 != 0)
    int64_t x9_3
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&x19_1[1])
        i_1 = __stlxr(x9_3 - 1, &x19_1[1])
    while (i_1 != 0)
    
    if (x9_3 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
