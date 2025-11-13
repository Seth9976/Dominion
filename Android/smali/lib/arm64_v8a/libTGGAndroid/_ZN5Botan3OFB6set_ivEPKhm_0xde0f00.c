// 函数: _ZN5Botan3OFB6set_ivEPKhm
// 地址: 0xde0f00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_48
size_t entry_x2

if ((*(**(arg1 + 8) + 0x30))() u< entry_x2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_7 = __cxa_allocate_exception(0x20)
    Botan::OFB::name()
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_7, &var_48)
    __cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

int64_t x21 = *(arg1 + 0x10)
int64_t x8_2 = *(arg1 + 0x18)
size_t x23
size_t x2_1

if (x8_2 == x21)
    x23 = 0
    
    x2_1 = 0 u< entry_x2 ? 0 : entry_x2
    
    if (x2_1 != 0)
    label_de0f74:
        
        if (arg2 == 0)
            int64_t* x0_11 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            
            if ((zx.d(var_48) & 1) != 0)
                void* var_38
                operator delete(var_38)
                
                if ((arg2.d & 1) == 0)
                    sub_1101e04(x0_11)
                    noreturn
            else if (arg2.d == 0)
                sub_1101e04(x0_11)
                noreturn
            
            __cxa_free_exception(x21)
            sub_1101e04(x0_11)
            noreturn
        
        memmove(x21, arg2, x2_1)
        x21 = *(arg1 + 0x10)
        x23 = *(arg1 + 0x18) - x21
else
    memset(x21, 0, x8_2 - x21)
    x21 = *(arg1 + 0x10)
    x23 = *(arg1 + 0x18) - x21
    
    x2_1 = x23 u< entry_x2 ? x23 : entry_x2
    
    if (x2_1 != 0)
        goto label_de0f74
int64_t* x20_1 = *(arg1 + 8)
int64_t result = (*(*x20_1 + 0x48))(x20_1, x21, x21, x23 u/ (*(*x20_1 + 0x30))(x20_1))
*(arg1 + 0x28) = 0
return result
