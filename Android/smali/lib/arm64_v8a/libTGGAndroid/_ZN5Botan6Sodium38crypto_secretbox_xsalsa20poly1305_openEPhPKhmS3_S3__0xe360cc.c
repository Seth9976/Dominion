// 函数: _ZN5Botan6Sodium38crypto_secretbox_xsalsa20poly1305_openEPhPKhmS3_S3_
// 地址: 0xe360cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (arg3 u>= 0x20)
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
    Botan::SymmetricAlgorithm::set_key(var_48, arg5)
    (*(*var_48 + 0x40))(var_48, arg4, 0x18)
    uint64_t x0_5
    int128_t v0_1
    x0_5, v0_1 = Botan::allocate_memory(0x20, 1)
    v0_1.q = 0
    v0_1:8.q = 0
    __builtin_memset(x0_5, 0, 0x20)
    (*(*var_48 + 0x38))(var_48, x0_5, 0x20, v0_1)
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
    (*(*var_80 + 0x18))(var_80, &arg2[0x20], arg3 - 0x20)
    Botan::Buffered_Computation::final()
    char* x8_11 = var_60.q
    var_78.b = 0
    var_78.b |= arg2[0x10] ^ *x8_11
    var_78.b |= arg2[0x11] ^ x8_11[1]
    var_78.b |= arg2[0x12] ^ x8_11[2]
    var_78.b |= arg2[0x13] ^ x8_11[3]
    var_78.b |= arg2[0x14] ^ x8_11[4]
    var_78.b |= arg2[0x15] ^ x8_11[5]
    var_78.b |= arg2[0x16] ^ x8_11[6]
    var_78.b |= arg2[0x17] ^ x8_11[7]
    var_78.b |= arg2[0x18] ^ x8_11[8]
    var_78.b |= arg2[0x19] ^ x8_11[9]
    var_78.b |= arg2[0x1a] ^ x8_11[0xa]
    var_78.b |= arg2[0x1b] ^ x8_11[0xb]
    var_78.b |= arg2[0x1c] ^ x8_11[0xc]
    var_78.b |= arg2[0x1d] ^ x8_11[0xd]
    var_78.b |= arg2[0x1e] ^ x8_11[0xe]
    var_78.b |= arg2[0x1f] ^ x8_11[0xf]
    uint32_t x8_15 = zx.d(var_78.b)
    char var_58
    void* x0_13
    
    if (((x8_15 - 1) & not.d(x8_15) & 0x80) != 0)
        (*(*var_48 + 0x30))(var_48, &arg2[0x20], &arg1[0x20], arg3 - 0x20)
        x20 = 0
        __builtin_memset(arg1, 0, 0x20)
        x0_13 = var_60.q
        
        if (x0_13 != 0)
            var_58.q = x0_13
            Botan::deallocate_memory(x0_13, var_50 - x0_13, 1)
    else
        x20 = -1
        x0_13 = var_60.q
        
        if (x0_13 != 0)
            var_58.q = x0_13
            Botan::deallocate_memory(x0_13, var_50 - x0_13, 1)
    (*(*var_80 + 0x10))(var_80)
    Botan::deallocate_memory(x0_5, 0x20, 1)
    
    if (var_48 != 0)
        (*(*var_48 + 8))()
else
    x20 = -1

return zx.q(x20)
