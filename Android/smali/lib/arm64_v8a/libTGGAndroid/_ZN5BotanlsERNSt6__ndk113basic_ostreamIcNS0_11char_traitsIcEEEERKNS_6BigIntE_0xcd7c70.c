// 函数: _ZN5BotanlsERNSt6__ndk113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_6BigIntE
// 地址: 0xcd7c70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + *(*arg1 - 0x18) + 8)

if ((x21 & 0x40) != 0)
    void** x0_10 = __cxa_allocate_exception(0x20)
    int64_t x0_11
    int128_t v0_3
    x0_11, v0_3 = operator new(0x30)
    v0_3 = data_71b7f0
    int64_t var_30_1 = x0_11
    __builtin_strncpy(x0_11, "Octal output of BigInt not supported", 0x25)
    int128_t var_40_1 = v0_3
    *x0_10 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_10[1])
    *x0_10 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t var_60
int128_t var_40
void* var_30

if (*(arg2 + 0x20) == 0)
label_cd7edc:
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(arg1, &data_742a60)
    __builtin_memset(&var_60, 0, 0x18)
    void* var_50
    void* var_50_1
    void* x8_5
    uint64_t x10_11
    
    if ((x21 & 8) != 0)
    label_cd7ef4:
        Botan::BigInt::encode(arg2)
        uint8_t* x0_5 = var_40.q
        int64_t x8_6 = var_40:8.q
        char var_78
        
        if (x0_5 == x8_6)
            var_78 = 4
            int16_t var_77_1 = 0x3030
            char var_75_1 = 0
            
            if (x0_5 != 0)
                var_40:8.q = x0_5
                operator delete(x0_5)
        else
            Botan::hex_encode(x0_5, x8_6 - x0_5, true)
            x0_5 = var_40.q
            
            if (x0_5 != 0)
                var_40:8.q = x0_5
                operator delete(x0_5)
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(var_50)
        
        void* var_68
        x8_5 = var_68
        var_60.o = var_78.o
        x10_11 = zx.q(var_60.b)
        var_50_1 = x8_5
        
        if ((x10_11.d & 1) == 0)
            goto label_cd7e80
        
        goto label_cd7f4c
    
label_cd7e54:
    Botan::BigInt::to_dec_string()
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)
    
    x8_5 = var_30
    var_60.o = var_40
    x10_11 = zx.q(var_60.b)
    var_50_1 = x8_5
    uint64_t x9_7
    uint64_t x11_10
    
    if ((x10_11.d & 1) == 0)
    label_cd7e80:
        x9_7 = x10_11 u>> 1
        
        if (x9_7.d == 0)
        label_cd7eac:
            x11_10 = x9_7
        else
            x11_10 = 0
            
            while (zx.d(*((&var_60 | 1) + x11_10)) == 0x30)
                x11_10 += 1
                
                if (x9_7 == x11_10)
                    goto label_cd7eac
        
        goto label_cd7ec0
    
label_cd7f4c:
    uint64_t var_58
    x9_7 = var_58
    
    if (x9_7 != 0)
        x11_10 = 0
        
        while (zx.d(*(x8_5 + x11_10)) == 0x30)
            x11_10 += 1
            
            if (x9_7 == x11_10)
                goto label_cd7f80
        
    label_cd7ec0:
        
        if ((x10_11.d & 1) == 0)
            x8_5 = &var_60 | 1
        
        x9_7 = x11_10
    
label_cd7f80:
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(arg1, x8_5 + x9_7)
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50_1)
else
    int64_t i_4 = *(arg2 + 0x18)
    
    if (i_4 == -1)
        int64_t x9_1 = *arg2
        int64_t x11_1 = *(arg2 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_4 = 0
            *(arg2 + 0x18) = 0
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_4 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_5 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_5 << 2))
                i = i_5
                i_5 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_4 -= x11_3
            while (i != 1)
            *(arg2 + 0x18) = i_4
            
            if (i_4 u> 1)
                goto label_cd7d70
    else if (i_4 u> 1)
    label_cd7d70:
        
        if (i_4 == -1)
            int64_t x9_4 = *arg2
            int64_t x11_4 = *(arg2 + 8)
            int64_t x10_6 = x11_4 - x9_4
            
            if (x11_4 == x9_4)
                i_4 = 0
                *(arg2 + 0x18) = 0
                
                if (i_4 != 0)
                    goto label_cd7e14
            else
                int64_t x12_10
                
                x12_10 = x10_6 s>= 0 ? x10_6 : -1
                
                int64_t x11_5 = x9_4 - x11_4
                int64_t x12_11
                
                x12_11 = x12_10 s< 1 ? x12_10 : 1
                
                i_4 = x10_6 s>> 2
                int64_t x10_7
                
                x10_7 = x11_5 s> x10_6 ? x11_5 : x10_6
                
                int64_t i_6 = x12_11 * (x10_7 u>> 2)
                uint64_t x11_6 = 1
                int64_t i_1
                
                do
                    int32_t x12_12 = *(x9_4 - 4 + (i_6 << 2))
                    i_1 = i_6
                    i_6 -= 1
                    x11_6 = zx.q(x11_6.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
                    i_4 -= x11_6
                while (i_1 != 1)
                *(arg2 + 0x18) = i_4
                
                if (i_4 u<= 1 && i_4 != 0)
                    goto label_cd7e14
        else if (i_4 u<= 1 && i_4 != 0)
        label_cd7e14:
            int32_t* x9_6 = *arg2
            int32_t x10_9 = 0
            int32_t x11_9
            int64_t i_2
            
            do
                int32_t x11_7 = *x9_6
                x9_6 = &x9_6[1]
                i_2 = i_4
                i_4 -= 1
                x11_9 = (x10_9 ^ 1) & ((x11_7 - 1) & not.d(x11_7)) s>> 0x1f
                x10_9 = x11_9 ^ 1
            while (i_2 != 1)
            
            if ((x11_9 & 0x80000000) != 0)
                goto label_cd7edc
        
        __builtin_memset(&var_60, 0, 0x18)
        
        if ((x21 & 8) != 0)
            goto label_cd7ef4
        
        goto label_cd7e54
    
    int32_t x10_4
    
    if (i_4 != 0)
        int32_t* x9_3 = *arg2
        x10_4 = 0
        int64_t i_7 = i_4
        int64_t i_3
        
        do
            int32_t x12_5 = *x9_3
            x9_3 = &x9_3[1]
            i_3 = i_7
            i_7 -= 1
            int32_t x12_7 = ((x12_5 - 1) & not.d(x12_5)) s>> 0x1f
            x10_4 = (x10_4 & x12_7) | (not.d(x12_7) & 1)
        while (i_3 != 1)
    
    if (i_4 != 0 && x10_4 != 0)
        goto label_cd7d70
    
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(arg1, &data_75c628)

if (*(arg1 + *(*arg1 - 0x18) + 0x20) == 0)
    return arg1

void** x0_15 = __cxa_allocate_exception(0x20)
int64_t x0_16
int128_t v0_4
x0_16, v0_4 = operator new(0x30)
int64_t var_50_2 = x0_16
var_60.o = data_71c510
__builtin_strncpy(x0_16, "BigInt output operator has failed", 0x22)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "I/O error: ", &var_60)
*x0_15 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_15[1])

if ((zx.d(var_40.b) & 1) != 0)
    operator delete(var_30)

*x0_15 = _vtable_for_Botan::Stream_IO_Error + 0x10
__cxa_throw(x0_15, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
noreturn
