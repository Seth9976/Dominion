// 函数: _ZNK5Botan3TLS11Text_Policy13srtp_profilesEv
// 地址: 0xe845b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char var_90 = 0x1a
int64_t var_8f
__builtin_strncpy(&var_8f, "srtp_profiles", 0xe)
int64_t var_98 = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x0
int64_t result = Botan::TLS::Text_Policy::get_list(entry_x0, &var_90)
void* var_80

if ((zx.d(var_90) & 1) != 0)
    result = operator delete(var_80)

void* var_78
void* x20 = var_78
char* var_70

if (x20 != var_70)
    do
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_90)
        result = Botan::to_uint16(&var_90)
        int16_t* x9_2 = entry_x8[1]
        int64_t x8_2 = entry_x8[2]
        int16_t x22_1 = result.w
        
        if (x9_2 u>= x8_2)
            void* x21_2 = *entry_x8
            void* x23_1 = x9_2 - x21_2
            
            if (x23_1 s<= -3)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                sub_ef2a0c()
                noreturn
            
            int64_t fp_1 = x23_1 s>> 1
            void* x8_3 = x8_2 - x21_2
            void* x9_5
            
            if (x8_3 u< fp_1 + 1)
                x9_5 = fp_1 + 1
            else
                x9_5 = x8_3
            
            void* x28_1
            
            if (0x3fffffffffffffff u> x8_3 s>> 1)
                x28_1 = x9_5
            else
                x28_1 = 0x7fffffffffffffff
            
            int64_t result_1
            void* fp_3
            
            if (x28_1 == 0)
                result_1 = 0
                *(fp_1 << 1) = x22_1
                fp_3 = (fp_1 << 1) + 2
                
                if (x23_1 s>= 1)
                    result = memcpy(result_1, x21_2, x23_1)
            else
                if ((x28_1 & 0xffffffff80000000) != 0)
                    sub_ef2a0c()
                    noreturn
                
                result = operator new(x28_1 << 1)
                result_1 = result
                int16_t* fp_2 = result_1 + (fp_1 << 1)
                *fp_2 = x22_1
                fp_3 = &fp_2[1]
                
                if (x23_1 s>= 1)
                    result = memcpy(result_1, x21_2, x23_1)
            
            *entry_x8 = result_1
            entry_x8[1] = fp_3
            entry_x8[2] = result_1 + (x28_1 << 1)
            
            if (x21_2 != 0)
                result = operator delete(x21_2)
        else
            *x9_2 = x22_1
            entry_x8[1] = &x9_2[1]
        
        if ((zx.d(var_90) & 1) != 0)
            result = operator delete(var_80)
        
        x20 += 0x18
    while (var_70 != x20)
    
    x20 = var_78

if (x20 == 0)
    return result

char* x8_6 = var_70
void* x0_9

if (x8_6 == x20)
    x0_9 = x20
else
    char* x19_1 = x8_6
    
    do
        x19_1 = &x19_1[-0x18]
        
        if ((zx.d(*x19_1) & 1) != 0)
            operator delete(*(x8_6 - 8))
        
        x8_6 = x19_1
    while (x20 != x19_1)
    
    x0_9 = var_78

void* var_70_1 = x20
return operator delete(x0_9)
