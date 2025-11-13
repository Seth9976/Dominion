// 函数: _Z11DomItemData10HandleItem
// 地址: 0xba4b70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x1 = arg1

if (arg1 != 0)
    int32_t x9_1 = x1 & 0xffff
    
    if (x9_1 u< *(gDomClient + 0x205e8))
        int64_t x8_1 = *(gDomClient + 0x205e0)
        
        if (*(x8_1 + mulu.dp.d(x9_1, 0x21d8) + 0x21d0) == x1)
            uint64_t x9_2 = zx.q(x9_1)
            uint64_t x10_5 = zx.q(*(x8_1 + x9_2 * 0x21d8 + 0x2c))
            uint64_t x0_3
            int64_t x1_1
            int64_t x2
            
            if (x10_5.d u> 8)
                DomUnknownData()
            label_ba4c34:
                DomIconPlaceholderData()
            label_ba4c38:
                DomPileData()
            label_ba4c3c:
                DomTokenData()
            label_ba4c40:
                DomAbilityData()
            label_ba4c44:
                DomTokenIconData()
            label_ba4c48:
                DomArrowData()
                x0_3, x1_1, x2 = DomHintData()
                return DomCardCompare(x0_3, x1_1, x2) __tailcall
            
            switch (x10_5)
                case 0
                    return x8_1 + x9_2 * 0x21d8 + 0x138
                case 1
                    return x8_1 + x9_2 * 0x21d8 + 0x180
                case 2
                    goto label_ba4c34
                case 3
                    goto label_ba4c38
                case 4
                    goto label_ba4c3c
                case 5
                    goto label_ba4c40
                case 6
                    goto label_ba4c44
                case 7
                    goto label_ba4c48
                case 8
                    x0_3, x1_1, x2 = DomHintData()
                    return DomCardCompare(x0_3, x1_1, x2) __tailcall

XTraceAndLog("invalid DomItemData hItem %d")
return &data_182a584
