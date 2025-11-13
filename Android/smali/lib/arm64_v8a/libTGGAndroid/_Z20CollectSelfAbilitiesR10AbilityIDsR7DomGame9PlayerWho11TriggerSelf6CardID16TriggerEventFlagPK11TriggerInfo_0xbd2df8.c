// 函数: _Z20CollectSelfAbilitiesR10AbilityIDsR7DomGame9PlayerWho11TriggerSelf6CardID16TriggerEventFlagPK11TriggerInfo
// 地址: 0xbd2df8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x27 = 0
int32_t* fp = *(arg2 + mulu.dp.d(arg5, 0x68) + 0x1a68) + 0xec

while (true)
    int32_t x8_2 = fp[-3]
    
    if (x8_2 != 6)
        if (x8_2 == 0)
            return 
    else if (fp[-2] == 6 && *fp == arg4)
        uint64_t x26_1 = (0x3ffff & zx.q((arg5 & 0xfff) << 6)) | zx.q((0x3fff & arg5) << 0x12)
            | (zx.q(x27) & 0xf) | 0x10
        
        if ((TriggerAbilityTestValid(arg2, zx.q(arg3), x26_1, zx.q(arg5), zx.q(arg6), 0xffffffff, 
                arg7).d & 1) != 0)
            int64_t x8_7 = sx.q(*(arg1 + 0x400))
            *(arg1 + 0x400) = x8_7.d + 1
            *(arg1 + (x8_7 << 2)) = x26_1.d
    
    x27 += 1
    fp = &fp[0x30]
