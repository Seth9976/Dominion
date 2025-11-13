// 函数: _Z15CalcKingdomViewR7DomGameR11KingdomView
// 地址: 0xb1d284
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x3a20) = 0
*(arg2 + 4) = *V20
uint32_t x8_1 = zx.d(*(arg1 + 0x1070))
int32_t var_250[0x4]
int32_t var_a8[0x6]

if (x8_1 != 0)
    var_250[0] = 0x601
    x8_1 = 1
    var_a8[0] = 0x600

uint64_t x8_2 = zx.q(x8_1)
*((-5 & &var_250) | (1 & x8_2) << 2) = 0x103
int64_t x11_1 = sx.q(x8_1 + 1)
*((-5 & &var_a8) | (1 & x8_2) << 2) = 0x106
int64_t x9_2 = sx.q(x8_1 + 1)
var_250[x11_1] = 0x102
int64_t x8_3 = sx.q(x11_1.d + 1)
var_250[x8_3] = 0x101
int64_t x8_4 = sx.q(x8_3.d + 1)
var_a8[x9_2] = 0x105
int64_t x9_3 = sx.q(x9_2.d + 1)
var_250[x8_4] = 0x100
int32_t var_90_2 = x9_3.d + 1
var_a8[x9_3] = 0x104

if ((KingdomHasPotions(arg1) & 1) != 0)
    int64_t x8_5 = sx.q(var_90_2)
    var_90_2 = x8_5.d + 1
    var_a8[x8_5] = 0x500

KingdomViewAddEntry(arg2, 3, 2, &var_250, x8_4.d + 1, &var_a8, var_90_2)

if (zx.d(*(arg1 + 0x1071)) != 0)
    KingdomViewAddEntry(arg2, 2, 2, 0x7ef2e4, 3, nullptr, 0)

int64_t v9
v9.d = *(arg2 + 8) f+ float.s(0x43b40000)
int64_t v10
v10.d = fconvert.s(15f)
KingdomViewAddKingomdPiles(KingdomHasExtendedSupply(arg1, &var_a8), arg2, 4, &var_a8)
int64_t v8
v8.d = *(arg2 + 8)
DomCardEnum var_b8
int32_t var_64

if ((KingdomHasLandscapes(arg1, &var_b8, &var_64) & 1) != 0)
    int32_t x4_1 = var_64
    KingdomView* x0_8
    DomCardEnum* x3_2
    DomCardEnum* x5_1
    int32_t x6_1
    
    if (x4_1 != 4)
        x3_2 = &var_b8
        x0_8 = arg2
        x5_1 = nullptr
        x6_1 = 0
    else
        DomCardEnum var_b0
        x5_1 = &var_b0
        x3_2 = &var_b8
        x4_1 = 2
        x6_1 = 2
        x0_8 = arg2
    
    KingdomViewAddEntry(x0_8, 5, 4, x3_2, x4_1, x5_1, x6_1)

int32_t x21_1 = 0
v9.d = v9.d f+ v10.d
int32_t var_c8[0x4]

for (int32_t i = 0x27; i != 0x47; i += 1)
    int32_t x8_7 = *DomBoardPile(gDomClient + 0x20728, i)
    
    if (x8_7 != 0)
        if (*(arg1 + 0xe7c) != x8_7)
            if (*(arg1 + 0xe80) == x8_7)
                goto label_b1d50c
            
            goto label_b1d4e4
        
        var_c8[sx.q(x21_1)] = x8_7
        x21_1 += 1
        
        if (*(arg1 + 0xe80) != x8_7)
        label_b1d4e4:
            
            if (*(arg1 + 0xec8) == x8_7)
                var_c8[sx.q(x21_1)] = x8_7
                x21_1 += 1
        else
        label_b1d50c:
            var_c8[sx.q(x21_1)] = x8_7
            x21_1 += 1
            
            if (*(arg1 + 0xec8) == x8_7)
                var_c8[sx.q(x21_1)] = x8_7
                x21_1 += 1

if (x21_1 != 0)
    KingdomViewAddEntry(arg2, 6, 2, &var_c8, x21_1, nullptr, 0)

