// 函数: _Z25HasEntitlementForCategory11DomCardEnum
// 地址: 0xb2754c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 - 0x1400 u< 0x10)
    return ProfileHasEntitlementForExpansion(zx.q(arg1 - 0x13fe), nullptr) __tailcall

uint64_t x8_2 = zx.q(arg1 - 0x1410)

if (x8_2.d u> 7)
    pthread_kill(pthread_self(), 6)
    uint64_t x0_13
    char* x1_7
    int64_t x2_7
    x0_13, x1_7, x2_7 = XNoReturn()
    return FindResultCalcScore(x0_13, x1_7, x2_7) __tailcall

switch (x8_2)
    case 0
        if ((ProfileHasEntitlementForExpansion(0xb, nullptr) & 1) != 0)
            return 1
        
        if ((ProfileHasEntitlementForExpansion(0xc, nullptr) & 1) != 0)
            return 1
        
        if ((ProfileHasEntitlementForExpansion(0xf, nullptr) & 1) != 0)
            return 1
        
        return ProfileHasEntitlementForExpansion(0x11, nullptr) __tailcall
    case 1
        return ProfileHasEntitlementForExpansion(0xc, nullptr) __tailcall
    case 2
        return ProfileHasEntitlementForExpansion(0xe, nullptr) __tailcall
    case 3
        return ProfileHasEntitlementForExpansion(0xf, nullptr) __tailcall
    case 4
        return ProfileHasEntitlementForExpansion(0x10, nullptr) __tailcall
    case 5
        return ProfileHasEntitlementForExpansion(0x11, nullptr) __tailcall
    case 6, 7
        return ProfileHasEntitlementForExpansion(0x12, nullptr) __tailcall
