// 函数: _ZN5Botan22Blinded_Point_MultiplyC1ERKNS_8PointGFpERKNS_6BigIntEm
// 地址: 0xd32000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >::vector(arg1)
*(arg1 + 0x18) = arg3
*(arg1 + 0x20) = 0
void* __offset(vtable_for_Botan::Null_RNG, 0x10) var_28 = _vtable_for_Botan::Null_RNG + 0x10
Botan::PointGFp* x0 = operator new(0x38)
int64_t result =
    Botan::PointGFp_Var_Point_Precompute::PointGFp_Var_Point_Precompute(x0, arg2, &var_28)
void* x20_1 = *(arg1 + 0x20)
*(arg1 + 0x20) = x0

if (x20_1 == 0)
    return result

void* x0_1 = *(x20_1 + 0x20)

if (x0_1 != 0)
    int64_t x8_1 = *(x20_1 + 0x30)
    *(x20_1 + 0x28) = x0_1
    Botan::deallocate_memory(x0_1, (x8_1 - x0_1) s>> 2, 4)

int64_t* x19_1 = *(x20_1 + 8)

if (x19_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19_1[1])
        i = __stlxr(x9_1 - 1, &x19_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        std::__ndk1::__shared_weak_count::__release_weak()

return operator delete(x20_1)
