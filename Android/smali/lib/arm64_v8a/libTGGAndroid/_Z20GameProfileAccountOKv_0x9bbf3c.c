// 函数: _Z20GameProfileAccountOKv
// 地址: 0x9bbf3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gProfileAccount == 1)
    XString::operator=(GetActiveProfile() + 8)
    GameClientSetEmail(XString::operator char const*(), false)
    *gProfileAccount = 2
    return SaveProfiles() __tailcall

if (*(gProfileAccount + 0x18) != 1)
    pthread_kill(pthread_self(), 6)
    return GameProfileAccountCommit(XNoReturn()) __tailcall

int64_t result = GameClientSetEmailCode(XString::operator char const*())
*(gProfileAccount + 0x18) = 2
return result
