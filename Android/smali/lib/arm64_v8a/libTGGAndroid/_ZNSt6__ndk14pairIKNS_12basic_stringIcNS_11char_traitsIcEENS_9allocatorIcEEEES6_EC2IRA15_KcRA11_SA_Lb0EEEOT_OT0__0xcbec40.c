// 函数: _ZNSt6__ndk14pairIKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES6_EC2IRA15_KcRA11_SA_Lb0EEEOT_OT0_
// 地址: 0xcbec40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21
void* var_18 = x21
size_t x0_1 = strlen(arg2)

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* x23_2
    
    if (x0_1 u>= 0x17)
        uint64_t x24_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x24_1)
        x23_2 = x0_3
        arg1[1] = x0_1
        arg1[2] = x0_3
        *arg1 = x24_1 | 1
        memcpy(x23_2, arg2, x0_1)
    else
        *arg1 = (x0_1.d << 1).b
        x23_2 = arg1 + 1
        
        if (x0_1 != 0)
            memcpy(x23_2, arg2, x0_1)
    
    *(x23_2 + x0_1) = 0
    char* entry_x2
    size_t result = strlen(entry_x2)
    
    if (result u< -0x10)
        size_t result_1 = result
        void* x21_2
        
        if (result u>= 0x17)
            uint64_t x23_3 = (result_1 + 0x10) & 0xfffffffffffffff0
            void* x0_7 = operator new(x23_3)
            x21_2 = x0_7
            arg1[4] = result_1
            arg1[5] = x0_7
            arg1[3] = x23_3 | 1
            result = memcpy(x21_2, entry_x2, result_1)
        else
            arg1[3].b = (result_1.d << 1).b
            x21_2 = arg1 + 0x19
            
            if (result_1 != 0)
                result = memcpy(x21_2, entry_x2, result_1)
        
        *(x21_2 + result_1) = 0
        return result

int64_t* x0_11 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

if ((zx.d(*arg1) & 1) != 0)
    operator delete(arg1[2])

sub_1101e04(x0_11)
noreturn
