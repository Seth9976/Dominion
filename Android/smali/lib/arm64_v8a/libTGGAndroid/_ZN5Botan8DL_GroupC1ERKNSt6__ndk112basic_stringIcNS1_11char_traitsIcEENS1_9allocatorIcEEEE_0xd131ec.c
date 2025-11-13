// 函数: _ZN5Botan8DL_GroupC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd131ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
uint8_t* result = Botan::DL_Group::DL_group_info(entry_x1)
int64_t var_48 = 0
int64_t* var_40_1 = nullptr
int64_t* x21 = *(arg1 + 8)
*arg1 = var_48
int64_t var_40
*(arg1 + 8) = var_40

if (x21 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x21[1])
        i = __stlxr(x9_1 - 1, &x21[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x21 + 0x10))(x21)
        result = std::__ndk1::__shared_weak_count::__release_weak()

if (var_40_1 == 0)
label_d1327c:
    
    if (*arg1 == 0)
    label_d13280:
        __builtin_memset(&var_48, 0, 0x18)
        Botan::PEM_Code::decode(entry_x1, &var_48)
        uint8_t* result_1
        __builtin_memset(&result_1, 0, 0x18)
        char* var_78
        char* var_70
        uint64_t x22_1 = var_70 - var_78
        char* result_7
        void* var_38
        
        if (var_70 != var_78)
            if ((x22_1 & 0xffffffff80000000) != 0)
                int64_t* x0_18 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                
                if ((zx.d(var_48.b) & 1) != 0)
                    operator delete(var_38)
                
                int64_t* x19_1 = *(arg1 + 8)
                
                if (x19_1 != 0)
                    int64_t x9_6
                    int32_t i_1
                    
                    do
                        x9_6 = __ldaxr(&x19_1[1])
                        i_1 = __stlxr(x9_6 - 1, &x19_1[1])
                    while (i_1 != 0)
                    
                    if (x9_6 == 0)
                        (*(*x19_1 + 0x10))(x19_1)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                sub_1101e04(x0_18)
                noreturn
            
            char* result_3
            int128_t v0_1
            int128_t v1_1
            result_3, v0_1, v1_1 = operator new(x22_1)
            result_1 = result_3
            char* result_5 = result_3
            void* var_50_1 = &result_3[x22_1]
            char* result_6
            
            if (var_78 == var_70)
                result_6 = result_3
            else
                char* x8_7
                
                if (x22_1 u>= 0x20)
                    if (result_3 u< var_70)
                        x8_7 = var_78
                    
                    if (result_3 u< var_70 && var_78 u< var_70 + result_3 - var_78)
                        goto label_d13360
                    
                    int64_t i_6 = x22_1 & 0xffffffffffffffe0
                    void* x11_3 = &var_78[0x10]
                    result_6 = &result_3[i_6]
                    x8_7 = &var_78[i_6]
                    void* x12_1 = &result_3[0x10]
                    int64_t i_5 = i_6
                    int32_t i_2
                    
                    do
                        v0_1 = *(x11_3 - 0x10)
                        v1_1 = *x11_3
                        x11_3 += 0x20
                        i_2 = i_5
                        i_5 -= 0x20
                        *(x12_1 - 0x10) = v0_1
                        *x12_1 = v1_1
                        x12_1 += 0x20
                    while (i_2 != 0x20)
                    result_3 = result_6
                    
                    if (x22_1 != i_6)
                        goto label_d13360
                else
                    x8_7 = var_78
                label_d13360:
                    result_6 = result_3
                    
                    do
                        char x10_3 = *x8_7
                        x8_7 = &x8_7[1]
                        *result_6 = x10_3
                        result_6 = &result_6[1]
                    while (var_70 != x8_7)
            
            result_7 = result_6
        
        if (var_78 != 0)
            var_70 = var_78
            int64_t var_68
            Botan::deallocate_memory(var_78, var_68 - var_78, 1)
        
        uint64_t x2_1 = zx.q(sub_d13e50(&var_48))
        uint8_t* result_4 = result_1
        Botan::DL_Group::BER_decode_DL_group(result_4, result_7 - result_4, x2_1, 2)
        int64_t var_78_1 = 0
        int64_t* x21_3 = *(arg1 + 8)
        *arg1 = var_78
        *(arg1 + 8) = var_70
        
        if (x21_3 != 0)
            int64_t x9_4
            int32_t i_3
            
            do
                x9_4 = __ldaxr(&x21_3[1])
                i_3 = __stlxr(x9_4 - 1, &x21_3[1])
            while (i_3 != 0)
            
            if (x9_4 == 0)
                (*(*x21_3 + 0x10))(x21_3)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        result = result_1
        
        if (result != 0)
            uint8_t* result_2 = result
            result = operator delete(result)
        
        if ((zx.d(var_48.b) & 1) != 0)
            result = operator delete(var_38)
        
        if (*arg1 == 0)
            void** x0_14 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "DL_Group: Unknown group ", entry_x1)
            *x0_14 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_14[1])
            *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
else
    int64_t x9_2
    int32_t i_4
    
    do
        x9_2 = __ldaxr(&var_40_1[1])
        i_4 = __stlxr(x9_2 - 1, &var_40_1[1])
    while (i_4 != 0)
    
    if (x9_2 != 0)
        goto label_d1327c
    
    (*(*var_40_1 + 0x10))(var_40_1)
    result = std::__ndk1::__shared_weak_count::__release_weak()
    
    if (*arg1 == 0)
        goto label_d13280

return result
