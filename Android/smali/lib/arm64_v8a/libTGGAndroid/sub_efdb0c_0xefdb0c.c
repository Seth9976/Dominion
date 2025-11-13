// 函数: sub_efdb0c
// 地址: 0xefdb0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[0x12]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::ECDSA_Signature_Operation{for `Botan::PK_Ops::Signature_with_EMSA'}

if (x0 != 0)
    int64_t x8_1 = arg1[0x14]
    arg1[0x13] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = arg1[0xd]

if (x0_1 != 0)
    int64_t x8_3 = arg1[0xf]
    arg1[0xe] = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 2, 4)

void* x20 = arg1[0xa]

if (x20 != 0)
    int64_t* x8_5 = arg1[0xb]
    void* x0_3
    
    if (x8_5 == x20)
        x0_3 = x20
    else
        int64_t* x21_1 = x8_5
        
        do
            x21_1 = &x21_1[-5]
            void* x0_2 = *x21_1
            
            if (x0_2 != 0)
                int64_t x9_1 = x8_5[-3]
                x8_5[-4] = x0_2
                Botan::deallocate_memory(x0_2, (x9_1 - x0_2) s>> 2, 4)
            
            x8_5 = x21_1
        while (x20 != x21_1)
        
        x0_3 = arg1[0xa]
    
    arg1[0xb] = x20
    operator delete(x0_3)

void* x20_1 = arg1[9]
arg1[9] = 0

if (x20_1 != 0)
    Botan::RFC6979_Nonce_Generator::~RFC6979_Nonce_Generator()
    operator delete(x20_1)

int64_t* x20_2 = arg1[7]

if (x20_2 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20_2[1])
        i = __stlxr(x9_2 - 1, &x20_2[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x20_2 + 0x10))(x20_2)
        std::__ndk1::__shared_weak_count::__release_weak()

uint32_t x8_10 = zx.d(arg1[2].b)
*arg1 = _vtable_for_Botan::PK_Ops::Signature_with_EMSA + 0x10

if ((x8_10 & 1) != 0)
    operator delete(arg1[4])

int64_t* result = arg1[1]
arg1[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
