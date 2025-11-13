// 函数: sub_f2f898
// 地址: 0xf2f898
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* var_10 = arg2
char* x21 = *(arg1 + 0x10)
int32_t x24 = *(arg1 + 8)
size_t x0_1 = strlen(x21)

if (x0_1 u>= -0x10)
    int64_t* x0_10 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    (*(*arg2 + 8))(arg2)
    sub_1101e04(x0_10)
    noreturn

int64_t var_58
void* var_48
void* x22

if (x0_1 u>= 0x17)
    uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_3 = operator new(x23_1)
    x22 = x0_3
    size_t var_50_1 = x0_1
    var_48 = x0_3
    var_58 = x23_1 | 1
    memcpy(x22, x21, x0_1)
else
    x22 = &var_58 | 1
    var_58.b = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        memcpy(x22, x21, x0_1)

*(x22 + x0_1) = 0
int16_t var_70 = 0
Botan::Cipher_Mode::create(&var_58, zx.q(x24) & 1, &var_70)

if ((zx.d(var_70.b) & 1) == 0)
    if ((zx.d(var_58.b) & 1) != 0)
        goto label_f2f9a4
    
    goto label_f2f948

void* var_60
operator delete(var_60)
int64_t x20_1
int64_t var_38

if ((zx.d(var_58.b) & 1) == 0)
label_f2f948:
    x20_1 = var_38
    
    if (x20_1 == 0)
        return 0xffffffd8
else
label_f2f9a4:
    operator delete(var_48)
    x20_1 = var_38
    
    if (x20_1 == 0)
        return 0xffffffd8
void** x0_6 = operator new(0x30)
x0_6[1].d = 0xb4a2bf9c
x0_6[2] = x20_1
x0_6[3] = 0
*x0_6 = _vtable_for_botan_cipher_struct + 0x10
x0_6[4] = 0
x0_6[5] = 0
**(arg1 + 0x18) = x0_6
return 0
