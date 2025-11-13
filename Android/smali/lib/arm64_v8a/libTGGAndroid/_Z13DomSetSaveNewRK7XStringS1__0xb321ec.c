// 函数: _Z13DomSetSaveNewRK7XStringS1_
// 地址: 0xb321ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
int64_t x8 = sx.q(*(x0 + 0x7558))
void* x23 = x0 + x8 * 0x18
*(x0 + 0x7558) = x8.d + 1
XString::operator=(x23 + 0x6f58)
XString::operator=(x23 + 0x6f60)
DomSetupConfigFromString(XString::operator char const*(), GameLatestVersion(4, false))
void var_19d0
ExpansionsBitsetFlags var_34
*(x23 + 0x6f68) = DomSetupConfigToExpansionBitset(&var_19d0, &var_34)
SaveProfiles()
return zx.q(*(x0 + 0x7558) - 1)
