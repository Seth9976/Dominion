// 函数: _ZNSt6__ndk14pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES6_EC2IPKcSA_Lb0EEEONS0_IT_T0_EE
// 地址: 0xf09138
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(std::__ndk1::pair<char const*, char const*>, 0x18) x21
void* __offset(std::__ndk1::pair<char const*, char const*>, 0x18) var_18 = x21
int64_t* entry_x1
char* x22 = *entry_x1
size_t x0_1 = strlen(x22)

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* __offset(std::__ndk1::pair<char const*, char const*>, 0x1) x23_2
    
    if (x0_1 u>= 0x17)
        uint64_t x24_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x24_1)
        x23_2 = x0_3
        *(arg1 + 8) = x0_1
        *(arg1 + 0x10) = x0_3
        *arg1 = x24_1 | 1
        memcpy(x23_2, x22, x0_1)
    else
        *arg1 = (x0_1.d << 1).b
        x23_2 = arg1 + 1
        
        if (x0_1 != 0)
            memcpy(x23_2, x22, x0_1)
    
    *(x23_2 + x0_1) = 0
    char* x22_1 = entry_x1[1]
    size_t result = strlen(x22_1)
    
    if (result u< -0x10)
        size_t result_1 = result
        void* __offset(std::__ndk1::pair<char const*, char const*>, 0x19) x21_2
        
        if (result u>= 0x17)
            uint64_t x23_3 = (result_1 + 0x10) & 0xfffffffffffffff0
            void* x0_7 = operator new(x23_3)
            x21_2 = x0_7
            *(arg1 + 0x20) = result_1
            *(arg1 + 0x28) = x0_7
            *(arg1 + 0x18) = x23_3 | 1
            result = memcpy(x21_2, x22_1, result_1)
        else
            *(arg1 + 0x18) = (result_1.d << 1).b
            x21_2 = arg1 + 0x19
            
            if (result_1 != 0)
                result = memcpy(x21_2, x22_1, result_1)
        
        *(x21_2 + result_1) = 0
        return result

int64_t* x0_11 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

if ((zx.d(*arg1) & 1) != 0)
    operator delete(*(arg1 + 0x10))

sub_1101e04(x0_11)
noreturn
