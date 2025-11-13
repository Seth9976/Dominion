// 函数: sub_f2b9d0
// 地址: 0xf2b9d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = operator new(0x88)
char* x22 = *(arg1 + 8)
size_t x0_2 = strlen(x22)

if (x0_2 u>= -0x10)
    int64_t* x0_10 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    (*(*x0 + 0x18))(x0)
    sub_1101e04(x0_10)
    noreturn

int64_t var_58
void* var_48
void* x23

if (x0_2 u>= 0x17)
    uint64_t x24_1 = (x0_2 + 0x10) & 0xfffffffffffffff0
    void* x0_4 = operator new(x24_1)
    x23 = x0_4
    size_t var_50_1 = x0_2
    var_48 = x0_4
    var_58 = x24_1 | 1
    memcpy(x23, x22, x0_2)
else
    x23 = &var_58 | 1
    var_58.b = (x0_2.d << 1).b
    
    if (x0_2 != 0)
        memcpy(x23, x22, x0_2)

*(x23 + x0_2) = 0
Botan::X509_Certificate::X509_Certificate(x0)

if ((zx.d(var_58.b) & 1) != 0)
    operator delete(var_48)

int64_t* x0_8 = operator new(0x18)
x0_8[2] = x0
x0_8[1].d = 0x8f628937
*x0_8 = _vtable_for_botan_x509_cert_struct + 0x10
**(arg1 + 0x10) = x0_8
return 0
