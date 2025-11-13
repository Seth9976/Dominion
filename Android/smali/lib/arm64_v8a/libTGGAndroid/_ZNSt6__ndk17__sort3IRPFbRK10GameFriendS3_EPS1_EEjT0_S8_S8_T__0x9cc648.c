// 函数: _ZNSt6__ndk17__sort3IRPFbRK10GameFriendS3_EPS1_EEjT0_S8_S8_T_
// 地址: 0x9cc648
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = (*arg4)(arg2, arg1)
int32_t x0_3 = (*arg4)(arg3, arg2)
void var_58

if ((x0_1 & 1) == 0)
    if ((x0_3 & 1) == 0)
        return 0
    
    int64_t x8_5 = *arg2
    XString::XString(&var_58)
    int128_t v0_4 = *(arg2 + 0x10)
    *arg2 = *arg3
    XString::operator=(arg2 + 8)
    *(arg2 + 0x10) = *(arg3 + 0x10)
    *arg3 = x8_5
    XString::operator=(arg3 + 8)
    *(arg3 + 0x10) = v0_4
    XString::~XString()
    
    if (((*arg4)(arg2, arg1) & 1) != 0)
        int64_t x8_9 = *arg1
        XString::XString(&var_58)
        int128_t v0_7 = *(arg1 + 0x10)
        *arg1 = *arg2
        XString::operator=(arg1 + 8)
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *arg2 = x8_9
        XString::operator=(arg2 + 8)
        *(arg2 + 0x10) = v0_7
        XString::~XString()
        return 2
else if ((x0_3 & 1) == 0)
    int64_t x8_12 = *arg1
    XString::XString(&var_58)
    int128_t v0_10 = *(arg1 + 0x10)
    *arg1 = *arg2
    XString::operator=(arg1 + 8)
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *arg2 = x8_12
    XString::operator=(arg2 + 8)
    *(arg2 + 0x10) = v0_10
    XString::~XString()
    
    if (((*arg4)(arg3, arg2) & 1) != 0)
        int64_t x8_16 = *arg2
        XString::XString(&var_58)
        int128_t v0_13 = *(arg2 + 0x10)
        *arg2 = *arg3
        XString::operator=(arg2 + 8)
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *arg3 = x8_16
        XString::operator=(arg3 + 8)
        *(arg3 + 0x10) = v0_13
        XString::~XString()
        return 2
else
    int64_t x8_2 = *arg1
    XString::XString(&var_58)
    int128_t v0_1 = *(arg1 + 0x10)
    *arg1 = *arg3
    XString::operator=(arg1 + 8)
    *(arg1 + 0x10) = *(arg3 + 0x10)
    *arg3 = x8_2
    XString::operator=(arg3 + 8)
    *(arg3 + 0x10) = v0_1
    XString::~XString()
return 1
