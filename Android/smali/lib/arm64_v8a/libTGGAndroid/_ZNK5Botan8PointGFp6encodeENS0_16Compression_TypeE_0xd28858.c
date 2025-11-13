// 函数: _ZNK5Botan8PointGFp6encodeENS0_16Compression_TypeE
// 地址: 0xd28858
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x78)
int64_t* x21 = arg1
char* result
char** entry_x8

if (x9 == -1)
    int64_t x8_6 = x21[0xc]
    int64_t x11_1 = x21[0xd]
    int64_t x10_1 = x11_1 - x8_6
    
    if (x11_1 != x8_6)
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x8_6 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x9_1 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_1 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x8_6 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x9_1 -= x11_3
        while (i != 1)
        x21[0xf] = x9_1
        
        if (x9_1 != 0)
            goto label_d28890
        
        goto label_d28998
    
    x21[0xf] = 0
label_d28998:
    __builtin_memset(entry_x8, 0, 0x18)
    result = operator new(1)
    *result = 0
    entry_x8[1] = &result[1]
    entry_x8[2] = &result[1]
    *entry_x8 = result
else
    if (x9 == 0)
        goto label_d28998
    
label_d28890:
    (*(**x21 + 0x10))()
    int64_t x0_1 = Botan::BigInt::bits()
    int64_t x23_1
    
    if ((x0_1 & 7) == 0)
        x23_1 = 0
    else
        x23_1 = 8 - (x0_1 & 7)
    
    Botan::PointGFp::get_affine_x()
    Botan::PointGFp::get_affine_y()
    uint64_t x21_1 = (x23_1 + x0_1) u>> 3
    char* result_1
    int32_t entry_x1
    void* var_80
    int64_t var_78
    void* var_78_1
    int64_t var_70
    void* x0_15
    char* x20_1
    uint64_t x22_2
    
    if (entry_x1 == 2)
        x22_2 = 1 | (0x1fffffffffffffff & x21_1) << 1
        char* x0_12 = operator new(x22_2)
        x20_1 = x0_12
        memset(x0_12, 0, x22_2)
        void* x8_12 = var_80
        char x8_14
        
        if (var_78 == x8_12)
            x8_14 = 0
        else
            x8_14 = *x8_12 & 1
        
        *x20_1 = x8_14 | 6
        Botan::BigInt::encode_1363(&x20_1[1], x21_1, &result_1)
        Botan::BigInt::encode_1363(&x20_1[x21_1 + 1], x21_1, &var_80)
    label_d28a98:
        void* x23_3 = &x20_1[x22_2]
        x0_15 = var_80
        *entry_x8 = x20_1
        entry_x8[1] = x23_3
        entry_x8[2] = x23_3
        
        if (x0_15 != 0)
            var_78_1 = x0_15
            Botan::deallocate_memory(x0_15, (var_70 - x0_15) s>> 2, 4)
    else
        if (entry_x1 != 1)
            if (entry_x1 == 0)
                x22_2 = 1 | (0x1fffffffffffffff & x21_1) << 1
                char* x0_5 = operator new(x22_2)
                x20_1 = x0_5
                memset(x0_5, 0, x22_2)
                *x20_1 = 4
                Botan::BigInt::encode_1363(&x20_1[1], x21_1, &result_1)
                Botan::BigInt::encode_1363(&x20_1[x21_1 + 1], x21_1, &var_80)
                goto label_d28a98
            
            void** x0_19 = __cxa_allocate_exception(0x20)
            int64_t x0_20
            int128_t v0
            x0_20, v0 = operator new(0x20)
            int64_t var_90 = x0_20
            int128_t var_a0 = data_71cd20
            __builtin_strncpy(x0_20, "EC2OSP illegal point encoding", 0x1e)
            *x0_19 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_19[1])
            *x0_19 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_19, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        char* x0_10 = operator new(x21_1 + 1)
        void* x23_2 = &x0_10[x21_1 + 1]
        memset(x0_10, 0, x21_1 + 1)
        void* x8_9 = var_80
        char x8_11
        
        if (var_78 == x8_9)
            x8_11 = 0
        else
            x8_11 = *x8_9 & 1
        
        *x0_10 = x8_11 | 2
        Botan::BigInt::encode_1363(&x0_10[1], x21_1, &result_1)
        x0_15 = var_80
        *entry_x8 = x0_10
        entry_x8[1] = x23_2
        entry_x8[2] = x23_2
        
        if (x0_15 != 0)
            var_78_1 = x0_15
            Botan::deallocate_memory(x0_15, (var_70 - x0_15) s>> 2, 4)
    result = result_1
    
    if (result != 0)
        char* result_2 = result
        int64_t var_48
        return Botan::deallocate_memory(result, (var_48 - result) s>> 2, 4)
return result
