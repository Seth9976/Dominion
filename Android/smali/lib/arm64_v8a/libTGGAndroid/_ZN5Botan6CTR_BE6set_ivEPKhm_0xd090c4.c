// 函数: _ZN5Botan6CTR_BE6set_ivEPKhm
// 地址: 0xd090c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x28 = *(arg1 + 0x10)
char var_78
size_t entry_x2

if (x28 u< entry_x2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_9 = __cxa_allocate_exception(0x20)
    Botan::CTR_BE::name()
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_9, &var_78)
    __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

void* x23 = *(arg1 + 0x58)
void* x24 = *(arg1 + 0x60)
size_t x25 = x24 - x23
size_t x26 = x28 - x25

if (x28 u<= x25)
    if (x28 u>= x25)
        goto label_d091d4
    
    x24 = x23 + x28
label_d09180:
    *(arg1 + 0x60) = x24
label_d091d4:
    int64_t x0_6 = *(arg1 + 0x58)
    size_t x2_4
    
    if (x24 == x0_6)
        x2_4 = 0 u< entry_x2 ? 0 : entry_x2
        
        if (x2_4 == 0)
            return Botan::CTR_BE::seek(arg1) __tailcall
    else
        memset(x0_6, 0, x24 - x0_6)
        x0_6 = *(arg1 + 0x58)
        size_t x8_4 = *(arg1 + 0x60) - x0_6
        
        x2_4 = x8_4 u< entry_x2 ? x8_4 : entry_x2
        
        if (x2_4 == 0)
            return Botan::CTR_BE::seek(arg1) __tailcall
    
    if (arg2 != 0)
        memmove(x0_6, arg2, x2_4)
        return Botan::CTR_BE::seek(arg1) __tailcall
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    int64_t x8_1 = *(arg1 + 0x68)
    
    if (x8_1 - x24 u>= x26)
        if (x26 != 0)
            memset(x24, 0, x26)
            x24 += x26
        
        goto label_d09180
    
    if ((x28 & 0xffffffff80000000) == 0)
        void* x8_2 = x8_1 - x23
        int64_t x10_1 = x8_2 << 1
        int64_t x10_2
        
        x10_2 = x10_1 u< x28 ? x28 : x10_1
        
        int64_t x24_1
        
        x24_1 = x8_2 u< 0x3fffffffffffffff ? x10_2 : 0x7fffffffffffffff
        
        void* const x27_1
        
        if (x24_1 == 0)
            x27_1 = nullptr
        else
            x27_1 = operator new(x24_1)
        
        x24 = x27_1 + x28
        memset(x27_1 + x25, 0, x26)
        
        if (x25 s>= 1)
            memcpy(x27_1, x23, x25)
        
        *(arg1 + 0x58) = x27_1
        *(arg1 + 0x60) = x24
        *(arg1 + 0x68) = x27_1 + x24_1
        
        if (x23 != 0)
            operator delete(x23)
            x24 = *(arg1 + 0x60)
        
        goto label_d091d4

int64_t* x0_14 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_78) & 1) != 0)
    void* var_68
    operator delete(var_68)
    
    if (((&arg1[0x58]).d & 1) == 0)
        sub_1101e04(x0_14)
        noreturn
else if ((&arg1[0x58]).d == 0)
    sub_1101e04(x0_14)
    noreturn

__cxa_free_exception(arg2)
sub_1101e04(x0_14)
noreturn
