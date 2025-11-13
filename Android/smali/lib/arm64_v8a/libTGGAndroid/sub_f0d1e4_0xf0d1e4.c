// 函数: sub_f0d1e4
// 地址: 0xf0d1e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg1[0xd]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::SM2_Verification_Operation{for `Botan::PK_Ops::Verification'}
arg1[0xd] = 0

if (x0 != 0)
    (*(*x0 + 0x10))()

void* x0_1 = arg1[0xa]

if (x0_1 != 0)
    arg1[0xb] = x0_1
    operator delete(x0_1)

void* result = arg1[7]

if (result != 0)
    int64_t x8_3 = arg1[9]
    arg1[8] = result
    result = Botan::deallocate_memory(result, x8_3 - result, 1)

void* x21 = arg1[3]

if (x21 != 0)
    int64_t x20_1 = arg1[4]
    void* x0_3
    
    if (x20_1 == x21)
        x0_3 = x21
    else
        do
            x20_1 -= 0x88
            Botan::PointGFp::~PointGFp()
        while (x21 != x20_1)
        
        x0_3 = arg1[3]
    
    arg1[4] = x21
    result = operator delete(x0_3)

int64_t* x19_1 = arg1[2]

if (x19_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19_1[1])
        i = __stlxr(x9_1 - 1, &x19_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
