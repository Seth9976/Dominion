// 函数: _ZN5Botan10RTSS_Share5splitEhhPKhtS2_RNS_21RandomNumberGeneratorE
// 地址: 0xe87590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* x0
int128_t v0
x0, v0 = operator new(0x10)
int128_t* var_68 = x0
void* var_60 = &x0[1]
void* var_58 = &x0[1]
v0 = *arg5
char var_80 = 0xe
int32_t var_7f
__builtin_strncpy(&var_7f, "SHA-256", 8)
*x0 = v0
Botan::RTSS_Share::split(arg1, arg2, arg3, arg4, &var_68, &var_80, arg6)
void* var_70

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)
return operator delete(x0)
