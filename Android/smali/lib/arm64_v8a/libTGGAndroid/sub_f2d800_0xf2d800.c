// 函数: sub_f2d800
// 地址: 0xf2d800
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 8)
**(arg1 + 0x10)
int64_t x19 = *x8
int64_t* x20 = x8[1]
void* x0_1 = Botan::X509_Certificate::data()

if (x20 == 0)
    return 0xffffffe1

int64_t x1 = *(x0_1 + 0x148)
size_t x2 = *x20
size_t x8_2 = *(x0_1 + 0x150) - x1
*x20 = x8_2

if (x19 == 0 || x2 u< x8_2)
    if (x2 != 0 && x19 != 0)
        memset(x19, 0, x2)
    
    return 0xfffffff6

if (x8_2 == 0)
    return 0

if (x1 == 0)
    int64_t x0_8
    void* x1_1
    x0_8, x1_1 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    return sub_f2d8cc(x0_8, x1_1) __tailcall

memmove(x19, x1, x8_2)
return 0
