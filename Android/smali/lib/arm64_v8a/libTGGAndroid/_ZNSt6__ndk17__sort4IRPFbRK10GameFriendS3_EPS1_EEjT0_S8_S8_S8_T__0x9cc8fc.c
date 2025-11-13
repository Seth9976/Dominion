// 函数: _ZNSt6__ndk17__sort4IRPFbRK10GameFriendS3_EPS1_EEjT0_S8_S8_S8_T_
// 地址: 0x9cc8fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result = std::__ndk1::__sort3<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
    arg1, arg2, arg3, arg5)

if (((*arg5)(arg4, arg3) & 1) == 0)
    return result

int64_t x8_1 = *arg3
void var_68
XString::XString(&var_68)
int128_t v0_1 = *(arg3 + 0x10)
*arg3 = *arg4
XString::operator=(arg3 + 8)
*(arg3 + 0x10) = *(arg4 + 0x10)
*arg4 = x8_1
XString::operator=(arg4 + 8)
*(arg4 + 0x10) = v0_1
XString::~XString()

if (((*arg5)(arg3, arg2) & 1) == 0)
    return result + 1

int64_t x8_5 = *arg2
XString::XString(&var_68)
int128_t v0_4 = *(arg2 + 0x10)
*arg2 = *arg3
XString::operator=(arg2 + 8)
*(arg2 + 0x10) = *(arg3 + 0x10)
*arg3 = x8_5
XString::operator=(arg3 + 8)
*(arg3 + 0x10) = v0_4
XString::~XString()

if (((*arg5)(arg2, arg1) & 1) == 0)
    return result + 2

int64_t x8_9 = *arg1
XString::XString(&var_68)
int128_t v0_7 = *(arg1 + 0x10)
*arg1 = *arg2
XString::operator=(arg1 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*arg2 = x8_9
XString::operator=(arg2 + 8)
*(arg2 + 0x10) = v0_7
XString::~XString()
return result + 3
