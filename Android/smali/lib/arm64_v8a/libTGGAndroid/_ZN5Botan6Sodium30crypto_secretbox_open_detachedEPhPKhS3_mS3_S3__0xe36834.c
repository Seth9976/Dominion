// 函数: _ZN5Botan6Sodium30crypto_secretbox_open_detachedEPhPKhS3_mS3_S3_
// 地址: 0xe36834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t const* x24 = arg3
char var_60 = 0xe
int32_t var_5f
__builtin_strncpy(&var_5f, "Salsa20", 8)
int16_t var_78 = 0
Botan::StreamCipher::create_or_throw(&var_60, &var_78)
void* var_68

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

void* var_50

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)

uint8_t* var_48
Botan::SymmetricAlgorithm::set_key(var_48, arg6)
(*(*var_48 + 0x40))(var_48, arg5, 0x18)
uint64_t x0_5
int128_t v0
x0_5, v0 = Botan::allocate_memory(0x20, 1)
v0.q = 0
v0:8.q = 0
__builtin_memset(x0_5, 0, 0x20)
(*(*var_48 + 0x38))(var_48, x0_5, 0x20, v0)
var_60 = 0x10
__builtin_strncpy(&var_5f, "Poly1305", 9)
var_78 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_60, &var_78)

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)

int64_t* var_80
Botan::SymmetricAlgorithm::set_key(&var_80[1], x0_5)
(*(*var_80 + 0x18))(var_80, arg2, arg4)
Botan::Buffered_Computation::final()
void* x0_13 = var_60.q
char var_58
int64_t x8_10 = var_58.q
var_78.b = 0
void* i_1 = x8_10 - x0_13

if (x8_10 != x0_13)
    void* x9_1 = x0_13
    void* i
    
    do
        uint8_t const x10_1 = *x24
        x24 = &x24[1]
        char x11_1 = *x9_1
        x9_1 += 1
        i = i_1
        i_1 -= 1
        var_78.b |= x11_1 ^ x10_1
    while (i != 1)

uint32_t x8_11 = zx.d(var_78.b)
int32_t x21_1

if (((x8_11 - 1) & not.d(x8_11) & 0x80) != 0)
    (*(*var_48 + 0x30))(var_48, arg2, arg1, arg4)
    x0_13 = var_60.q
    x21_1 = 0
    
    if (x0_13 != 0)
        var_58.q = x0_13
        Botan::deallocate_memory(x0_13, var_50 - x0_13, 1)
else
    x21_1 = -1
    
    if (x0_13 != 0)
        var_58.q = x0_13
        Botan::deallocate_memory(x0_13, var_50 - x0_13, 1)

if (var_80 != 0)
    (*(*var_80 + 0x10))(var_80)

if (x0_5 != 0)
    Botan::deallocate_memory(x0_5, 0x20, 1)

if (var_48 != 0)
    (*(*var_48 + 8))(var_48)

return zx.q(x21_1)
