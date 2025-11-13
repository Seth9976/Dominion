// 函数: _ZN5Botan13DL_Group_DataC2ERKNS_6BigIntES3_S3_NS_15DL_Group_SourceE
// 地址: 0xf29288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg4
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x20) = *(arg2 + 0x20)
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x28)
void* __offset(Botan::BigInt, 0x28) var_88 = arg1 + 0x28
*(arg1 + 0x40) = *(arg3 + 0x18)
*(arg1 + 0x48) = *(arg3 + 0x20)
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x50)
*(arg1 + 0x68) = *(x20 + 0x18)
*(arg1 + 0x70) = *(x20 + 0x20)
Botan::Modular_Reducer::Modular_Reducer(arg1 + 0x78)
Botan::Modular_Reducer::Modular_Reducer(arg1 + 0xd0)
void* __offset(Botan::BigInt, 0xd0) var_90 = arg1 + 0xd0
int64_t* x0_4 = operator new(0xc8)
x0_4[2] = 0
x0_4[1] = 0
*x0_4 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Params, std::__ndk1::allocator<Botan::Montgomery_Params> >
    + 0x10
Botan::Montgomery_Params::Montgomery_Params(&x0_4[3], arg1)
*(arg1 + 0x128) = &x0_4[3]
*(arg1 + 0x130) = x0_4
int32_t i

do
    i = __stxr(__ldxr(&x0_4[1]) + 1, &x0_4[1])
while (i != 0)
void** x0_6 = operator new(0x50)
x0_6[2] = 0
void* var_80 = &x0_4[3]
int64_t* var_78 = x0_4
*x0_6 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Exponentation_State const, std::__ndk1::allocator<Botan::Montgomery_Exponentation_State const> >
    + 0x10
x0_6[1] = 0
int32_t i_1

do
    i_1 = __stxr(__ldxr(&x0_4[1]) + 1, &x0_4[1])
while (i_1 != 0)
Botan::Montgomery_Exponentation_State::Montgomery_Exponentation_State(&x0_6[3], &var_80, 
    arg1 + 0x50, true)
int64_t x8_12
int32_t i_2

do
    x8_12 = __ldaxr(&x0_4[1])
    i_2 = __stlxr(x8_12 - 1, &x0_4[1])
while (i_2 != 0)

if (x8_12 == 0)
    (*(*x0_4 + 0x10))(x0_4)
    std::__ndk1::__shared_weak_count::__release_weak()

*(arg1 + 0x138) = &x0_6[3]
*(arg1 + 0x140) = x0_6
int64_t x8_15
int32_t i_3

do
    x8_15 = __ldaxr(&x0_4[1])
    i_3 = __stlxr(x8_15 - 1, &x0_4[1])
while (i_3 != 0)

if (x8_15 == 0)
    (*(*x0_4 + 0x10))(x0_4)
    std::__ndk1::__shared_weak_count::__release_weak()

*(arg1 + 0x148) = Botan::BigInt::bits()
int64_t x0_15 = Botan::BigInt::bits()
double v0 = *(arg1 + 0x148)
*(arg1 + 0x150) = x0_15
double x = float.d(v0) / 1.4426950408889634
double v0_2 = log(x)
int64_t result
double v0_3
v0_3, result = pow(v0_2 * x * v0_2, float.d(0x3fd5555555555555))
int32_t entry_x4
*(arg1 + 0x168) = entry_x4
v0_3 = v0_3 * 1.9199999999999999 * 1.4426950408889634
uint64_t x9_5 = vcvtd_u64_f64(v0_3 + 0.0)
uint64_t x8_18

x8_18 = x9_5 u> 0x40 ? x9_5 : 0x40

*(arg1 + 0x158) = vcvtd_u64_f64(v0_3 + -5.6437999999999997)
*(arg1 + 0x160) = x8_18 << 1
return result
