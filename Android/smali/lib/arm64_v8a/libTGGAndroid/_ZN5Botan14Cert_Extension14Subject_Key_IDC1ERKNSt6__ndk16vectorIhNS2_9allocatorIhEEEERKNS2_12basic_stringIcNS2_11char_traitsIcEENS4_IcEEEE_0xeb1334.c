// 函数: _ZN5Botan14Cert_Extension14Subject_Key_IDC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS4_IcEEEE
// 地址: 0xeb1334
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Cert_Extension::Subject_Key_ID + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
int16_t var_70 = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x2
Botan::HashFunction::create_or_throw(entry_x2, &var_70)
void* var_60

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)

int64_t* result
int64_t x0_3 = (**result)()
void* x22 = *(arg1 + 8)
int64_t x0_4 = *(arg1 + 0x10)
size_t x23 = x0_4 - x22
size_t x24 = x0_3 - x23

if (x0_3 u> x23)
    int64_t x8_4 = *(arg1 + 0x18)
    
    if (x8_4 - x0_4 u>= x24)
        if (x24 != 0)
            memset(x0_4, 0, x24)
            x0_4 += x24
        
        *(arg1 + 0x10) = x0_4
    else
        if ((x0_3 & 0xffffffff80000000) != 0)
            int64_t* x0_14 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            
            if ((zx.d(var_70.b) & 1) != 0)
                operator delete(var_60)
            
            void* x0_16 = *(arg1 + 8)
            
            if (x0_16 != 0)
                *(arg1 + 0x10) = x0_16
                operator delete(x0_16)
            
            sub_1101e04(x0_14)
            noreturn
        
        void* x8_5 = x8_4 - x22
        int64_t x10_1 = x8_5 << 1
        int64_t x10_2
        
        x10_2 = x10_1 u< x0_3 ? x0_3 : x10_1
        
        int64_t x27_1
        
        x27_1 = x8_5 u< 0x3fffffffffffffff ? x10_2 : 0x7fffffffffffffff
        
        int64_t x26_1
        
        if (x27_1 == 0)
            x26_1 = 0
        else
            x26_1 = operator new(x27_1)
        
        memset(x26_1 + x23, 0, x24)
        
        if (x23 s>= 1)
            memcpy(x26_1, x22, x23)
        
        *(arg1 + 8) = x26_1
        *(arg1 + 0x10) = x26_1 + x0_3
        *(arg1 + 0x18) = x26_1 + x27_1
        
        if (x22 != 0)
            operator delete(x22)
else if (x0_3 u< x23)
    *(arg1 + 0x10) = x22 + x0_3

int64_t x1_2 = *arg2
(*(*result + 0x18))(result, x1_2, *(arg2 + 8) - x1_2)
(*(*result + 0x20))(result, *(arg1 + 8))
int64_t x8_11 = *(arg1 + 8)

if (*(arg1 + 0x10) - x8_11 u>= 0x19)
    *(arg1 + 0x10) = x8_11 + 0x18

int64_t var_58 = 0

if (result == 0)
    return result

return (*(*result + 0x10))()
