// 函数: sub_f40714
// 地址: 0xf40714
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 8)
void* x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = __dynamic_cast(**(arg1 + 0x10), _typeinfo_for_Botan::Private_Key, 
    _typeinfo_for_Botan::Curve25519_PrivateKey, -1)

if (x0_1 == 0)
    return 0xffffffe0

int128_t* x8_1 = *(x0_1 + 0x20)

if (*(x0_1 + 0x28) - x8_1 != 0x20)
    return 0xfffffff6

if (x8_1 != 0)
    int128_t* x9_2 = *x19
    
    if (x9_2 != 0)
        v0 = x8_1[1]
        *x9_2 = *x8_1
        x9_2[1] = v0
        return 0

int64_t x0_5
void* x1_1
x0_5, x1_1 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return sub_f407ac(x0_5, x1_1) __tailcall
