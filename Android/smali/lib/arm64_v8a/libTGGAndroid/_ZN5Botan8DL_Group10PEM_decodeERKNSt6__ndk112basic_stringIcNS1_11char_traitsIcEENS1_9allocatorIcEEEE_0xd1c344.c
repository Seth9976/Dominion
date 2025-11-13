// 函数: _ZN5Botan8DL_Group10PEM_decodeERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd1c344
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::PEM_Code::decode(entry_x1, &var_48)
uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
char* var_78
char* var_70
uint64_t x21 = var_70 - var_78
char* result_7

if (var_70 != var_78)
    if ((x21 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    char* result_3
    int128_t v0_1
    int128_t v1_1
    result_3, v0_1, v1_1 = operator new(x21)
    result_1 = result_3
    char* result_5 = result_3
    void* var_50_1 = &result_3[x21]
    char* result_6
    
    if (var_78 == var_70)
        result_6 = result_3
    else
        char* x8_2
        
        if (x21 u>= 0x20)
            if (result_3 u< var_70)
                x8_2 = var_78
            
            if (result_3 u< var_70 && var_78 u< var_70 + result_3 - var_78)
                goto label_d1c414
            
            int64_t i_3 = x21 & 0xffffffffffffffe0
            void* x11_1 = &var_78[0x10]
            result_6 = &result_3[i_3]
            x8_2 = &var_78[i_3]
            void* x12_1 = &result_3[0x10]
            int64_t i_2 = i_3
            int32_t i
            
            do
                v0_1 = *(x11_1 - 0x10)
                v1_1 = *x11_1
                x11_1 += 0x20
                i = i_2
                i_2 -= 0x20
                *(x12_1 - 0x10) = v0_1
                *x12_1 = v1_1
                x12_1 += 0x20
            while (i != 0x20)
            result_3 = result_6
            
            if (x21 != i_3)
                goto label_d1c414
        else
            x8_2 = var_78
        label_d1c414:
            result_6 = result_3
            
            do
                char x10_1 = *x8_2
                x8_2 = &x8_2[1]
                *result_6 = x10_1
                result_6 = &result_6[1]
            while (var_70 != x8_2)
    
    result_7 = result_6

if (var_78 != 0)
    var_70 = var_78
    int64_t var_68
    Botan::deallocate_memory(var_78, var_68 - var_78, 1)

uint64_t x2 = zx.q(sub_d13e50(&var_48))
uint8_t* result_4 = result_1
Botan::DL_Group::BER_decode_DL_group(result_4, result_7 - result_4, x2, 2)
int64_t var_78_1 = 0
int64_t* x20_1 = *(arg1 + 8)
*arg1 = var_78
*(arg1 + 8) = var_70

if (x20_1 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_2 - 1, &x20_1[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        std::__ndk1::__shared_weak_count::__release_weak()

uint8_t* result = result_1

if (result != 0)
    uint8_t* result_2 = result
    result = operator delete(result)

if ((zx.d(var_48.b) & 1) == 0)
    return result

void* var_38
return operator delete(var_38)