if (*(DomBoardPile(arg1, 3) + 8) != 0)
    KingdomViewAddEntry(arg2, 7, 4, arg1 + 0xe70, 3, nullptr, 0)

bool (* var_288)(DomCardEnum, DomCardEnum)
DomCardEnum* var_d0

if ((KingdomHasBlackMarket(arg1, &var_d0) & 1) != 0)
    DomCardEnum* x21_2 = var_d0
    int32_t x0_18 = CountBlackMarket(x21_2)
    size_t x23_1 = zx.q(x0_18) << 0x20 s>> 0x1e
    memcpy(&var_250, x21_2, x23_1)
    var_288 = SortCardsByCostName
    std::__ndk1::__sort<bool (*&)(DomCardEnum, DomCardEnum), DomCardEnum*>(&var_250, 
        &var_250 + x23_1, &var_288)
    KingdomViewAddEntry(arg2, 0x19, 2, &var_250, x0_18, nullptr, 0)

int32_t var_11c
DomCardEnum var_118
int32_t var_104
DomCardEnum var_100
DomCardEnum var_ec
int32_t var_68
KingdomHas_ArtifactsStatesHeirlooms(arg1, &var_100, &var_104, &var_118, &var_11c, &var_ec, &var_68)
int32_t x4_5 = var_68

if (x4_5 != 0)
    KingdomView* x0_23
    DomCardEnum* x3_7
    DomCardEnum* x5_3
    int32_t x6_3
    
    if (x4_5 s< 6)
        x3_7 = &var_ec
        x0_23 = arg2
        x5_3 = nullptr
        x6_3 = 0
    else
        x4_5 -= 3
        x5_3 = &var_ec + (zx.q(x4_5) << 2)
        x3_7 = &var_ec
        x6_3 = 3
        x0_23 = arg2
    
    KingdomViewAddEntry(x0_23, 1, 2, x3_7, x4_5, x5_3, x6_3)

int32_t i_1 = 0
int32_t x22_1 = 0x13
int32_t var_144[0xa]

do
    int32_t x9_12 = *DomBoardPile(gDomClient + 0x20728, x22_1)
    uint64_t x8_9 = zx.q(x9_12 - 0xc04)
    
    if (x8_9.d u<= 0xc)
        switch (x8_9)
            case 0
                var_144[sx.q(i_1)] = 0xc05
                i_1 += 1
            case 2
                var_144[sx.q(i_1)] = 0xc07
                i_1 += 1
            case 4
                var_144[sx.q(i_1)] = 0xc09
                i_1 += 1
            case 7
                var_144[sx.q(i_1)] = 0xc0c
                i_1 += 1
            case 0xc
                var_144[sx.q(i_1)] = 0xc11
                i_1 += 1
    else if (x9_12 == 0x1305)
        var_144[sx.q(i_1)] = 0x1306
        i_1 += 1
    
    if (x22_1 u> 0x45)
        break
    
    x22_1 += 1
while (i_1 != 0xa)

int64_t x8_11 = -0x280

while (true)
    KingdomView& x0_26
    DomCardEnum* x3_8
    int32_t i_2
    DomCardEnum* x5_4
    int32_t x6_4
    
    if (i_1 == 0xa)
    label_b1d758:
        i_2 = i_1 u>> 1
        x6_4 = i_1 - i_2
        x3_8 = &var_144[sx.q(x6_4)]
        x5_4 = &var_144
        x0_26 = arg2
    else
        void* x11_4 = arg1 + x8_11
        int32_t x10_4 = *(x11_4 + 0x1508)
        
        if (x10_4 == 0xdc6)
            var_144[sx.q(i_1)] = *(x11_4 + 0x1518)
            i_1 += 1
        label_b1d728:
            int64_t temp0_1 = x8_11
            x8_11 += 0x14
            
            if (temp0_1 != -0x14)
                continue
        else if (x10_4 != 0)
            goto label_b1d728
        
        if (i_1 == 0)
            break
        
        if (i_1 s>= 6)
            goto label_b1d758
        
        x3_8 = &var_144
        x0_26 = arg2
        i_2 = i_1
        x5_4 = nullptr
        x6_4 = 0
    
    KingdomViewAddEntry(x0_26, 8, 2, x3_8, i_2, x5_4, x6_4)
    break

