// 函数: _Z11CanDragCardR6DomGfx
// 地址: 0xb942c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = IsRearranging()
int32_t x0_1

if ((x0 & 1) == 0)
    x0_1 = GetLocalControlScheme()

if ((x0 & 1) != 0 || x0_1 != 2)
    if ((IsCardInActiveSet(arg1, nullptr, false) & 1) == 0)
        uint64_t x9_1 = zx.q(*(gDomClient + 0x2056c))
        
        if (x9_1.d s>= 1)
            int32_t i = *(arg1 + 0x98)
            
            if (*(gDomClient + 0x1f8ec) == i)
                return 1
            
            int64_t x14 = 0
            int64_t x13_1
            
            do
                x13_1 = x14
                
                if (x9_1 - 1 == x14)
                    break
                
                x14 = x13_1 + 1
            while (*(gDomClient + (x13_1 << 2) + 0x1f8f0) != i)
            
            return zx.q(x13_1 + 1 u< x9_1 ? 1 : 0)
    else
        if (*(GetClient() + 0x5068) != 1)
            return 1
        
        int64_t var_28
        int32_t x0_7 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)
        int64_t x20_1 = sx.q(*(gDomClient + 0x205cc))
        
        if (x20_1.d s>= x0_7)
            return 1
        
        int64_t x21_1 = var_28
        
        if (x21_1 == 0)
            return 1
        
        if ((TutorialCardIsClickable(arg1) & 1) != 0 && *(x21_1 + x20_1 * 0xb0 + 0x1c) != 2)
            return 1

return 0
