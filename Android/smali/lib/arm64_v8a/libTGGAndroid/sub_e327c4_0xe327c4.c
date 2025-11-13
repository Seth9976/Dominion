// 函数: sub_e327c4
// 地址: 0xe327c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t var_78 = 0x20
int128_t var_77
__builtin_strcpy(&var_77, "ChaCha20Poly1305")
int16_t var_90 = 0
Botan::AEAD_Mode::create_or_throw(&var_78, 0, &var_90)
void* var_80

if ((zx.d(var_90.b) & 1) != 0)
    operator delete(var_80)

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_77:0xf.q)

int64_t* var_58
Botan::SymmetricAlgorithm::set_key(var_58, arg9)
(*(*var_58 + 0x90))(var_58, arg5, arg6)
(*(*var_58 + 0x30))(var_58, arg7, arg8)
var_78.q = 0
var_77:7.q = 0
var_77:0xf.q = 0

if (arg4 != -0x10)
    int64_t x0_7 = Botan::allocate_memory(arg4 + 0x10, 1)
    void* x24_1 = var_78.q
    size_t x2_4 = var_77:7.q - x24_1
    int64_t x26_2 = x0_7 - x2_4
    
    if (x2_4 s>= 1)
        memcpy(x26_2, x24_1, x2_4)
    
    var_78.q = x26_2
    var_77:7.q = x0_7
    var_77:0xf.q = x0_7 + arg4 + 0x10
    
    if (x24_1 != 0)
        Botan::deallocate_memory(x24_1, var_77:0xf.q - x24_1, 1)

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(&var_78, 
    arg3)
(*(*var_58 + 0x40))(var_58, &var_78, 0)
void* x22_1 = var_78.q
int64_t x8_10 = var_77:7.q
size_t x23_1 = x8_10 - x22_1

if (x8_10 != x22_1)
    if (arg1 == 0 || x22_1 == 0)
        sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
        noreturn
    
    memmove(arg1, x22_1, x23_1)

if (arg2 != 0)
    *arg2 = x23_1

if (x22_1 != 0)
    var_77:7.q = x22_1
    Botan::deallocate_memory(x22_1, var_77:0xf.q - x22_1, 1)

return (*(*var_58 + 8))(var_58)
