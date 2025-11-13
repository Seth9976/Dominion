// 函数: sub_e32a78
// 地址: 0xe32a78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (arg4 u>= 0x10)
    *arg2 = 0
    uint8_t var_80 = 0x20
    int128_t var_7f
    __builtin_strcpy(&var_7f, "ChaCha20Poly1305")
    int16_t var_98 = 0
    Botan::AEAD_Mode::create_or_throw(&var_80, 1, &var_98)
    void* var_88
    
    if ((zx.d(var_98.b) & 1) != 0)
        operator delete(var_88)
    
    if ((zx.d(var_80) & 1) != 0)
        operator delete(var_7f:0xf.q)
    
    int64_t* var_68
    Botan::SymmetricAlgorithm::set_key(var_68, arg9)
    (*(*var_68 + 0x90))(var_68, arg5, arg6)
    (*(*var_68 + 0x30))(var_68, arg7, arg8)
    var_80.q = 0
    var_7f:7.q = 0
    var_7f:0xf.q = 0
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
        &var_80, arg3)
    (*(*var_68 + 0x40))(var_68, &var_80, 0)
    *arg2 = arg4 - 0x10
    void* x21_2 = var_80.q
    int64_t x8_9 = var_7f:7.q
    
    if (x8_9 == x21_2)
        x20 = 0
        
        if (x21_2 != 0)
            var_7f:7.q = x21_2
            Botan::deallocate_memory(x21_2, var_7f:0xf.q - x21_2, 1)
    else
        if (arg1 == 0 || x21_2 == 0)
            sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
            noreturn
        
        memmove(arg1, x21_2, x8_9 - x21_2)
        x20 = 0
        var_7f:7.q = x21_2
        Botan::deallocate_memory(x21_2, var_7f:0xf.q - x21_2, 1)
    
    (*(*var_68 + 8))(var_68)
else
    x20 = -1

return zx.q(x20)
