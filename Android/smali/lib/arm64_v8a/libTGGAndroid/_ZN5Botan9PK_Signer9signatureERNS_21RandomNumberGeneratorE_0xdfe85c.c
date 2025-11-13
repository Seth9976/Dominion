// 函数: _ZN5Botan9PK_Signer9signatureERNS_21RandomNumberGeneratorE
// 地址: 0xdfe85c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result = (*(**arg1 + 8))()
char* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_48
void* var_40
uint64_t x22 = var_40 - var_48
int128_t var_80
void* var_38
char* result_4

if (var_40 == var_48)
label_dfe944:
    
    if (var_48 != 0)
        void* var_40_1 = var_48
        result = Botan::deallocate_memory(var_48, var_38 - var_48, 1)
    
    int32_t x8_5 = *(arg1 + 8)
    void** entry_x8
    char* result_6
    
    if (x8_5 == 1)
        result = sub_dfeb80(entry_x8, &result_1, *(arg1 + 0x10), *(arg1 + 0x18))
        result_6 = result_1
    label_dfe9c4:
        
        if (result_6 == 0)
            return result
        
        char* result_7 = result_6
        return operator delete(result_6)
    
    if (x8_5 == 0)
        result_6 = result_1
        __builtin_memset(entry_x8, 0, 0x18)
        void* x21_1 = result_4 - result_6
        
        if (result_4 != result_6)
            if ((x21_1 & 0xffffffff80000000) != 0)
                int64_t* x0_14 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                std::exception::~exception()
                
                if ((zx.d(var_48.b) & 1) != 0)
                    operator delete(var_38)
                
                void* var_70
                
                if ((zx.d(var_80.b) & 1) != 0)
                    operator delete(var_70)
                __cxa_free_exception(entry_x8)
                char* result_5 = result_1
                
                if (result_5 != 0)
                    char* result_8 = result_5
                    operator delete(result_5)
                
                sub_1101e04(x0_14)
                noreturn
            
            void* x0_4 = operator new(x21_1)
            void* x22_1 = x0_4 + x21_1
            *entry_x8 = x0_4
            entry_x8[1] = x0_4
            entry_x8[2] = x22_1
            result = memcpy(x0_4, result_6, x21_1)
            entry_x8[1] = x22_1
        
        goto label_dfe9c4
else
    if ((x22 & 0xffffffff80000000) == 0)
        int128_t v0_1
        int128_t v1_1
        result, v0_1, v1_1 = operator new(x22)
        result_1 = result
        char* result_2 = result
        void* var_50_1 = &result[x22]
        char* result_3
        
        if (var_48 == var_40)
            result_3 = result
        else
            char* x8_1
            
            if (x22 u>= 0x20)
                if (result u< var_40)
                    x8_1 = var_48
                
                if (result u< var_40 && var_48 u< var_40 + result - var_48)
                    goto label_dfe92c
                
                int64_t i_2 = x22 & 0xffffffffffffffe0
                void* x11_1 = var_48 + 0x10
                result_3 = &result[i_2]
                x8_1 = var_48 + i_2
                void* x12_1 = &result[0x10]
                int64_t i_1 = i_2
                int64_t i
                
                do
                    v0_1 = *(x11_1 - 0x10)
                    v1_1 = *x11_1
                    x11_1 += 0x20
                    i = i_1
                    i_1 -= 0x20
                    *(x12_1 - 0x10) = v0_1
                    *x12_1 = v1_1
                    x12_1 += 0x20
                while (i != 0x20)
                result = result_3
                
                if (x22 != i_2)
                    goto label_dfe92c
            else
                x8_1 = var_48
            label_dfe92c:
                result_3 = result
                
                do
                    char x10_1 = *x8_1
                    x8_1 = &x8_1[1]
                    *result_3 = x10_1
                    result_3 = &result_3[1]
                while (var_40 != x8_1)
        
        result_4 = result_3
        goto label_dfe944
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
void** x0_7 = __cxa_allocate_exception(0x20)
int64_t x0_8
int128_t v0_2
x0_8, v0_2 = operator new(0x30)
int64_t var_70_1 = x0_8
var_80 = data_71aa70
__builtin_strncpy(x0_8, "PK_Signer: Invalid signature format enum", 0x29)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_80)
*x0_7 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_7[1])

if ((zx.d(var_48.b) & 1) != 0)
    operator delete(var_38)

*x0_7 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_7, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
