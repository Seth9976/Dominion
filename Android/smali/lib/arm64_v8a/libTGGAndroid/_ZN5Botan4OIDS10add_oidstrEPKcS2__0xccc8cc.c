// 函数: _ZN5Botan4OIDS10add_oidstrEPKcS2_
// 地址: 0xccc8cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x0 = strlen(arg1)
char var_68
void* var_58

if (x0 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* x22_1
    
    if (x0 u>= 0x17)
        uint64_t x23_1 = (x0 + 0x10) & 0xfffffffffffffff0
        void* x0_2 = operator new(x23_1)
        x22_1 = x0_2
        size_t var_60_1 = x0
        var_58 = x0_2
        var_68.q = x23_1 | 1
        memcpy(x22_1, arg1, x0)
    else
        x22_1 = &var_68 | 1
        var_68 = (x0.d << 1).b
        
        if (x0 != 0)
            memcpy(x22_1, arg1, x0)
    
    *(x22_1 + x0) = 0
    void var_50
    Botan::OID::OID(&var_50)
    size_t x0_6 = strlen(arg2)
    
    if (x0_6 u< -0x10)
        int64_t var_80
        void* var_70
        void* x21_1
        
        if (x0_6 u>= 0x17)
            uint64_t x22_2 = (x0_6 + 0x10) & 0xfffffffffffffff0
            void* x0_8 = operator new(x22_2)
            x21_1 = x0_8
            size_t var_78_1 = x0_6
            var_70 = x0_8
            var_80 = x22_2 | 1
            memcpy(x21_1, arg2, x0_6)
        else
            x21_1 = &var_80 | 1
            var_80.b = (x0_6.d << 1).b
            
            if (x0_6 != 0)
                memcpy(x21_1, arg2, x0_6)
        
        *(x21_1 + x0_6) = 0
        sub_ccc658()
        sub_cccc08(&var_50)
        sub_cccac0()
        
        if ((zx.d(var_80.b) & 1) != 0)
            operator delete(var_70)
        
        void* result_1
        void* result = result_1
        
        if (result != 0)
            result = operator delete(result)
        
        if ((zx.d(var_68) & 1) == 0)
            return result
        
        return operator delete(var_58)

int64_t* x0_13 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

if ((zx.d(var_68) & 1) == 0)
    sub_1101e04(x0_13)
    noreturn

operator delete(var_58)
sub_1101e04(x0_13)
noreturn
