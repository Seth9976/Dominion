// 函数: _ZNSt6__ndk17__sort3IRPFbRK16LeaderboardEntryS3_EPS1_EEjT0_S8_S8_T_
// 地址: 0xbb2a10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = (*arg4)(arg2, arg1)
int32_t x0_3 = (*arg4)(arg3, arg2)
void var_50

if ((x0_1 & 1) == 0)
    if ((x0_3 & 1) == 0)
        return 0
    
    int32_t x8_8 = *arg2
    XString::XString(&var_50)
    int32_t x8_9 = *(arg2 + 0x10)
    *arg2 = *arg3
    XString::operator=(arg2 + 8)
    *(arg2 + 0x10) = *(arg3 + 0x10)
    *arg3 = x8_8
    XString::operator=(arg3 + 8)
    *(arg3 + 0x10) = x8_9
    XString::~XString()
    
    if (((*arg4)(arg2, arg1) & 1) != 0)
        int32_t x8_15 = *arg1
        XString::XString(&var_50)
        int32_t x8_16 = *(arg1 + 0x10)
        *arg1 = *arg2
        XString::operator=(arg1 + 8)
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *arg2 = x8_15
        XString::operator=(arg2 + 8)
        *(arg2 + 0x10) = x8_16
        XString::~XString()
        return 2
else if ((x0_3 & 1) == 0)
    int32_t x8_21 = *arg1
    XString::XString(&var_50)
    int32_t x8_22 = *(arg1 + 0x10)
    *arg1 = *arg2
    XString::operator=(arg1 + 8)
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *arg2 = x8_21
    XString::operator=(arg2 + 8)
    *(arg2 + 0x10) = x8_22
    XString::~XString()
    
    if (((*arg4)(arg3, arg2) & 1) != 0)
        int32_t x8_28 = *arg2
        XString::XString(&var_50)
        int32_t x8_29 = *(arg2 + 0x10)
        *arg2 = *arg3
        XString::operator=(arg2 + 8)
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *arg3 = x8_28
        XString::operator=(arg3 + 8)
        *(arg3 + 0x10) = x8_29
        XString::~XString()
        return 2
else
    int32_t x8_2 = *arg1
    XString::XString(&var_50)
    int32_t x8_3 = *(arg1 + 0x10)
    *arg1 = *arg3
    XString::operator=(arg1 + 8)
    *(arg1 + 0x10) = *(arg3 + 0x10)
    *arg3 = x8_2
    XString::operator=(arg3 + 8)
    *(arg3 + 0x10) = x8_3
    XString::~XString()
return 1
