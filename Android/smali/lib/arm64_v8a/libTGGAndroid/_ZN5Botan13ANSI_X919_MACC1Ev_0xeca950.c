// 函数: _ZN5Botan13ANSI_X919_MACC1Ev
// 地址: 0xeca950
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::ANSI_X919_MAC + 0x10
entry_x0[1] = _vtable_for_Botan::ANSI_X919_MAC + 0x98
char var_38 = 6
int32_t var_37 = 0x534544
int16_t var_50 = 0
Botan::BlockCipher::create(&var_38, &var_50)
void* var_40

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
int64_t result = (*(*entry_x0[2] + 0x68))()
entry_x0[3] = result
__builtin_memset(&entry_x0[4], 0, 0x20)
return result