if ((KingdomHasPile(arg1, 0x1019) & 1) == 0)
    if ((KingdomHasPile(arg1, 0x101e) & 1) != 0)
        goto label_b1da9c
    
    goto label_b1d7c4

KingdomViewAddEntry(arg2, 9, 2, 0x7ef2f8, 4, nullptr, 0)

if ((KingdomHasPile(arg1, 0x101e) & 1) != 0)
label_b1da9c:
    KingdomViewAddEntry(arg2, 0xa, 2, 0x7ef310, 4, nullptr, 0)
    
    if ((KingdomHasPile(arg1, 0x1023) & 1) == 0)
        goto label_b1d7d4
    
    goto label_b1dad0

label_b1d7c4:

if ((KingdomHasPile(arg1, 0x1023) & 1) == 0)
label_b1d7d4:
    
    if ((KingdomHasPile(arg1, 0x1028) & 1) != 0)
        goto label_b1db04
    
    goto label_b1d7e4

label_b1dad0:
KingdomViewAddEntry(arg2, 0xb, 2, 0x7ef328, 4, nullptr, 0)

if ((KingdomHasPile(arg1, 0x1028) & 1) != 0)
label_b1db04:
    KingdomViewAddEntry(arg2, 0xc, 2, 0x7ef340, 4, nullptr, 0)
    
    if ((KingdomHasPile(arg1, 0x102d) & 1) == 0)
        goto label_b1d7f4
    
    goto label_b1db38

label_b1d7e4:

if ((KingdomHasPile(arg1, 0x102d) & 1) == 0)
label_b1d7f4:
    
    if ((KingdomHasPile(arg1, 0x1032) & 1) != 0)
        goto label_b1db6c
    
    goto label_b1d804

label_b1db38:
KingdomViewAddEntry(arg2, 0xd, 2, 0x7ef358, 4, nullptr, 0)

if ((KingdomHasPile(arg1, 0x1032) & 1) != 0)
label_b1db6c:
    KingdomViewAddEntry(arg2, 0xe, 2, 0x7ef370, 4, nullptr, 0)
    
    if ((KingdomHasPile(arg1, 0x91c) & 1) == 0)
        goto label_b1d814
    
    goto label_b1dbb0

label_b1d804:
int128_t v1_1

if ((KingdomHasPile(arg1, 0x91c) & 1) == 0)
label_b1d814:
    int32_t x0_42
    x0_42, v1_1 = KingdomHasPile(arg1, 0xc0a)
    
    if ((x0_42 & 1) != 0)
        goto label_b1dbd4
    
    goto label_b1d820

label_b1dbb0:
__builtin_memcpy(&var_250, 
    "\x33\x09\x00\x00\x34\x09\x00\x00\x35\x09\x00\x00\x36\x09\x00\x00\x37\x09\x00\x00\x38\x09\x00\x00", 
    0x10)
int128_t var_240
__builtin_memcpy(&var_240, 
    "\x33\x09\x00\x00\x34\x09\x00\x00\x35\x09\x00\x00\x36\x09\x00\x00\x37\x09\x00\x00\x38\x09\x00\x00", 
    0x18)
KingdomViewAddEntry(arg2, 0xf, 2, &var_250, 5, &var_240:4, 5)
int32_t x0_85
x0_85, v1_1 = KingdomHasPile(arg1, 0xc0a)

if ((x0_85 & 1) == 0)
label_b1d820:
    
    if ((KingdomHasRuins(arg1) & 1) != 0)
        KingdomViewAddEntry(arg2, 0, 2, 0x7ef3a8, 5, nullptr, 0)
else
label_b1dbd4:
    v1_1 = data_7aff30
    __builtin_memcpy(&var_250, "\x2a\x0c\x00\x00\x2b\x0c\x00\x00\x2c\x0c\x00\x00\x2d\x0c\x00\x00", 
        0x10)
    var_240 = v1_1
    KingdomViewAddEntry(arg2, 0x10, 2, &var_250, 4, &var_240, 4)
    
    if ((KingdomHasRuins(arg1) & 1) != 0)
        KingdomViewAddEntry(arg2, 0, 2, 0x7ef3a8, 5, nullptr, 0)

