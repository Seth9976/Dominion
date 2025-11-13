// 函数: _Z23IsKingdomModifierActive14DomSetupConfigii
// 地址: 0xb2f6cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2

switch (arg2)
    case 0
        x8_2 = *(arg1 + 0xbfc)
        return zx.q(x8_2 != 0 ? 1 : 0) & zx.q(arg3 + 1 == x8_2 ? 1 : 0)
    case 1
        x8_2 = *(arg1 + 0xc00)
        return zx.q(x8_2 != 0 ? 1 : 0) & zx.q(arg3 + 1 == x8_2 ? 1 : 0)
    case 2
        if (arg3 == 2)
            int32_t x8_13 = *(arg1 + 0x16f4)
            
            if ((x8_13 & 2) != 0)
                return 0
            
            return zx.q(x8_13 u>> 2) & 1
        
        if (arg3 == 1)
            return zx.q(zx.d(*(arg1 + 0x16f4)) u>> 1) & 1
        
        if (arg3 == 0)
            return zx.q(*(arg1 + 0x16f4)) & 1
    case 3
        return zx.q(arg3 == 0 ? 1 : 0) & zx.q((zx.d(*(arg1 + 0x16f4)) & 8) u>> 3)
    case 4
        return zx.q(arg3 == 0 ? 1 : 0) & zx.q((zx.d(*(arg1 + 0x16f4)) & 0x10) u>> 4)
    case 5
        return zx.q(arg3 == 0 ? 1 : 0) & zx.q((zx.d(*(arg1 + 0x16f4)) & 0x20) u>> 5)
    case 6
        return zx.q(arg3 == 0 ? 1 : 0) & zx.q((zx.d(*(arg1 + 0x16f4)) & 0x40) u>> 6)

pthread_kill(pthread_self(), 6)
int32_t* x0_10
int32_t x1
int64_t x2
x0_10, x1, x2 = XNoReturn()
return ToggleSetupFlag(x0_10, x1, x2) __tailcall
