// 函数: _ZNK5Botan18SP800_108_Pipeline3kdfEPhmPKhmS3_mS3_m
// 地址: 0xe37a38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t const* result_1 = arg3
uint64_t x24 = arg2
size_t x0_1 = (***(arg1 + 8))()
int128_t var_90

if (((&result_1[x0_1] - 1) u/ x0_1) u>> 0x20 != 0)
label_e37e8c:
    void** x0_32 = __cxa_allocate_exception(0x20)
    int64_t x0_33
    int128_t v0
    x0_33, v0 = operator new(0x30)
    v0 = data_71aa70
    int64_t var_80_1 = x0_33
    __builtin_strncpy(x0_33, "SP800_108_Feedback output size too large", 0x29)
    var_90 = v0
    *x0_32 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_32[1])
    *x0_32 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_32, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int32_t temp0_1 = _byteswap(result_1.d << 3)
__builtin_memset(&var_90, 0, 0x18)
void* var_b0
__builtin_memset(&var_b0, 0, 0x18)
int32_t var_94 = temp0_1
Botan::SymmetricAlgorithm::set_key(*(arg1 + 8) + 8, arg4)
int128_t* var_70 = &var_90
int64_t i_4

if (i_4 != 0)
    int64_t i_2 = i_4
    uint64_t x27_1 = arg8
    int64_t i
    
    do
        sub_f4a08c(&var_70, x27_1)
        i = i_2
        i_2 -= 1
        x27_1 += 1
    while (i != 1)

char* x8_9 = var_90:8.q
uint8_t const* result = result_1
void* var_80

if (x8_9 u>= var_80)
    void* x27_2 = var_90.q
    void* x19_1 = x8_9 - x27_2
    
    if (x19_1 + 1 s< 0)
        int64_t* x0_37 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if ((zx.d(var_90.b) & 1) != 0)
            operator delete(var_80)
        
        sub_1101e04(x0_37)
        noreturn
    
    void* x9_2 = var_80 - x27_2
    int64_t x11_1 = x9_2 << 1
    int64_t x8_12
    
    if (x11_1 u< x19_1 + 1)
        x8_12 = x19_1 + 1
    else
        x8_12 = x11_1
    
    int64_t x28_1
    
    x28_1 = x9_2 u< 0x3fffffffffffffff ? x8_12 : 0x7fffffffffffffff
    
    void* const x0_5
    size_t x2_1
    
    if (x28_1 == 0)
        x0_5 = nullptr
        x2_1 = x19_1
    else
        x0_5 = Botan::allocate_memory(x28_1, 1)
        x27_2 = var_90.q
        x2_1 = var_90:8.q - x27_2
    
    void* x19_2 = x0_5 + x19_1
    void* x28_2 = x19_2 - x2_1
    *x19_2 = 0
    
    if (x2_1 s>= 1)
        memcpy(x28_2, x27_2, x2_1)
    
    void* x8_14 = var_80
    var_80 = x0_5 + x28_1
    result_1 = result
    var_90.q = x28_2
    var_90:8.q = x19_2 + 1
    
    if (x27_2 != 0)
        Botan::deallocate_memory(x27_2, x8_14 - x27_2, 1)
else
    *x8_9 = 0
    var_90:8.q = &x8_9[1]

var_70 = &var_90

if (arg7 != 0)
    uint8_t const* i_3 = arg7
    char* x27_3 = arg6
    uint8_t const* i_1
    
    do
        sub_f4a08c(&var_70, x27_3)
        i_1 = i_3
        i_3 -= 1
        x27_3 = &x27_3[1]
    while (i_1 != 1)

var_70 = &var_90
sub_f4a08c(&var_70, &var_94)
sub_f4a08c(&var_70, &var_94 | 1)
sub_f4a08c(&var_70, &var_94 | 2)
sub_f4a08c(&var_70, &var_94 | 3)
void* var_a8_2
int64_t var_a0
void* x28_4

if (result_1 s<= 0)
    x28_4 = var_b0
    
    if (x28_4 != 0)
        var_a8_2 = x28_4
        Botan::deallocate_memory(x28_4, var_a0 - x28_4, 1)
else
    void* fp_1 = &result_1[x24]
    int32_t x19_4 = 1
    
    while (true)
        int64_t* x0_13 = *(arg1 + 8)
        int64_t x1_9 = var_90.q
        (*(*x0_13 + 0x18))(x0_13, x1_9, var_90:8.q - x1_9)
        int64_t* x27_4 = *(arg1 + 8)
        int64_t x0_15 = (**x27_4)(x27_4)
        int64_t x1_10 = var_90.q
        int64_t x8_20 = var_90:8.q - x1_10
        
        if (x0_15 u> x8_20)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_90)
            x1_10 = var_90.q
        else if (x0_15 u< x8_20)
            var_90:8.q = x1_10 + x0_15
        
        (*(*x27_4 + 0x20))(x27_4, x1_10)
        var_70.d = _byteswap(x19_4)
        int64_t* x0_18 = *(arg1 + 8)
        int64_t x1_12 = var_90.q
        size_t x9_4 = fp_1 - x24
        size_t x27_5
        
        x27_5 = x0_1 u< x9_4 ? x0_1 : x9_4
        
        (*(*x0_18 + 0x18))(x0_18, x1_12, var_90:8.q - x1_12)
        int64_t* x0_19 = *(arg1 + 8)
        (*(*x0_19 + 0x18))(x0_19, &var_70, 4)
        int64_t* x0_20 = *(arg1 + 8)
        (*(*x0_20 + 0x18))(x0_20, arg8, i_4)
        int64_t* x0_21 = *(arg1 + 8)
        char var_64 = 0
        (*(*x0_21 + 0x18))(x0_21, &var_64, 1)
        int64_t* x0_22 = *(arg1 + 8)
        (*(*x0_22 + 0x18))(x0_22, arg6, arg7)
        int64_t* x0_23 = *(arg1 + 8)
        (*(*x0_23 + 0x18))(x0_23, &var_94, 4)
        int64_t* x28_3 = *(arg1 + 8)
        int64_t x0_25 = (**x28_3)(x28_3)
        void* x1_18 = var_b0
        void* var_a8_1
        int64_t x8_41 = var_a8_1 - x1_18
        
        if (x0_25 u> x8_41)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_b0)
            x1_18 = var_b0
        else if (x0_25 u< x8_41)
            var_a8_1 = x1_18 + x0_25
        
        (*(*x28_3 + 0x20))(x28_3, x1_18)
        x28_4 = var_b0
        
        if (x27_5 == 0)
            goto label_e37db4
        
        if (x24 != 0 && x28_4 != 0)
            memmove(x24, x28_4, x27_5)
        label_e37db4:
            int32_t temp4_1 = x19_4
            x19_4 += 1
            
            if (temp4_1 u>= 0xffffffff)
                Botan::assertion_failure("counter != 0", "No overflow", "kdf", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x12616)
            else
                x24 += x27_5
                
                if (x24 u>= fp_1)
                    break
                
                continue
        
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        goto label_e37e8c
    
    if (x28_4 != 0)
        var_a8_2 = x28_4
        Botan::deallocate_memory(x28_4, var_a0 - x28_4, 1)
void* x0_30 = var_90.q

if (x0_30 != 0)
    var_90:8.q = x0_30
    Botan::deallocate_memory(x0_30, var_80 - x0_30, 1)

return result
