// 函数: sub_de2784
// 地址: 0xde2784
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(arg2) u> 4)
    *arg1 = 0
    return 

int16_t var_40
char var_28

switch (arg2)
    case 0
        var_28 = 0x16
        int64_t var_27
        __builtin_strncpy(&var_27, "HMAC(SHA-1)", 0xc)
        var_40 = 0
        Botan::MessageAuthenticationCode::create(&var_28, &var_40)
    case 1
        var_28 = 0x1a
        int64_t var_27_4
        __builtin_strncpy(&var_27_4, "HMAC(SHA-256)", 0xe)
        var_40 = 0
        Botan::MessageAuthenticationCode::create(&var_28, &var_40)
    case 2
        var_28 = 0x1c
        int64_t var_27_1
        __builtin_strncpy(&var_27_1, "CMAC(Blowfish)", 0xf)
        var_40 = 0
        Botan::MessageAuthenticationCode::create(&var_28, &var_40)
    case 3
        var_28 = 0x1a
        int64_t var_27_2
        __builtin_strncpy(&var_27_2, "HMAC(SHA-384)", 0xe)
        var_40 = 0
        Botan::MessageAuthenticationCode::create(&var_28, &var_40)
    case 4
        var_28 = 0x1a
        int64_t var_27_3
        __builtin_strncpy(&var_27_3, "HMAC(SHA-512)", 0xe)
        var_40 = 0
        Botan::MessageAuthenticationCode::create(&var_28, &var_40)

void* var_18

if ((zx.d(var_40.b) & 1) != 0)
    void* var_30
    operator delete(var_30)
    
    if ((zx.d(var_28) & 1) != 0)
        operator delete(var_18)
else if ((zx.d(var_28) & 1) != 0)
    operator delete(var_18)
