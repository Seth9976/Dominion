// 函数: _ZN5Botan7TLS_PRFC1Ev
// 地址: 0xdee8a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_30 = 0x12
int64_t var_2f
__builtin_strcpy(&var_2f, "HMAC(MD5)")
int16_t var_48 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_30, &var_48)
char var_68 = 0x16
int64_t var_67
__builtin_strncpy(&var_67, "HMAC(SHA-1)", 0xc)
int16_t var_80 = 0
int64_t result = Botan::MessageAuthenticationCode::create_or_throw(&var_68, &var_80)
void** entry_x0
*entry_x0 = _vtable_for_Botan::TLS_PRF + 0x10
int64_t var_18
entry_x0[1] = var_18
int64_t var_50
entry_x0[2] = var_50
int64_t var_50_1 = 0

if ((zx.d(var_80.b) & 1) == 0)
    if ((zx.d(var_68) & 1) != 0)
        goto label_dee980
    
    goto label_dee950

void* var_70
result = operator delete(var_70)

if ((zx.d(var_68) & 1) != 0)
label_dee980:
    void* var_58
    result = operator delete(var_58)
    int64_t var_18_2 = 0
    
    if ((zx.d(var_48.b) & 1) == 0)
        goto label_dee95c
    
    goto label_dee994

label_dee950:
int64_t var_18_1 = 0
void* var_20

if ((zx.d(var_48.b) & 1) != 0)
label_dee994:
    void* var_38
    result = operator delete(var_38)
    
    if ((zx.d(var_30) & 1) != 0)
        return operator delete(var_20)
else
label_dee95c:
    
    if ((zx.d(var_30) & 1) != 0)
        return operator delete(var_20)
return result
