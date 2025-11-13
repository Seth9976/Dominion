// 函数: _ZN5Botan8GCM_Mode9start_msgEPKhm
// 地址: 0xd817c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_48
int64_t entry_x2

if (((*(*arg1 + 0x68))(arg1, entry_x2) & 1) == 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_10 = __cxa_allocate_exception(0x20)
    (*(*arg1 + 0x20))(arg1)
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_10, &var_48)
    __cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

int64_t x0_1 = *(arg1 + 0x38)
int64_t x8_2 = *(arg1 + 0x40)
int64_t x9 = x8_2 - x0_1

if (x9 == 0x10)
    goto label_d81824

if (x9 u> 0xf)
    *(arg1 + 0x40) = x0_1 + 0x10
    
    if (x0_1 + 0x10 != x0_1)
        memset(x0_1, 0, 0x10)
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x38])
    x0_1 = *(arg1 + 0x38)
    x8_2 = *(arg1 + 0x40)
label_d81824:
    
    if (x8_2 != x0_1)
        memset(x0_1, 0, x8_2 - x0_1)

if (entry_x2 != 0xc)
    Botan::GHASH::nonce_hash(*(arg1 + 0x30), &arg1[0x38], arg2)
label_d8187c:
    int64_t* x0_4 = *(arg1 + 0x28)
    int64_t x1_3 = *(arg1 + 0x38)
    (*(*x0_4 + 0x40))(x0_4, x1_3, *(arg1 + 0x40) - x1_3)
    int64_t x1_4 = *(arg1 + 0x38)
    int64_t x8_7 = *(arg1 + 0x40)
    int64_t x3_2
    
    if (x8_7 == x1_4)
        x3_2 = 0
    else
        memset(x1_4, 0, x8_7 - x1_4)
        x1_4 = *(arg1 + 0x38)
        x3_2 = *(arg1 + 0x40) - x1_4
    
    int64_t* x0_6 = *(arg1 + 0x28)
    (*(*x0_6 + 0x30))(x0_6, x1_4, x1_4, x3_2)
    uint8_t* x1_5 = *(arg1 + 0x38)
    
    if (*(arg1 + 0x40) - x1_5 == 0x10)
        void* x20_1 = *(arg1 + 0x30)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
            x20_1 + 0x50, x1_5)
        *(x20_1 + 0x28)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            x20_1 + 0x38, *(x20_1 + 0x20))
        int64_t result = *(arg1 + 0x38)
        int64_t x8_13 = *(arg1 + 0x40)
        
        if (x8_13 == result)
            return result
        
        return memset(result, 0, x8_13 - result) __tailcall
    
    Botan::throw_invalid_argument("GHASH requires a 128-bit nonce", "start", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else if (arg2 != 0)
    int64_t* x8_3 = *(arg1 + 0x38)
    
    if (x8_3 != 0)
        x8_3[1].d = *(arg2 + 8)
        *x8_3 = *arg2
        *(*(arg1 + 0x38) + 0xf) = 1
        goto label_d8187c

int64_t* x0_14 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

if ((zx.d(var_48) & 1) != 0)
    void* var_38
    operator delete(var_38)
    
    if (((&arg1[0x38]).d & 1) == 0)
        sub_1101e04(x0_14)
        noreturn
else if ((&arg1[0x38]).d == 0)
    sub_1101e04(x0_14)
    noreturn

__cxa_free_exception(arg2)
sub_1101e04(x0_14)
noreturn
