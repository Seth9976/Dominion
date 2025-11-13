// 函数: sub_f2c454
// 地址: 0xf2c454
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x26 = *(arg1 + 8)
char* x22 = x26[2]
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x20 = **(arg1 + 0x10)
int64_t x19 = *x26
int64_t* x25 = x26[1]
size_t x0_1 = strlen(x22)
int64_t var_80
void* var_70

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
else
    void* x23_1
    
    if (x0_1 u>= 0x17)
        uint64_t x24_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x24_1)
        x23_1 = x0_3
        size_t var_78_1 = x0_1
        var_70 = x0_3
        var_80 = x24_1 | 1
        memcpy(x23_1, x22, x0_1)
    else
        x23_1 = &var_80 | 1
        var_80.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x23_1, x22, x0_1)
    
    *(x23_1 + x0_1) = 0
    Botan::X509_Certificate::issuer_info(x20)
    int64_t x9_1 = x26[3]
    void* var_68
    char* var_60
    
    if (((var_60 - var_68) s>> 3) * -0x5555555555555555 u<= x9_1)
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    else
        char* x8_5 = var_68 + x9_1 * 0x18
        uint64_t x9_2 = zx.q(*x8_5)
        int32_t temp0_1 = x9_2.d & 1
        void* x1_2
        
        if (temp0_1 != 0)
            x1_2 = *(x8_5 + 0x10)
        else
            x1_2 = &x8_5[1]
        
        uint64_t x8_6
        
        if (temp0_1 == 0)
            x8_6 = x9_2 u>> 1
        else
            x8_6 = *(x8_5 + 8)
        
        void* x19_1
        int32_t x20_1
        
        if (x25 == 0)
            x20_1 = -0x1f
            x19_1 = var_68
            
            if (x19_1 == 0)
            label_f2c5f8:
                
                if ((zx.d(var_80.b) & 1) != 0)
                    operator delete(var_70)
                
                return zx.q(x20_1)
            
        label_f2c5ac:
            char* x8_8 = var_60
            void* x0_9
            
            if (x8_8 == x19_1)
                x0_9 = x19_1
            else
                char* x21_2 = x8_8
                
                do
                    x21_2 = &x21_2[-0x18]
                    
                    if ((zx.d(*x21_2) & 1) != 0)
                        operator delete(*(x8_8 - 8))
                    
                    x8_8 = x21_2
                while (x19_1 != x21_2)
                
                x0_9 = var_68
            
            void* var_60_1 = x19_1
            operator delete(x0_9)
            goto label_f2c5f8
        
        size_t x2_2 = *x25
        *x25 = x8_6 + 1
        
        if (x19 == 0 || x2_2 u< x8_6 + 1)
            x20_1 = -0xa
            
            if (x2_2 != 0 && x19 != 0)
                memset(x19, 0, x2_2)
                x20_1 = -0xa
            
            x19_1 = var_68
            
            if (x19_1 == 0)
                goto label_f2c5f8
            
            goto label_f2c5ac
        
        if (x8_6 == -1)
            x20_1 = 0
            x19_1 = var_68
            
            if (x19_1 != 0)
                goto label_f2c5ac
            
            goto label_f2c5f8
        
        if (x1_2 != 0)
            memmove(x19, x1_2, x8_6 + 1)
            x20_1 = 0
            x19_1 = var_68
            
            if (x19_1 != 0)
                goto label_f2c5ac
            
            goto label_f2c5f8

int64_t* x0_12 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

if ((zx.d(var_80.b) & 1) == 0)
    sub_1101e04(x0_12)
    noreturn

operator delete(var_70)
sub_1101e04(x0_12)
noreturn
