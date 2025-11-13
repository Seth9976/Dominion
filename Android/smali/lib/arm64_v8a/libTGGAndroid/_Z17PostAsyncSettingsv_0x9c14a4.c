// 函数: _Z17PostAsyncSettingsv
// 地址: 0x9c14a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
int64_t x9_1 = *(x0 + 0x7574)
int32_t var_18 = *(x0 + 0x757c)
int64_t var_28 = *(x0 + 0x42f0)
int64_t var_20 = x9_1
return NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42c8, 0x18, &var_28)
