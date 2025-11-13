// 函数: _Z17GameProfileCommitRK13UI2CommitInfo
// 地址: 0x9bbbe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result = XString::operator char const*()

if (zx.d(*result) == 0)
    return result

XString* x0_1 = GetActiveProfile()
XString::operator=(x0_1)
int64_t x0_2 = CurrentDateTime()
*(x0_1 + 0x42c8) = x0_2
int64_t var_38 = x0_2
char var_30[0x10]
SafeStrcpy(&var_30, XString::operator char const*(), 0x10)
NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42bf, 0x18, &var_38)
SaveProfiles()
return GameClientTryLogin()
