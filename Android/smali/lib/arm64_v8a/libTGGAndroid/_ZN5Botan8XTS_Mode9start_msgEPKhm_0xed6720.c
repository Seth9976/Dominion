// 函数: _ZN5Botan8XTS_Mode9start_msgEPKhm
// 地址: 0xed6720
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_48
size_t entry_x2

if (((*(*arg1 + 0x68))(arg1, entry_x2) & 1) == 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_10 = __cxa_allocate_exception(0x20)
    (*(*arg1 + 0x20))(arg1)
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_10, &var_48)
    __cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

int64_t x0_2 = (*(*arg1 + 0x50))(arg1)
int64_t x1_1 = *(arg1 + 0x18)
int64_t x8_5 = *(arg1 + 0x20) - x1_1

if (x0_2 u> x8_5)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x18])
    x1_1 = *(arg1 + 0x18)
else if (x0_2 u< x8_5)
    *(arg1 + 0x20) = x1_1 + x0_2

if (entry_x2 != 0)
    if (arg2 == 0 || x1_1 == 0)
        int64_t* x0_14 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        
        if ((zx.d(var_48) & 1) != 0)
            void* var_38
            operator delete(var_38)
            
            if (((&arg1[0x18]).d & 1) == 0)
                sub_1101e04(x0_14)
                noreturn
        else if ((&arg1[0x18]).d == 0)
            sub_1101e04(x0_14)
            noreturn
        
        __cxa_free_exception(arg2)
        sub_1101e04(x0_14)
        noreturn
    
    memmove(x1_1, arg2, entry_x2)
    x1_1 = *(arg1 + 0x18)

int64_t* x0_5 = *(arg1 + 0x10)
(*(*x0_5 + 0x48))(x0_5, x1_1, x1_1, 1)
uint64_t x0_7 = (*(**(arg1 + 0x10) + 0x30))()
int64_t result = (*(*arg1 + 0x50))(arg1)
uint64_t x21_1 = result u/ x0_7

if (x21_1 u>= 2)
    int64_t x22_2 = 0
    int64_t x23_1 = 1
    
    do
        void* x8_14 = *(arg1 + 0x18)
        result = Botan::poly_double_n_le(x8_14 + x0_7 + x22_2, x8_14 + x22_2, x0_7)
        x23_1 += 1
        x22_2 += x0_7
    while (x23_1 != x21_1)

return result
