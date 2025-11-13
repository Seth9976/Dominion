// 函数: _Z13AddThemeStampR13CampaignThemeb
// 地址: 0xa3d938
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
    * const var_80
int32_t var_44

if (*arg1 != 0x384)
label_a3db34:
    
    if ((arg2.d & 1) != 0)
        var_44 = 0
        
        do
            var_44 = RollStamp(0)
            arg1 = RandomStampTargetPiles(&var_44, 1, &var_80, 1, nullptr)
        while (arg1.d == 0)
        
        if (arg1.d s>= 1)
            uint64_t i_7 = zx.q(arg1.d)
            struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
                * const* x20_2 = &var_80
            uint64_t i
            
            do
                uint64_t x1_2 = zx.q(*x20_2)
                x20_2 += 4
                CampaignAddExtra(zx.q(var_44), x1_2, 0xffffffff, 0, 0)
                i = i_7
                i_7 -= 1
            while (i != 1)
    
    return 

int32_t i_1 = *(arg1 + 4)
int64_t* x9_3 =
    *(gCampaignData + 0x10) + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(*(gCampaignData + 0x18))) << 3)
int32_t* x10_2

do
    x10_2 = *x9_3
    x9_3 = &x10_2[4]
while (*x10_2 != i_1)

void* x8_1 = *(x10_2 + 8)
int32_t i_2 = *(x8_1 + 0x1c)

if (i_2 == 0)
    goto label_a3db34

int32_t i_5 = i_2
int32_t x8_2 = *(x8_1 + 0x20)
int64_t x19_1

if (x8_2 == 0)
    x19_1 = 1
else
    x19_1 = 2
    int32_t var_84_1 = x8_2

uint64_t x23_1 = 0
int32_t x8_3 = *(gCampaignSetup + 0x19ac)

while (true)
    int64_t x26_1 = sx.q(x23_1.d)
    uint64_t x10_4 = zx.q(*(gCampaignData + 8))
    int64_t x11_3 = *gCampaignData
    *(gCampaignSetup + 0x19b0) = x8_3
    int64_t* x10_6 = x11_3 + ((x10_4 & (zx.q(i_2) | zx.q(i_2 s>> 4))) << 3)
    *(gCampaignSetup + 0x19ac) = 0
    int32_t* x11_4
    
    do
        x11_4 = *x10_6
        x10_6 = &x11_4[4]
    while (*x11_4 != i_2)
    
    void* x9_5 = *(x11_4 + 8)
    int64_t x9_7
    
    if (*(x9_5 + 0x18) == 2)
        x9_7 = *(x9_5 + 0x20)
        
        if (x9_7 != 0)
        label_a3da8c:
            arg1 = x9_7()
            x8_3 = *(gCampaignSetup + 0x19b0)
            *(gCampaignSetup + 0x19b0) = 0
            *(gCampaignSetup + 0x19ac) = x8_3
            
            if ((arg1.d & 1) == 0)
                x19_1 = sx.q(x19_1.d) - 1
                x23_1 = zx.q(x23_1.d - 1)
                (&i_5)[x26_1] = (&i_5)[x19_1]
        else
            *(gCampaignSetup + 0x19ac) = x8_3
            *(gCampaignSetup + 0x19b0) = 0
    else if (*(x9_5 + 0x288) == 2)
        x9_7 = *(x9_5 + 0x290)
        
        if (x9_7 != 0)
            goto label_a3da8c
        
        *(gCampaignSetup + 0x19ac) = x8_3
        *(gCampaignSetup + 0x19b0) = 0
    else if (*(x9_5 + 0x4f8) == 2)
        x9_7 = *(x9_5 + 0x500)
        
        if (x9_7 != 0)
            goto label_a3da8c
        
        *(gCampaignSetup + 0x19ac) = x8_3
        *(gCampaignSetup + 0x19b0) = 0
    else if (*(x9_5 + 0x768) != 2)
        *(gCampaignSetup + 0x19ac) = x8_3
        *(gCampaignSetup + 0x19b0) = 0
    else
        x9_7 = *(x9_5 + 0x770)
        
        if (x9_7 != 0)
            goto label_a3da8c
        
        *(gCampaignSetup + 0x19ac) = x8_3
        *(gCampaignSetup + 0x19b0) = 0
    x23_1 = sx.q(x23_1.d) + 1
    
    if (x23_1.d s>= x19_1.d)
        break
    
    i_2 = (&i_5)[x23_1]

if (x19_1.d == 0)
    goto label_a3db34

if (RandomStampTargetPiles(&i_5, x19_1.d, &var_44, 1, nullptr).d == 0)
    uint64_t i_8 = zx.q(x19_1.d)
    var_80 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    uint64_t i_9 = i_8
    int32_t* var_70_1 = &i_5
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
        * const* var_60_1 = &var_80
    char* x1_4
    arg1, x1_4 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_80, 0)
    int32_t x20_3 = arg1.d
    
    if (&var_80 == var_60_1)
        arg1, x1_4 = (*var_60_1)->vFunc_4(var_60_1)
    else if (var_60_1 != 0)
        arg1, x1_4 = (*var_60_1)->j_operator delete(var_60_1)
    
    if (x20_3 != 0)
        CampaignKingdomAdd(zx.q(x20_3), x1_4, 0, 0)
        
        if (x19_1.d s>= 1)
            int32_t* x19_2 = &i_5
            uint64_t i_3
            
            do
                uint64_t x0_8 = zx.q(*x19_2)
                x19_2 = &x19_2[1]
                CampaignAddExtra(x0_8, zx.q(x20_3), 0xffffffff, 0, 0)
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
else if (x19_1.d s>= 1)
    int32_t x20_1 = var_44
    uint64_t i_6 = zx.q(x19_1.d)
    int32_t* x21_1 = &i_5
    uint64_t i_4
    
    do
        uint64_t x0_1 = zx.q(*x21_1)
        x21_1 = &x21_1[1]
        CampaignAddExtra(x0_1, zx.q(x20_1), 0xffffffff, 0, 0)
        i_4 = i_6
        i_6 -= 1
    while (i_4 != 1)
