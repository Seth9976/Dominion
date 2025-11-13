// 函数: _Z34GameProfileHandleEmailCodeResponseRK27SetEmailCodeResponseMessage
// 地址: 0x9bc094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetActiveProfile()
int32_t x8 = *arg1

if (x8 == 0)
    *(gProfileAccount + 0x18) = 0
    XString::operator=(result + 0x42b8)
    XString::operator=(result + 8)
    return SaveProfiles() __tailcall

if (x8 != 1)
    pthread_kill(pthread_self(), 6)
    return GameProfileAccountClick(XNoReturn()) __tailcall

*(gProfileAccount + 0x18) = 4
return result
