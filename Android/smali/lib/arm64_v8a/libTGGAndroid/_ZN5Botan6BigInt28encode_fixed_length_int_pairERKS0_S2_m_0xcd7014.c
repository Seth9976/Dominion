// 函数: _ZN5Botan6BigInt28encode_fixed_length_int_pairERKS0_S2_m
// 地址: 0xcd7014
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Botan::BigInt::bits()
int64_t x8_2

if ((x0 & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (x0 & 7)

int128_t var_70
char var_58
void* var_48

if (arg3 u>= (x8_2 + x0) u>> 3)
    int64_t result = Botan::BigInt::bits()
    int64_t x8_6
    
    if ((result & 7) == 0)
        x8_6 = 0
    else
        x8_6 = 8 - (result & 7)
    
    if (arg3 u>= (x8_6 + result) u>> 3)
        uint64_t x24 = arg3 << 1
        int64_t* entry_x8
        __builtin_memset(entry_x8, 0, 0x18)
        int64_t i_1
        uint64_t x9
        int64_t x21
        
        if (x24 == 0)
            x21 = 0
            x9 = arg3 u>> 2
            i_1 = arg3 & 3
            
            if (x9 != 0)
            label_cd70e4:
                int64_t x11_1 = *arg1
                int64_t x10_1 = 0
                int32_t* x13_2 = arg3 + x21 - 4
                int64_t x12_3 = (*(arg1 + 8) - x11_1) s>> 2
                
                do
                    int32_t x14_1
                    
                    if (x12_3 u> x10_1)
                        x14_1 = *(x11_1 + (x10_1 << 2))
                    else
                        x14_1 = 0
                    
                    x10_1 += 1
                    *x13_2 = _byteswap(x14_1)
                    x13_2 = &x13_2[-1]
                while (x9 != x10_1)
        else
            if ((x24 & 0xffffffff80000000) != 0)
                int64_t* x0_11 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                std::exception::~exception()
                
                if ((zx.d(var_58) & 1) != 0)
                    operator delete(var_48)
                
                void* var_60
                
                if ((zx.d(var_70.b) & 1) != 0)
                    operator delete(var_60)
                __cxa_free_exception(arg3)
                sub_1101e04(x0_11)
                noreturn
            
            int64_t x0_3 = Botan::allocate_memory(x24, 1)
            int64_t x25_1 = x0_3 + x24
            x21 = x0_3
            *entry_x8 = x0_3
            entry_x8[2] = x25_1
            result = memset(x0_3, 0, x24)
            entry_x8[1] = x25_1
            x9 = arg3 u>> 2
            i_1 = arg3 & 3
            
            if (x9 != 0)
                goto label_cd70e4
        
        if (i_1 != 0)
            int64_t x10_2 = *arg1
            int32_t x10_3
            
            if (x9 u>= (*(arg1 + 8) - x10_2) s>> 2)
                x10_3 = 0
            else
                x10_3 = *(x10_2 + (x9 << 2))
            
            int32_t x12_4 = 0x18
            int64_t i = i_1
            
            do
                (x21 - 1)[i] = (x10_3 u>> (not.d(x12_4) & 0x18)).b
                i -= 1
                x12_4 -= 8
            while (i != 0)
        
        if (x9 != 0)
            int64_t x11_5 = *arg2
            int64_t x10_4 = 0
            int32_t* x13_4 = x21 + (arg3 << 1) - 4
            int64_t x12_7 = (*(arg2 + 8) - x11_5) s>> 2
            
            do
                int32_t x14_6
                
                if (x12_7 u> x10_4)
                    x14_6 = *(x11_5 + (x10_4 << 2))
                else
                    x14_6 = 0
                
                x10_4 += 1
                *x13_4 = _byteswap(x14_6)
                x13_4 = &x13_4[-1]
            while (x9 != x10_4)
        
        if (i_1 != 0)
            int64_t x10_5 = *arg2
            int32_t x9_1
            
            if (x9 u>= (*(arg2 + 8) - x10_5) s>> 2)
                x9_1 = 0
            else
                x9_1 = *(x10_5 + (x9 << 2))
            
            int32_t x11_8 = 0x18
            
            do
                (arg3 + x21 - 1)[i_1] = (x9_1 u>> (not.d(x11_8) & 0x18)).b
                i_1 -= 1
                x11_8 -= 8
            while (i_1 != 0)
        
        return result

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0
x0_5, v0 = operator new(0x50)
var_70 = data_71cfd0
int64_t var_60_1 = x0_5
__builtin_strncpy(x0_5, "encode_fixed_length_int_pair: values too large to encode properly", 0x42)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_70)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

*x0_4 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
