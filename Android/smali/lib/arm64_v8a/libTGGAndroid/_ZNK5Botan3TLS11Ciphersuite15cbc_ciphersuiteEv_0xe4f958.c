// 函数: _ZNK5Botan3TLS11Ciphersuite15cbc_ciphersuiteEv
// 地址: 0xe4f958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
char* x20 = *(entry_x0 + 0x28)
size_t x0_1 = strlen(x20)

if (x0_1 u>= -0x10)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

int64_t var_48
size_t var_40
void* var_38
void* x21

if (x0_1 u>= 0x17)
    uint64_t x22_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_3 = operator new(x22_1)
    x21 = x0_3
    var_40 = x0_1
    var_38 = x0_3
    var_48 = x22_1 | 1
    memcpy(x21, x20, x0_1)
else
    x21 = &var_48 | 1
    var_48.b = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        memcpy(x21, x20, x0_1)

*(x21 + x0_1) = 0
uint64_t x9 = zx.q(var_48.b)
int32_t x8_3 = x9.d & 1
size_t x9_2

if (x8_3 == 0)
    x9_2 = x9 u>> 1
else
    x9_2 = var_40

int32_t x19_1

if (x9_2 != 4)
    x19_1 = 1
    
    if ((x8_3 & 0xff) != 0)
        operator delete(var_38)
else
    x19_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_48, 0, -ffffffffffffffff, "AEAD") != 0 ? 1 : 0
    
    if ((zx.d(var_48.b) & 1) != 0)
        operator delete(var_38)

return zx.q(x19_1)
