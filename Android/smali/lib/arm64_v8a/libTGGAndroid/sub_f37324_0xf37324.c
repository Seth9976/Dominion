// 函数: sub_f37324
// 地址: 0xf37324
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

**(arg1 + 8) = 0
Botan::Public_Key* x0 = operator new(0x10)
Botan::RandomNumberGenerator* x0_2 =
    Botan_FFI::safe_get<Botan::Public_Key, 740844825u>(*(arg1 + 0x10))
Botan::system_rng()
char* x23 = *(arg1 + 0x18)
size_t x0_4 = strlen(x23)

if (x0_4 u>= -0x10)
    int64_t* x0_13 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    (*(*x0 + 0x18))(x0)
    sub_1101e04(x0_13)
    noreturn

int64_t var_58
void* var_48
void* x24

if (x0_4 u>= 0x17)
    uint64_t x25_1 = (x0_4 + 0x10) & 0xfffffffffffffff0
    void* x0_6 = operator new(x25_1)
    x24 = x0_6
    size_t var_50_1 = x0_4
    var_48 = x0_6
    var_58 = x25_1 | 1
    memcpy(x24, x23, x0_4)
else
    x24 = &var_58 | 1
    var_58.b = (x0_4.d << 1).b
    
    if (x0_4 != 0)
        memcpy(x24, x23, x0_4)

*(x24 + x0_4) = 0
int16_t var_70 = 0
Botan::PK_Encryptor_EME::PK_Encryptor_EME(x0, x0_2, &data_23ecbc0, &var_58)

if ((zx.d(var_58.b) & 1) != 0)
    operator delete(var_48)

int64_t* x0_11 = operator new(0x18)
x0_11[2] = x0
x0_11[1].d = 0x891f3fc3
*x0_11 = _vtable_for_botan_pk_op_encrypt_struct + 0x10
**(arg1 + 8) = x0_11
return 0
