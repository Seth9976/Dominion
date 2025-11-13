// 函数: _ZNK5Botan8PointGFp12get_affine_xEv
// 地址: 0xd27228
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

int128_t var_60

if (x9 == 0)
    void** x0_10 = __cxa_allocate_exception(0x20)
    int64_t x0_11
    int128_t v2
    x0_11, v2 = operator new(0x30)
    v2 = data_71b820
    int64_t var_50_2 = x0_11
    __builtin_strncpy(x0_11, "Cannot convert zero point to affine", 0x24)
    var_60 = v2
    *x0_10 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_10[1])
    *x0_10 = _vtable_for_Botan::Illegal_Transformation + 0x10
    __cxa_throw(x0_10, _typeinfo_for_Botan::Illegal_Transformation, Botan::Exception::~Exception)
    noreturn

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t* x0 = *entry_x0
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* entry_x8

if (((*(*x0 + 0x38))(x0, &entry_x0[0xc]) & 1) == 0)
    __builtin_memset(&var_60, 0, 0x18)
    int64_t var_48_1 = -1
    int32_t var_40_1 = 1
    int64_t* x0_4 = *entry_x0
    int64_t x2_1 = entry_x0[0xc]
    (*(*x0_4 + 0x88))(x0_4, &var_60, x2_1, (entry_x0[0xd] - x2_1) s>> 2, &result_1)
    int64_t* x0_5 = *entry_x0
    (*(*x0_5 + 0x68))(x0_5, &var_60, &result_1)
    void* x0_6 = var_60.q
    int64_t var_78
    int64_t var_48_2 = var_78
    int64_t var_50
    int64_t var_80_1 = var_50
    int64_t var_78_1 = var_48_1
    int128_t var_90
    var_60 = var_90
    var_90.q = x0_6
    int32_t var_70
    int32_t var_40_2 = var_70
    int32_t var_70_1 = var_40_1
    
    if (x0_6 != 0)
        var_90:8.q = x0_6
        Botan::deallocate_memory(x0_6, (var_50 - x0_6) s>> 2, 4)
    
    __builtin_memset(&var_90, 0, 0x18)
    int64_t var_78_2 = -1
    int32_t var_70_2 = 1
    int64_t* x0_7 = *entry_x0
    int64_t x2_3 = entry_x0[2]
    (*(*x0_7 + 0x80))(x0_7, &var_90, x2_3, (entry_x0[3] - x2_3) s>> 2, &var_60, &result_1)
    int64_t* x0_8 = *entry_x0
    (*(*x0_8 + 0x78))(x0_8, &var_90, &result_1)
    void* x0_9 = var_60.q
    *entry_x8 = var_90
    int64_t var_80_2
    *(entry_x8 + 0x10) = var_80_2
    *(entry_x8 + 0x18) = var_78_2
    *(entry_x8 + 0x20) = var_70_2
    
    if (x0_9 != 0)
        var_60:8.q = x0_9
        int64_t var_80
        Botan::deallocate_memory(x0_9, (var_80 - x0_9) s>> 2, 4)
else
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
    *(entry_x8 + 0x18) = entry_x0[5]
    *(entry_x8 + 0x20) = entry_x0[6].d
    int64_t* x0_3 = *entry_x0
    (*(*x0_3 + 0x78))(x0_3, entry_x8, &result_1)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_28
return Botan::deallocate_memory(result, (var_28 - result) s>> 2, 4)