int32_t var_254 = 0

if ((HasOtherPiles(arg1, &var_250, &var_254) & 1) != 0)
    KingdomViewAddEntry(arg2, 0x18, 2, &var_250, var_254, nullptr, 0)

int32_t x0_50 = KingdomHasRemovedDivineWindCards(arg1, &var_288)

if (x0_50 != 0)
    uint64_t x0_51
    
    if (x0_50 == 0xc)
        x0_51 = 3
    else
        x0_51 = zx.q(x0_50 == 0xb ? 1 : 0)
    
    KingdomViewAddKingomdPiles(x0_51, arg2, 0x23, &var_288)

if ((KingdomHasExtraPile(arg1, 0x70d) & 1) == 0)
    if ((KingdomHasExtraPile(arg1, 0x718) & 1) != 0)
        goto label_b1dc88
    
    goto label_b1d8e0

int128_t var_2a0
__builtin_memcpy(&var_2a0, 
    "\x0e\x07\x00\x00\x0f\x07\x00\x00\x10\x07\x00\x00\x11\x07\x00\x00\x12\x07\x00\x00", 0x14)
KingdomViewAddEntry(arg2, 0x11, 2, &var_2a0, 5, nullptr, 0)

if ((KingdomHasExtraPile(arg1, 0x718) & 1) != 0)
label_b1dc88:
    __builtin_memcpy(&var_2a0, 
        "\x19\x07\x00\x00\x1d\x07\x00\x00\x1a\x07\x00\x00\x1b\x07\x00\x00\x1c\x07\x00\x00\x1e\x07\x00\x00", 
        0x18)
    KingdomViewAddEntry(arg2, 0x12, 2, &var_2a0, 3, &var_2a0 | 0xc, 3)
    
    if ((KingdomHasExtraPile(arg1, 0x1128) & 1) == 0)
        goto label_b1d8e8
    
    goto label_b1dcc4

label_b1d8e0:
int32_t x4_7

if ((KingdomHasExtraPile(arg1, 0x1128) & 1) != 0)
label_b1dcc4:
    KingdomViewAddEntry(arg2, 0x13, 2, 0x7ef3e8, 0xf, nullptr, 0)
    x4_7 = var_104
    
    if (x4_7 != 0)
        KingdomViewAddEntry(arg2, 0x14, 4, &var_100, x4_7, nullptr, 0)
else
label_b1d8e8:
    x4_7 = var_104
    
    if (x4_7 != 0)
        KingdomViewAddEntry(arg2, 0x14, 4, &var_100, x4_7, nullptr, 0)
int32_t x4_8 = var_11c

if (x4_8 != 0)
    KingdomViewAddEntry(arg2, 0x15, 4, &var_118, x4_8, nullptr, 0)

if ((KingdomHasExtraPile(arg1, 0xd30) & 1) != 0)
    KingdomViewAddEntry(arg2, 0x16, 4, 0x7ef424, 0xc, nullptr, 0)

int64_t result = KingdomHasExtraPile(arg1, 0xd3d)

if ((result.d & 1) != 0)
    result = KingdomViewAddEntry(arg2, 0x17, 4, 0x7ef454, 0xc, nullptr, 0)

int64_t x8_13 = sx.q(*(arg2 + 0x3a20))
void* x9_15 = arg2 + x8_13 * 0x74
*(arg2 + 0x3a20) = x8_13.d + 1
*(x9_15 + 0x20) = 0
float v1_2 = *(arg2 + 8)
*(x9_15 + 0x2c) = v1_2
*(x9_15 + 0x28) = 0
v1_2 = v1_2 + fconvert.s(15f) + float.s(0x42f00000)
float v3 = *(arg2 + 4)
*(arg2 + 0x10) = fneg(v9.d f+ (v8.d f- v9.d) * fconvert.s(0.5f))
*(arg2 + 0x1c) = vmax_f32(v1_2 + float.s(0xc4800000), float.s(0x44800000))
float temp0_3 = vmax_f32(v3, float.s(0x45282000))
*(arg2 + 0x18) = 0x44800000
*(arg2 + 4) = temp0_3
*(arg2 + 8) = v1_2
*(arg2 + 0xc) = 0
return result
