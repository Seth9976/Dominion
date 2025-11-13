// 函数: _ZNK5Botan17SP800_108_Counter3kdfEPhmPKhmS3_mS3_m
// 地址: 0xe37230
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = arg2
size_t x0_1 = (***(arg1 + 8))()
int128_t var_80

if (((&arg3[x0_1] - 1) u/ x0_1) u>> 0x20 != 0)
label_e37490:
    void** x0_15 = __cxa_allocate_exception(0x20)
    int64_t x0_16
    int128_t v0
    x0_16, v0 = operator new(0x30)
    v0 = data_71c500
    int64_t var_70_1 = x0_16
    __builtin_strncpy(x0_16, "SP800_108_Counter output size too large", 0x28)
    var_80 = v0
    *x0_15 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_15[1])
    *x0_15 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_15, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int32_t temp0_1 = _byteswap(arg3.d << 3)
__builtin_memset(&var_80, 0, 0x18)
int32_t var_84 = temp0_1
Botan::SymmetricAlgorithm::set_key(*(arg1 + 8) + 8, arg4)
int64_t var_70
void* x28_2

if (arg3 s<= 0)
    x28_2 = var_80.q
    
    if (x28_2 != 0)
        var_80:8.q = x28_2
        Botan::deallocate_memory(x28_2, var_70 - x28_2, 1)
else
    void* fp_1 = &arg3[x24]
    int32_t x19_1 = 1
    
    while (true)
        int32_t var_88 = _byteswap(x19_1)
        int64_t* x0_3 = *(arg1 + 8)
        void* x9_1 = fp_1 - x24
        size_t x27_1
        
        x27_1 = x0_1 u< x9_1 ? x0_1 : x9_1
        
        (*(*x0_3 + 0x18))(x0_3, &var_88, 4)
        int64_t* x0_4 = *(arg1 + 8)
        int64_t arg_0
        (*(*x0_4 + 0x18))(x0_4, arg8, arg_0)
        int64_t* x0_5 = *(arg1 + 8)
        char var_64 = 0
        (*(*x0_5 + 0x18))(x0_5, &var_64, 1)
        int64_t* x0_6 = *(arg1 + 8)
        (*(*x0_6 + 0x18))(x0_6, arg6, arg7)
        int64_t* x0_7 = *(arg1 + 8)
        (*(*x0_7 + 0x18))(x0_7, &var_84, 4)
        int64_t* x28_1 = *(arg1 + 8)
        int64_t x0_9 = (**x28_1)(x28_1)
        int64_t x1_6 = var_80.q
        int64_t x8_23 = var_80:8.q - x1_6
        
        if (x0_9 u> x8_23)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
            x1_6 = var_80.q
        else if (x0_9 u< x8_23)
            var_80:8.q = x1_6 + x0_9
        
        (*(*x28_1 + 0x20))(x28_1, x1_6)
        x28_2 = var_80.q
        
        if (x27_1 == 0)
            goto label_e373d8
        
        if (x24 != 0 && x28_2 != 0)
            memmove(x24, x28_2, x27_1)
        label_e373d8:
            int32_t temp1_1 = x19_1
            x19_1 += 1
            
            if (temp1_1 u>= 0xffffffff)
                Botan::assertion_failure("counter != 0", "No counter overflow", "kdf", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x125a9)
            else
                x24 += x27_1
                
                if (x24 u>= fp_1)
                    break
                
                continue
        
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        goto label_e37490
    
    if (x28_2 != 0)
        var_80:8.q = x28_2
        Botan::deallocate_memory(x28_2, var_70 - x28_2, 1)
return arg3
