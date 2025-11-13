// 函数: _ZN5Botan6OS2ECPEPKhmRKNS_8CurveGFpE
// 地址: 0xd26948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8

if (arg2 u<= 1)
    return Botan::PointGFp::PointGFp(entry_x8) __tailcall

Botan::BigInt* x0_3 = (*(**arg3 + 0x10))()
int64_t* x8_3 = *arg3
Botan::BigInt* x0_5 = (*(*x8_3 + 0x18))(x8_3)
int64_t* x8_4 = *arg3
Botan::OS2ECP(arg1, arg2, x0_3, x0_5, (*(*x8_4 + 0x20))(x8_4))
int64_t var_128
void* result_1
Botan::PointGFp::PointGFp(&var_128, arg3, &result_1)
int32_t x0_10
int128_t v0_1
int128_t v2_1
int128_t v3_1
x0_10, v0_1, v2_1, v3_1 = Botan::PointGFp::on_the_curve()

if ((x0_10 & 1) == 0)
    void** x0_12 = __cxa_allocate_exception(0x20)
    int64_t x0_13
    int128_t v0_2
    x0_13, v0_2 = operator new(0x30)
    (*"not on the curve")[0].o
    int64_t var_130 = x0_13
    v0_2 = data_71c1e0
    __builtin_strncpy(x0_13, "OS2ECP: Decoded point was not on the curve", 0x2b)
    int128_t var_140 = v0_2
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    *x0_12 = _vtable_for_Botan::Illegal_Point + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::Illegal_Point, Botan::Exception::~Exception)
    noreturn

*entry_x8 = var_128
int64_t var_120
entry_x8[1] = var_120
int32_t var_f8
entry_x8[6].d = var_f8
int32_t var_d0
entry_x8[0xb].d = var_d0
int128_t var_f0_1
__builtin_memset(&var_f0_1, 0, 0x18)
int128_t var_c8_1
__builtin_memset(&var_c8_1, 0, 0x18)
int128_t var_118
*(entry_x8 + 0x10) = var_118
int64_t var_100_1 = -1
int64_t var_d8_1 = -1
int64_t var_b0_1 = -1
int64_t var_108
entry_x8[4] = var_108
int64_t var_100
entry_x8[5] = var_100
__builtin_memset(&var_128, 0, 0x28)
int64_t var_e0
entry_x8[9] = var_e0
int64_t var_d8
entry_x8[0xa] = var_d8
int32_t var_f8_1 = 1
int32_t var_d0_1 = 1
int128_t var_f0
*(entry_x8 + 0x38) = var_f0
int128_t var_c8
*(entry_x8 + 0x60) = var_c8
int64_t var_b8
entry_x8[0xe] = var_b8
int64_t var_b0
entry_x8[0xf] = var_b0
int32_t var_a8
entry_x8[0x10].d = var_a8
int32_t var_a8_1 = 1
Botan::PointGFp::~PointGFp()
void* var_78

if (var_78 != 0)
    void* var_70_1 = var_78
    int64_t var_68
    Botan::deallocate_memory(var_78, (var_68 - var_78) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_90
return Botan::deallocate_memory(result, (var_90 - result) s>> 2, 4)
