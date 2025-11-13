// 函数: _Z19CanAddCardToKingdom11DomCardEnumRS_
// 地址: 0xb277b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = arg1.d
int32_t x20 = arg1.d
int64_t x8 = *(DomDefGet(arg1, 0x18) + 0xc8)

if ((x8 & 0x40000) != 0)
    return 1

if ((x8 & 0x20000) != 0)
    return 0

int32_t x8_1

if ((x8.d & 0x800) != 0)
    x8_1 = 0x706
else if ((x8 & 0x200) != 0)
    x8_1 = 0x717
else
    int32_t x8_2
    
    if ((x8.d & 0x4000000) != 0)
        x8_2 = x20 - 0xe19
        
        if (x8_2 u>= 5)
        label_b27918:
            pthread_kill(pthread_self(), 6)
            SearchableCard* x0_10
            int32_t x1
            int64_t x2
            x0_10, x1, x2 = XNoReturn()
            return ComputeSearchableCardEntries(x0_10, x1, x2) __tailcall
        
        x8_1 = *(&data_801bb8 + (sx.q(x8_2) << 2))
    else if ((x8.d & 0x200000) != 0)
        x8_2 = x20 - 0xd21
        
        if (x8_2 u>= 7)
            goto label_b27918
        
        x8_1 = *(&data_801bcc + (sx.q(x8_2) << 2))
    else
        if ((x8 & 0x10000) != 0)
            int32_t x0_5 = GetSplitPileSource(zx.q(x20))
            
            if (x0_5 == 0)
                if (x20 s> 0xd2b)
                    if (x20 - 0xd2c u>= 3)
                        *arg2 = 0
                        return 0
                    
                    x0_5 = 0xd12
                else if (x20 == 0x92c)
                    x0_5 = 0x905
                else if (x20 == 0x92d)
                    x0_5 = 0x909
                else
                    if (x20 != 0xd2a)
                        *arg2 = 0
                        return 0
                    
                    x0_5 = 0xd1e
            
            *arg2 = x0_5
            return 1
        
        if (x20 != 0xd4a)
            return zx.q((x8 & 0x804300c000) == 0 ? 1 : 0)
        
        x8_1 = 0xd07

*arg2 = x8_1
return 1
