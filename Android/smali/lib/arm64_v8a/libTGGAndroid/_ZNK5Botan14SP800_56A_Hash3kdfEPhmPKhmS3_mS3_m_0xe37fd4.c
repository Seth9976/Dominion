// 函数: _ZNK5Botan14SP800_56A_Hash3kdfEPhmPKhmS3_mS3_m
// 地址: 0xe37fd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x23 = *(arg1 + 8)
uint8_t const* result = arg3
uint64_t x26 = arg2
int64_t x0_1 = (**x23)(x23)
uint64_t x8_2 = result u/ x0_1
uint64_t x28

if (result u% x0_1 != 0)
    x28 = x8_2 + 1
else
    x28 = x8_2

int128_t var_80

if (x28 u>> 0x20 != 0)
label_e38274:
    void** x0_19 = __cxa_allocate_exception(0x20)
    int64_t x0_20
    int128_t v0
    x0_20, v0 = operator new(0x30)
    v0 = data_71aa70
    int64_t var_70_1 = x0_20
    __builtin_strncpy(x0_20, "SP800-56A KDF requested output too large", 0x29)
    var_80 = v0
    *x0_19 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_19[1])
    *x0_19 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_19, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

__builtin_memset(&var_80, 0, 0x18)

if (x28 != 0)
    uint8_t const* result_1 = result
    void* x27_1
    int32_t var_64
    int64_t arg_0
    
    if (x26 == 0)
        uint8_t const* result_3 = result
        int64_t x19 = 0
        
        do
            var_64 = _byteswap(x19.d + 1)
            (*(*x23 + 0x18))(x23, &var_64, 4)
            (*(*x23 + 0x18))(x23, arg4, arg5)
            (*(*x23 + 0x18))(x23, arg8, arg_0)
            int64_t x0_14 = (**x23)(x23)
            int64_t x1_9 = var_80.q
            int64_t x8_32 = var_80:8.q - x1_9
            
            if (x0_14 u> x8_32)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
                x1_9 = var_80.q
            else if (x0_14 u< x8_32)
                var_80:8.q = x1_9 + x0_14
            
            (*(*x23 + 0x20))(x23, x1_9)
            x27_1 = var_80.q
            uint8_t* result_6 = var_80:8.q - x27_1
            uint8_t const* result_5
            
            result_5 = result_3 u< result_6 ? result_3 : result_6
            
            if (result_5 != 0)
                goto label_e3826c
            
            x19 += 1
            result_3 -= x0_1
        while (x19 != x28)
    else
        int64_t fp_1 = 0
        
        do
            var_64 = _byteswap(fp_1.d + 1)
            (*(*x23 + 0x18))(x23, &var_64, 4)
            (*(*x23 + 0x18))(x23, arg4, arg5)
            (*(*x23 + 0x18))(x23, arg8, arg_0)
            int64_t x0_6 = (**x23)(x23)
            int64_t x1_3 = var_80.q
            int64_t x8_15 = var_80:8.q - x1_3
            
            if (x0_6 u> x8_15)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
                x1_3 = var_80.q
            else if (x0_6 u< x8_15)
                var_80:8.q = x1_3 + x0_6
            
            (*(*x23 + 0x20))(x23, x1_3)
            x27_1 = var_80.q
            size_t result_4 = var_80:8.q - x27_1
            size_t result_2
            
            result_2 = result u< result_4 ? result : result_4
            
            if (result_2 != 0)
                if (x27_1 == 0)
                label_e3826c:
                    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                        "If n > 0 then args are not null", "copy_mem", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                    goto label_e38274
                
                memmove(x26, x27_1, result_2)
            
            fp_1 += 1
            x26 += x0_1
            result -= x0_1
        while (fp_1 != x28)
    result = result_1
    
    if (x27_1 != 0)
        var_80:8.q = x27_1
        int64_t var_70
        Botan::deallocate_memory(x27_1, var_70 - x27_1, 1)

return result
