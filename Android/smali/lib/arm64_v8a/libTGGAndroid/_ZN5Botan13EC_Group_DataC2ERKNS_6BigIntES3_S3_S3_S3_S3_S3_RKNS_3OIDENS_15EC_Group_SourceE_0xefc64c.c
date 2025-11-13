// 函数: _ZN5Botan13EC_Group_DataC2ERKNS_6BigIntES3_S3_S3_S3_S3_S3_RKNS_3OIDENS_15EC_Group_SourceE
// 地址: 0xefc64c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::CurveGFp::choose_repr(arg2, arg3, arg4)
Botan::PointGFp::PointGFp(arg1 + 0x10, arg1, arg5)
void* __offset(Botan::BigInt, 0x10) var_98 = arg1 + 0x10
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x98)
*(arg1 + 0xb0) = *(arg5 + 0x18)
*(arg1 + 0xb8) = *(arg5 + 0x20)
void* __offset(Botan::BigInt, 0x98) var_a0 = arg1 + 0x98
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0xc0)
*(arg1 + 0xd8) = *(arg6 + 0x18)
*(arg1 + 0xe0) = *(arg6 + 0x20)
void* __offset(Botan::BigInt, 0xc0) var_a8 = arg1 + 0xc0
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0xe8)
*(arg1 + 0x100) = *(arg7 + 0x18)
*(arg1 + 0x108) = *(arg7 + 0x20)
void* __offset(Botan::BigInt, 0xe8) var_b0 = arg1 + 0xe8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x110)
*(arg1 + 0x128) = *(arg8 + 0x18)
*(arg1 + 0x130) = *(arg8 + 0x20)
Botan::Modular_Reducer::Modular_Reducer(arg1 + 0x138)
Botan::PointGFp_Base_Point_Precompute::PointGFp_Base_Point_Precompute(arg1 + 0x190, arg1 + 0x10)
void* x20_1 = arg9.q
*(arg1 + 0x1d0) = 0
*(arg1 + 0x1d8) = 0
*(arg1 + 0x1c0) = _vtable_for_Botan::OID + 0x10
*(arg1 + 0x1c8) = 0
int64_t x9 = *(x20_1 + 8)
int64_t x8_10 = *(x20_1 + 0x10)
uint64_t x22_2 = x8_10 - x9

if (x8_10 != x9)
    if ((x22_2 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int64_t x0_9 = operator new(x22_2)
    *(arg1 + 0x1c8) = x0_9
    *(arg1 + 0x1d0) = x0_9
    *(arg1 + 0x1d8) = x0_9 + (x22_2 s>> 2 << 2)
    int64_t x1_8 = *(x20_1 + 8)
    int64_t fp_1 = x0_9
    size_t x21_3 = *(x20_1 + 0x10) - x1_8
    
    if (x21_3 s>= 1)
        memcpy(fp_1, x1_8, x21_3)
        fp_1 += x21_3
    
    *(arg1 + 0x1d0) = fp_1

*(arg1 + 0x1e0) = Botan::BigInt::bits()
*(arg1 + 0x1e8) = Botan::BigInt::bits()
uint32_t var_64 = 3
Botan::BigInt::add2(arg2, &var_64, 1, 0)
char result = Botan::BigInt::is_equal(arg3)
char result_1 = result
void* var_90

if (var_90 != 0)
    void* var_88_1 = var_90
    int64_t var_80
    result = Botan::deallocate_memory(var_90, (var_80 - var_90) s>> 2, 4)

*(arg1 + 0x1f0) = result_1 & 1
int64_t x9_3 = *(arg3 + 0x18)

if (x9_3 == -1)
    int64_t x10_1 = *arg3
    int64_t x12_1 = *(arg3 + 8)
    int64_t x11_1 = x12_1 - x10_1
    
    if (x12_1 == x10_1)
        x9_3 = 0
    else
        int64_t x13_1
        
        x13_1 = x11_1 s>= 0 ? x11_1 : -1
        
        int64_t x12_2 = x10_1 - x12_1
        int64_t x13_2
        
        x13_2 = x13_1 s< 1 ? x13_1 : 1
        
        x9_3 = x11_1 s>> 2
        int64_t x11_2
        
        x11_2 = x12_2 s> x11_1 ? x12_2 : x11_1
        
        int64_t i_1 = x13_2 * (x11_2 u>> 2)
        uint64_t x12_3 = 1
        int64_t i
        
        do
            int32_t x13_3 = *(x10_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x12_3 = zx.q(x12_3.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
            x9_3 -= x12_3
        while (i != 1)
    
    *(arg3 + 0x18) = x9_3

*(arg1 + 0x1f1) = (x9_3 == 0 ? 1 : 0).b
int32_t arg_8
*(arg1 + 0x1f4) = arg_8
return result
