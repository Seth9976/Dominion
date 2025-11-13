// 函数: _Z14CardLookupInitv
// 地址: 0x9e6dfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gCardLookup = XPooledCalloc(0x2000)
*(gCardLookup + 8) = 0x3ff
*(gCardLookup + 0x10) = XPooledCalloc(0x10000)
*(gCardLookup + 0x18) = 0x1fff
DomCardDef* var_38

for (void* const i = &data_7a971c; i != &data_7a9764; i += 4)
    int32_t x0_3 = DomExpGet(zx.q(*i), &var_38)
    
    if (x0_3 s>= 1)
        int64_t j = 0
        
        do
            void* x2_1 = var_38 + j
            CardLookupAdd(*(x2_1 + 0x58), zx.q(*(x2_1 + 0xc0)), x2_1)
            j += 0x780
        while (mulu.dp.d(x0_3, 0x780) != j)

int32_t x0_5 = DomExpGet(1, &var_38)

if (x0_5 s>= 1)
    int64_t i_1 = 0
    
    do
        void* x2_2 = var_38 + i_1
        CardLookupAdd(*(x2_2 + 0x58), zx.q(*(x2_2 + 0xc0)), x2_2)
        i_1 += 0x780
    while (mulu.dp.d(x0_5, 0x780) != i_1)

return CardLookupAdd("harem", 0x318, nullptr)
