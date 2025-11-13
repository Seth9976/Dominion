// 函数: _ZN5Botan8PointGFp12force_affineEv
// 地址: 0xd30ac4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x8 = entry_x0[0xf]

if (x8 == -1)
    int64_t x9_1 = entry_x0[0xc]
    int64_t x11_1 = entry_x0[0xd]
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        x8 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x8 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_1 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8 -= x11_3
        while (i != 1)
    
    entry_x0[0xf] = x8

if (x8 == 0)
    void** x0_13 = __cxa_allocate_exception(0x20)
    int64_t x0_14
    int128_t v0_2
    x0_14, v0_2 = operator new(0x30)
    v0_2 = data_71c500
    int64_t var_60_1 = x0_14
    __builtin_strncpy(x0_14, "Cannot convert zero ECC point to affine", 0x28)
    int128_t var_70_1 = v0_2
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t* x0 = *entry_x0
(*(*x0 + 0x68))(x0, &entry_x0[0xc], &result_1)
void* var_98
__builtin_memset(&var_98, 0, 0x18)
int64_t var_80 = -1
int32_t var_78 = 1
int64_t* x0_1 = *entry_x0
int128_t var_70
int64_t x2_1 = var_70.q
(*(*x0_1 + 0x88))(x0_1, &var_98, x2_1, (var_70:8.q - x2_1) s>> 2, &result_1)
void* var_c0
__builtin_memset(&var_c0, 0, 0x18)
int64_t var_a8 = -1
int32_t var_a0 = 1
int64_t* x0_2 = *entry_x0
int64_t x2_2 = var_70.q
(*(*x0_2 + 0x80))(x0_2, &var_c0, x2_2, (var_70:8.q - x2_2) s>> 2, &var_98, &result_1)
uint64_t var_f0
__builtin_memset(&var_f0, 0, 0x18)
int64_t var_d8 = -1
int32_t var_d0 = 1
int64_t x2_3 = entry_x0[2]
int64_t* x0_3 = *entry_x0
(*(*x0_3 + 0x80))(x0_3, &var_f0, x2_3, (entry_x0[3] - x2_3) s>> 2, &var_98, &result_1)
uint64_t var_e8_1
int64_t var_e0
uint64_t x0_4

if (&entry_x0[2] == &var_f0)
    x0_4 = var_f0
    
    if (x0_4 != 0)
        var_e8_1 = x0_4
        Botan::deallocate_memory(x0_4, (var_e0 - x0_4) s>> 2, 4)
else
    x0_4 = entry_x0[2]
    int128_t v0 = var_f0.o
    var_f0 = x0_4
    *(entry_x0 + 0x10) = v0
    int64_t x11_4 = entry_x0[4]
    int64_t x9_10 = entry_x0[5]
    entry_x0[4] = var_e0
    entry_x0[5] = var_d8
    int64_t var_d8_1 = x9_10
    entry_x0[6].d = var_d0
    int32_t var_d0_1 = entry_x0[6].d
    
    if (x0_4 != 0)
        var_e8_1 = x0_4
        Botan::deallocate_memory(x0_4, (x11_4 - x0_4) s>> 2, 4)
__builtin_memset(&var_f0, 0, 0x18)
int64_t var_d8_2 = -1
int32_t var_d0_2 = 1
int64_t x2_4 = entry_x0[7]
int64_t* x0_5 = *entry_x0
int128_t v0_1
int128_t v1
v0_1, v1 = (*(*x0_5 + 0x80))(x0_5, &var_f0, x2_4, (entry_x0[8] - x2_4) s>> 2, &var_c0, &result_1)
uint64_t var_e8_2
int64_t var_e0_1
uint64_t x0_6

if (&entry_x0[7] == &var_f0)
    x0_6 = var_f0
    
    if (x0_6 != 0)
        var_e8_2 = x0_6
        Botan::deallocate_memory(x0_6, (var_e0_1 - x0_6) s>> 2, 4)
else
    v1 = *(entry_x0 + 0x38)
    *(entry_x0 + 0x38) = var_f0.o
    var_f0.o = v1
    int64_t x11_5 = entry_x0[9]
    int64_t x9_14 = entry_x0[0xa]
    x0_6 = v1.q
    entry_x0[9] = var_e0_1
    entry_x0[0xa] = var_d8_2
    int64_t var_d8_3 = x9_14
    entry_x0[0xb].d = var_d0_2
    int32_t var_d0_3 = entry_x0[0xb].d
    
    if (x0_6 != 0)
        var_e8_2 = x0_6
        Botan::deallocate_memory(x0_6, (x11_5 - x0_6) s>> 2, 4)
uint32_t** x0_8 = (*(**entry_x0 + 0x60))()

if (&entry_x0[0xc] != x0_8)
    x0_8[1]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
        &entry_x0[0xc], *x0_8)

entry_x0[0xf] = x0_8[3]
entry_x0[0x10].d = x0_8[4].d
void* x0_10 = var_c0

if (x0_10 != 0)
    void* var_b8_1 = x0_10
    int64_t var_b0
    Botan::deallocate_memory(x0_10, (var_b0 - x0_10) s>> 2, 4)

void* x0_11 = var_98

if (x0_11 != 0)
    void* var_90_1 = x0_11
    int64_t var_88
    Botan::deallocate_memory(x0_11, (var_88 - x0_11) s>> 2, 4)

void* x0_12 = var_70.q

if (x0_12 != 0)
    var_70:8.q = x0_12
    int64_t var_60
    Botan::deallocate_memory(x0_12, (var_60 - x0_12) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, (var_38 - result) s>> 2, 4)
