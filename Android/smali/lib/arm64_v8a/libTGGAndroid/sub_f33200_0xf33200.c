// 函数: sub_f33200
// 地址: 0xf33200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x21 = *(arg1 + 8)
size_t x0_1 = strlen(x21)
char var_60
void* var_50
int64_t var_48
void* var_38

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* x22_1
    
    if (x0_1 u>= 0x17)
        uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x23_1)
        x22_1 = x0_3
        size_t var_40_1 = x0_1
        var_38 = x0_3
        var_48 = x23_1 | 1
        memcpy(x22_1, x21, x0_1)
    else
        x22_1 = &var_48 | 1
        var_48.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x22_1, x21, x0_1)
    
    *(x22_1 + x0_1) = 0
    char* x20_2 = *(arg1 + 0x10)
    size_t x0_6 = strlen(x20_2)
    
    if (x0_6 u< -0x10)
        void* x21_1
        
        if (x0_6 u>= 0x17)
            uint64_t x22_2 = (x0_6 + 0x10) & 0xfffffffffffffff0
            void* x0_8 = operator new(x22_2)
            x21_1 = x0_8
            size_t var_58_1 = x0_6
            var_50 = x0_8
            var_60.q = x22_2 | 1
            memcpy(x21_1, x20_2, x0_6)
        else
            x21_1 = &var_60 | 1
            var_60 = (x0_6.d << 1).b
            
            if (x0_6 != 0)
                memcpy(x21_1, x20_2, x0_6)
        
        *(x21_1 + x0_6) = 0
        int32_t x0_11 = Botan::check_bcrypt(&var_48, &var_60)
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_50)
        
        if ((zx.d(var_48.b) & 1) != 0)
            operator delete(var_38)
        
        return zx.q(not.d(x0_11)) & 1

int64_t* x0_15 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)
    
    if ((zx.d(var_48.b) & 1) != 0)
    label_f33388:
        operator delete(var_38)
        sub_1101e04(x0_15)
        noreturn
else if ((zx.d(var_48.b) & 1) != 0)
    goto label_f33388

sub_1101e04(x0_15)
noreturn
