// 函数: _ZNK5Botan8PointGFp12get_affine_yEv
// 地址: 0xd31064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x9 = entry_x0[0xf]

if (x9 == -1)
    int64_t x8 = entry_x0[0xc]
    int64_t x11_1 = entry_x0[0xd]
    int64_t x10_1 = x11_1 - x8
    
    if (x11_1 == x8)
        x9 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x8 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x9 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_1 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x8 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x9 -= x11_3
        while (i != 1)
    
    entry_x0[0xf] = x9

int128_t var_70

if (x9 == 0)
    void** x0_12 = __cxa_allocate_exception(0x20)
    int64_t x0_13
    int128_t v2
    x0_13, v2 = operator new(0x30)
    v2 = data_71b820
    int64_t var_60_1 = x0_13
    __builtin_strncpy(x0_13, "Cannot convert zero point to affine", 0x24)
    var_70 = v2
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    *x0_12 = _vtable_for_Botan::Illegal_Transformation + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::Illegal_Transformation, Botan::Exception::~Exception)
    noreturn

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t* x0 = *entry_x0
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* entry_x8

if (((*(*x0 + 0x38))(x0, &entry_x0[0xc]) & 1) == 0)
    __builtin_memset(&var_70, 0, 0x18)
    int64_t var_58_1 = -1
    int32_t var_50_1 = 1
    int64_t* x0_4 = *entry_x0
    int64_t x2_1 = entry_x0[0xc]
    (*(*x0_4 + 0x88))(x0_4, &var_70, x2_1, (entry_x0[0xd] - x2_1) s>> 2, &result_1)
    void* var_98
    __builtin_memset(&var_98, 0, 0x18)
    int64_t var_80_1 = -1
    int32_t var_78_1 = 1
    int64_t* x0_5 = *entry_x0
    int64_t x2_2 = entry_x0[0xc]
    (*(*x0_5 + 0x80))(x0_5, &var_98, x2_2, (entry_x0[0xd] - x2_2) s>> 2, &var_70, &result_1)
    int64_t* x0_6 = *entry_x0
    (*(*x0_6 + 0x68))(x0_6, &var_98, &result_1)
    int64_t var_f0
    __builtin_memset(&var_f0, 0, 0x18)
    int64_t var_d8_1 = -1
    int32_t var_d0_1 = 1
    int64_t* x0_7 = *entry_x0
    int64_t x2_4 = entry_x0[7]
    void* var_c0
    (*(*x0_7 + 0x80))(x0_7, &var_f0, x2_4, (entry_x0[8] - x2_4) s>> 2, &var_c0, &result_1)
    int64_t* x0_8 = *entry_x0
    (*(*x0_8 + 0x78))(x0_8, &var_f0, &result_1)
    void* x0_9 = var_c0
    *entry_x8 = var_f0.o
    int64_t var_e0
    *(entry_x8 + 0x10) = var_e0
    *(entry_x8 + 0x18) = var_d8_1
    *(entry_x8 + 0x20) = var_d0_1
    
    if (x0_9 != 0)
        void* var_b8_1 = x0_9
        int64_t var_b0
        Botan::deallocate_memory(x0_9, (var_b0 - x0_9) s>> 2, 4)
    
    void* x0_10 = var_98
    
    if (x0_10 != 0)
        void* var_90_1 = x0_10
        int64_t var_88
        Botan::deallocate_memory(x0_10, (var_88 - x0_10) s>> 2, 4)
    
    void* x0_11 = var_70.q
    
    if (x0_11 != 0)
        var_70:8.q = x0_11
        int64_t var_60
        Botan::deallocate_memory(x0_11, (var_60 - x0_11) s>> 2, 4)
else
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
    *(entry_x8 + 0x18) = entry_x0[0xa]
    *(entry_x8 + 0x20) = entry_x0[0xb].d
    int64_t* x0_3 = *entry_x0
    (*(*x0_3 + 0x78))(x0_3, entry_x8, &result_1)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, (var_38 - result) s>> 2, 4)
