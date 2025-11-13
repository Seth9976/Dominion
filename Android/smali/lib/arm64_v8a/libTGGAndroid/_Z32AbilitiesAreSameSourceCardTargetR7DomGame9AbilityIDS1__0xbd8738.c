// 函数: _Z32AbilitiesAreSameSourceCardTargetR7DomGame9AbilityIDS1_
// 地址: 0xbd8738
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg3 & 0x30
int64_t x8_1

if ((arg2 & 0x30) == 0)
    if (x8 == 0)
        x8_1 = arg3 ^ arg2
        
        if ((x8_1 & 0x3ffc0) == 0)
            return zx.q(x8_1.d u< 0x40000 ? 1 : 0)
else if (x8 != 0)
    x8_1 = arg3 ^ arg2
    
    if ((x8_1 & 0x3ffcf) == 0)
        if (arg2.d == arg3.d)
            return 1
        
        int32_t x9_1 = arg2.d u>> 4 & 3
        
        if (x9_1 != 3)
            if (x9_1 == 2 || (arg3.d & 0x20) != 0)
                return 0
            
            return zx.q(x8_1.d u< 0x40000 ? 1 : 0)
return 0
