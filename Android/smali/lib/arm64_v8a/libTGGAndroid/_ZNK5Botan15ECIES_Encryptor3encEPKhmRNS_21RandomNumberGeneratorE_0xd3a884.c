// 函数: _ZNK5Botan15ECIES_Encryptor3encEPKhmRNS_21RandomNumberGeneratorE
// 地址: 0xd3a884
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x188)

if (x9 == -1)
    int64_t x8 = *(arg1 + 0x170)
    int64_t x11_1 = *(arg1 + 0x178)
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
    
    *(arg1 + 0x188) = x9

if (x9 == 0)
    void** x0_23 = __cxa_allocate_exception(0x20)
    int64_t x0_24
    int128_t v0
    x0_24, v0 = operator new(0x20)
    int64_t var_50_1 = x0_24
    int128_t var_60 = data_71d400
    __builtin_strncpy(x0_24, "ECIES: the other key is zero", 0x1d)
    *x0_23 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_23[1])
    *x0_23 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_23, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

Botan::ECIES_KA_Operation::derive_secret(&arg1[8], &arg1[0xe0])
uint8_t* x23 = *(arg1 + 0xd8)
*(arg1 + 0xa8)
uint64_t var_80
__builtin_memset(&var_80, 0, 0x18)
uint8_t* result_1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(&var_80, 
    result_1)
Botan::SymmetricAlgorithm::set_key(x23, var_80)
void* x0_3 = var_80
void* var_78
int64_t var_70

if (x0_3 != 0)
    var_78 = x0_3
    Botan::deallocate_memory(x0_3, var_70 - x0_3, 1)

int32_t x0_5

if (*(arg1 + 0x100) == *(arg1 + 0xf8))
    int64_t* x0_4 = *(arg1 + 0xd8)
    x0_5 = (*(*x0_4 + 0x68))(x0_4, 0)

if (*(arg1 + 0x100) != *(arg1 + 0xf8) || (x0_5 & 1) != 0)
    int64_t* x24_1 = *(arg1 + 0xd8)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_80)
    uint64_t x1_5 = var_80
    (*(*x24_1 + 0x30))(x24_1, x1_5, var_78 - x1_5)
    uint64_t x0_8 = var_80
    
    if (x0_8 != 0)
        uint64_t var_78_1 = x0_8
        Botan::deallocate_memory(x0_8, var_70 - x0_8, 1)
    
    __builtin_memset(&var_80, 0, 0x18)
    
    if (arg3 == 0)
        goto label_d3aa24
    
    if ((arg3 & 0xffffffff80000000) != 0)
        goto label_d3ac78
    
    uint64_t x0_10 = Botan::allocate_memory(arg3, 1)
    void* x23_3 = x0_10 + arg3
    var_80 = x0_10
    void* var_70_1 = x23_3
    memcpy(x0_10, arg2, arg3)
    void* var_78_2 = x23_3
label_d3aa24:
    int64_t* x0_11 = *(arg1 + 0xd8)
    (*(*x0_11 + 0x40))(x0_11, &var_80, 0)
    int64_t x21_1 = *(arg1 + 0xe0)
    void* x22_1 = *(arg1 + 0xe8)
    uint64_t x23_4 = var_80
    int64_t x0_13 = (***(arg1 + 0xd0))()
    void* x8_16 = x22_1 + var_78_2 - (x21_1 + x23_4)
    size_t x22_2 = x8_16 + x0_13
    void** entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    void* const x21_2
    void* x23_5
    
    if (x8_16 == neg.q(x0_13))
        x21_2 = nullptr
        x23_5 = nullptr
    label_d3aaa8:
        int64_t x1_9 = *(arg1 + 0xe0)
        void* x23_6 = x23_5 - x21_2
        void* x22_3 = *(arg1 + 0xe8) - x1_9
        void* x2_6
        
        x2_6 = x23_6 u< x22_3 ? x23_6 : x22_3
        
        if (x2_6 == 0)
            goto label_d3aacc
        
        if (x1_9 == 0)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        else
            memmove(x21_2, x1_9, x2_6)
        label_d3aacc:
            size_t x8_18 = x23_6 - x22_3
            
            if (x23_6 u< x22_3)
                Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
            label_d3ac78:
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            else
                uint64_t x1_10 = var_80
                size_t x9_5 = var_78_2 - x1_10
                size_t x2_7
                
                x2_7 = x8_18 u< x9_5 ? x8_18 : x9_5
                
                if (x2_7 == 0)
                    goto label_d3aaf8
                
                if (x1_10 != 0)
                    memmove(x21_2 + x22_3, x1_10, x2_7)
                label_d3aaf8:
                    *(arg1 + 0xc8)
                    Botan::SymmetricAlgorithm::set_key(*(arg1 + 0xd0) + 8, 
                        &result_1[*(arg1 + 0xa8)])
                    int64_t* x0_19 = *(arg1 + 0xd0)
                    uint64_t x1_12 = var_80
                    (*(*x0_19 + 0x18))(x0_19, x1_12, var_78_2 - x1_12)
                    int64_t x1_13 = *(arg1 + 0x198)
                    int64_t x8_22 = *(arg1 + 0x1a0)
                    
                    if (x1_13 != x8_22)
                        int64_t* x0_20 = *(arg1 + 0xd0)
                        (*(*x0_20 + 0x18))(x0_20, x1_13, x8_22 - x1_13)
                    
                    int64_t* x0_21 = *(arg1 + 0xd0)
                    (*(*x0_21 + 0x20))(x0_21, 
                        *entry_x8 + *(arg1 + 0xe8) - *(arg1 + 0xe0) + var_78_2 - var_80)
                    uint64_t x0_22 = var_80
                    
                    if (x0_22 != 0)
                        uint64_t var_78_3 = x0_22
                        Botan::deallocate_memory(x0_22, var_70_1 - x0_22, 1)
                    
                    uint8_t* result = result_1
                    
                    if (result == 0)
                        return result
                    
                    result_1 = result
                    int64_t var_50
                    return Botan::deallocate_memory(result, var_50 - result, 1)
    else
        if ((x22_2 & 0xffffffff80000000) == 0)
            void* x0_15 = operator new(x22_2)
            x23_5 = x0_15 + x22_2
            x21_2 = x0_15
            *entry_x8 = x0_15
            entry_x8[2] = x23_5
            memset(x0_15, 0, x22_2)
            entry_x8[1] = x23_5
            goto label_d3aaa8
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

void** x0_28 = __cxa_allocate_exception(0x20)
int64_t* x9_14 = *(arg1 + 0xd8)
(*(*x9_14 + 0x20))(x9_14)
void var_b8
int128_t* x0_31
int128_t v0_1
x0_31, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_b8, nullptr)
int64_t var_90 = x0_31[1].q
int128_t var_a0 = *x0_31
__builtin_memset(x0_31, 0, 0x18)
int128_t* x0_33
int128_t v0_2
x0_33, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_a0)
int64_t var_70_2 = x0_33[1].q
var_80.o = *x0_33
__builtin_memset(x0_33, 0, 0x18)
*x0_28 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_28[1])
*x0_28 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_28, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
