// 函数: _ZN5Botan22Encrypted_PSK_DatabaseC2ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xdf02c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x28) = 0
*arg1 = _vtable_for_Botan::Encrypted_PSK_Database + 0x10
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 8) = zx.o(0)
char var_48 = 0xe
int32_t var_47
__builtin_strncpy(&var_47, "AES-256", 8)
int16_t var_60 = 0
Botan::BlockCipher::create_or_throw(&var_48, &var_60)
int64_t* var_28_1 = nullptr
int64_t* x0_1 = *(arg1 + 8)
int64_t var_28
*(arg1 + 8) = var_28
void* var_50
int64_t var_28_2

if (x0_1 == 0)
    var_28_2 = 0
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)
else
    (*(*x0_1 + 8))()
    var_28_2 = 0
    
    if (var_28_1 != 0)
        (*(*var_28_1 + 8))()
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)

void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

var_48 = 0x1a
__builtin_strncpy(&var_47, "HMAC(SHA-256)", 0xe)
var_60 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_48, &var_60)
int64_t* x0_6 = *(arg1 + 0x10)
*(arg1 + 0x10) = var_28_2

if (x0_6 != 0)
    (*(*x0_6 + 0x10))()

if ((zx.d(var_60.b) & 1) != 0)
    operator delete(var_50)

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

int64_t* entry_x1
entry_x1[1]
Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x10) + 8, *entry_x1)
uint8_t* x20_1 = *(arg1 + 8)
int64_t* x21 = *(arg1 + 0x10)
var_60.b = 8
__builtin_strncpy(&var_60:1, "wrap", 5)
(*(*x21 + 0x18))(x21, &var_60 | 1, 4)
Botan::Buffered_Computation::final()
Botan::SymmetricAlgorithm::set_key(x20_1, var_48.q)
void* x0_13 = var_48.q
char var_40

if (x0_13 != 0)
    var_40.q = x0_13
    Botan::deallocate_memory(x0_13, var_38 - x0_13, 1)

if ((zx.d(var_60.b) & 1) != 0)
    operator delete(var_50)

int64_t* x21_1 = *(arg1 + 0x10)
var_60.b = 8
__builtin_strncpy(&var_60:1, "hmac", 5)
(*(*x21_1 + 0x18))(x21_1, &var_60 | 1, 4)
Botan::Buffered_Computation::final()
Botan::SymmetricAlgorithm::set_key(&x21_1[1], var_48.q)
void* result = var_48.q

if (result != 0)
    var_40.q = result
    result = Botan::deallocate_memory(result, var_38 - result, 1)

if ((zx.d(var_60.b) & 1) == 0)
    return result

return operator delete(var_50)
