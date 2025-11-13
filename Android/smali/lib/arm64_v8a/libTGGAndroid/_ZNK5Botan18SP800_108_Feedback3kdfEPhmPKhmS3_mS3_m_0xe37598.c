// 函数: _ZNK5Botan18SP800_108_Feedback3kdfEPhmPKhmS3_mS3_m
// 地址: 0xe37598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = arg2
uint64_t x0_1 = (***(arg1 + 8))()
int128_t var_80

if (((&arg3[x0_1] - 1) u/ x0_1) u>> 0x20 == 0)
    uint64_t x28_1
    
    x28_1 = x0_1 u> arg7 ? 0 : x0_1
    
    int32_t var_84
    __builtin_memset(&var_84, 0, 0x1c)
    
    if (x28_1 == 0)
        goto label_e37640
    
    void* var_70_1
    
    if ((x28_1 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_e37930:
        int64_t* x0_26 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if ((zx.d(var_80.b) & 1) != 0)
            operator delete(var_70_1)
        
        sub_1101e04(x0_26)
        noreturn
    
    int64_t x0_3 = Botan::allocate_memory(x28_1, 1)
    void* fp_1 = x0_3 + x28_1
    var_80.q = x0_3
    var_70_1 = fp_1
    memcpy(x0_3, arg6, x28_1)
    var_80:8.q = fp_1
label_e37640:
    uint64_t x28_2 = arg6 + x28_1
    void* x8_6 = &arg7[arg6]
    size_t x26_1 = x8_6 - x28_2
    void* var_a0_1
    __builtin_memset(&var_a0_1, 0, 0x18)
    
    if (x8_6 == x28_2)
        goto label_e3768c
    
    if ((x26_1 & 0xffffffff80000000) != 0)
        goto label_e37930
    
    void* x0_5 = Botan::allocate_memory(x26_1, 1)
    void* x27_1 = x0_5 + x26_1
    var_a0_1 = x0_5
    void* var_90_1 = x27_1
    memcpy(x0_5, x28_2, x26_1)
    void* var_98_1 = x27_1
label_e3768c:
    var_84 = _byteswap(arg3.d << 3)
    Botan::SymmetricAlgorithm::set_key(*(arg1 + 8) + 8, arg4)
    
    if (arg3 s< 1)
    label_e377f0:
        void* x0_18 = var_a0_1
        
        if (x0_18 != 0)
            void* var_98_2 = x0_18
            Botan::deallocate_memory(x0_18, var_90_1 - x0_18, 1)
        
        void* x0_19 = var_80.q
        
        if (x0_19 != 0)
            var_80:8.q = x0_19
            Botan::deallocate_memory(x0_19, var_70_1 - x0_19, 1)
        
        return arg3
    
    int64_t x26_2 = var_80.q
    void* x27_2 = &arg3[x22]
    int32_t x28_3 = 1
    
    while (true)
        int32_t var_a4 = _byteswap(x28_3)
        int64_t* x0_7 = *(arg1 + 8)
        size_t x9_1 = x27_2 - x22
        size_t x25_1
        
        x25_1 = x0_1 u< x9_1 ? x0_1 : x9_1
        
        (*(*x0_7 + 0x18))(x0_7, x26_2, var_80:8.q - x26_2)
        int64_t* x0_8 = *(arg1 + 8)
        (*(*x0_8 + 0x18))(x0_8, &var_a4, 4)
        int64_t* x0_9 = *(arg1 + 8)
        int64_t arg_0
        (*(*x0_9 + 0x18))(x0_9, arg8, arg_0)
        int64_t* x0_10 = *(arg1 + 8)
        char var_64 = 0
        (*(*x0_10 + 0x18))(x0_10, &var_64, 1)
        int64_t* x0_11 = *(arg1 + 8)
        void* x1_7 = var_a0_1
        (*(*x0_11 + 0x18))(x0_11, x1_7, var_98_1 - x1_7)
        int64_t* x0_12 = *(arg1 + 8)
        (*(*x0_12 + 0x18))(x0_12, &var_84, 4)
        int64_t* x26_3 = *(arg1 + 8)
        int64_t x0_14 = (**x26_3)(x26_3)
        int64_t x1_9 = var_80.q
        int64_t x8_26 = var_80:8.q - x1_9
        
        if (x0_14 u> x8_26)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
            x1_9 = var_80.q
        else if (x0_14 u< x8_26)
            var_80:8.q = x1_9 + x0_14
        
        (*(*x26_3 + 0x20))(x26_3, x1_9)
        x26_2 = var_80.q
        
        if (x25_1 == 0)
            goto label_e377dc
        
        if (x22 != 0 && x26_2 != 0)
            memmove(x22, x26_2, x25_1)
        label_e377dc:
            int32_t temp1_1 = x28_3
            x28_3 += 1
            
            if (temp1_1 u>= 0xffffffff)
                Botan::assertion_failure("counter != 0", "No overflow", "kdf", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x125db)
            else
                x22 += x25_1
                
                if (x22 u>= x27_2)
                    goto label_e377f0
                
                continue
        
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        break

void** x0_21 = __cxa_allocate_exception(0x20)
int64_t x0_22
int128_t v0
x0_22, v0 = operator new(0x30)
v0 = data_71aa70
int64_t var_70_2 = x0_22
__builtin_strncpy(x0_22, "SP800_108_Feedback output size too large", 0x29)
var_80 = v0
*x0_21 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_21[1])
*x0_21 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_21, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
