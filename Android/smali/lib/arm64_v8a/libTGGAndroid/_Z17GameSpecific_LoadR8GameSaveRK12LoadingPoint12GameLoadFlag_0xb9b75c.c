// 函数: _Z17GameSpecific_LoadR8GameSaveRK12LoadingPoint12GameLoadFlag
// 地址: 0xb9b75c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
GameMinimumVersion(4, false)
DomGameEnd()
*gPlayerInfoPopup = 0xffffffff

if ((x19 & 1) == 0)
    *(GetClient() + 0x75b4) = 0xffffffff

*(gDomClient + 0x34) = 0xffffffff
*(gDomClient + 0x205a8) = 0
GameDlgManagerRefreshMainLayout()
int32_t x8 = *(arg1 + 0x20)

if ((x8 & 8) == 0)
    if ((x8 & 4) != 0)
        goto label_b9b884
    
    goto label_b9b7e0

int32_t var_70_1 = 0
int32_t var_78_1 = 0
int32_t var_80_1 = 0
DomAddLogEvent(gDomClient + 0x20728, 0xffffffff, 0xffffffff, 0x3f, 0, nullptr, 0, 0)
x8 = *(arg1 + 0x20)

if ((x8 & 4) != 0)
label_b9b884:
    int32_t var_70_2 = 0
    int32_t var_78_2 = 0
    int32_t var_80_2 = 0
    DomAddLogEvent(gDomClient + 0x20728, 0xffffffff, 0xffffffff, 0x40, 0, nullptr, 0, 0)
    
    if ((*(arg1 + 0x20) & 1) == 0)
        goto label_b9b7ec
    
    goto label_b9b8c4

label_b9b7e0:

if ((x8 & 1) == 0)
label_b9b7ec:
    
    if (*(arg1 + 0x1c) - 0x64 u> 0x19)
        goto label_b9b8e4
    
    goto label_b9b804

label_b9b8c4:
int32_t var_70_3 = 0
int32_t var_78_3 = 0
int32_t var_80_3 = 0
DomAddLogEvent(gDomClient + 0x20728, 0xffffffff, 0xffffffff, 0x41, 0, nullptr, 0, 0)
uint64_t x8_3

if (*(arg1 + 0x1c) - 0x64 u<= 0x19)
label_b9b804:
    *(gDomClient + 0x205cc) = 0
    GameDlgManagerShow(0x24, 3)
    x8_3 = zx.q(*(arg1 + 0x11b4))
    
    if (x8_3.d s>= 1)
    label_b9b8f0:
        int64_t i_8
        
        if (x8_3.d != 1)
            i_8 = x8_3 & 0xfffffffe
            void* __offset(GameSave, 0x11ec) x10_1 = arg1 + 0x11ec
            int64_t i_7 = i_8
            int64_t i
            
            do
                *(x10_1 - 0x18) = 0
                *x10_1 = 0
                x10_1 += 0x30
                i = i_7
                i_7 -= 2
            while (i != 2)
            
            if (i_8 != x8_3)
                goto label_b9b934
        else
            i_8 = 0
        label_b9b934:
            int32_t* x10_3 = arg1 + i_8 * 0x18 + 0x11d4
            int64_t i_5 = x8_3 - i_8
            int64_t i_1
            
            do
                i_1 = i_5
                i_5 -= 1
                *x10_3 = 0
                x10_3 = &x10_3[6]
            while (i_1 != 1)
else
label_b9b8e4:
    x8_3 = zx.q(*(arg1 + 0x11b4))
    
    if (x8_3.d s>= 1)
        goto label_b9b8f0
*(gDomClient + 0x205c4) = -1
int32_t* x24 = GetClient() + 0x75b0
*x24 = 0xffffffff
*(gDomClient + 0x38) = 0xffffffff
void* result = DomGameLoad(arg1, gDomClient + 0x20728, arg2)
int32_t* entry_x8

if (*entry_x8 != 1)
    int32_t x8_9 = *(arg1 + 0x11b4)
    
    if (x8_9 s>= 1)
        int64_t i_2 = 0
        void* __offset(GameSave, 0x70) x25_1 = arg1 + 0x70
        
        do
            if (*(x25_1 - 8) == 3 || zx.d(*gAllPlayersAI) != 0)
                int64_t x3_1 = sx.q(*x25_1)
                DomAIInitOne(gDomClient + x3_1 * 0x18 + 0x20698, arg1, gDomClient + 0x20728, x3_1, 
                    zx.q(*(x25_1 - 4)), false)
                x8_9 = *(arg1 + 0x11b4)
            
            i_2 += 1
            x25_1 += 0x22c
        while (i_2 s< sx.q(x8_9))
    
    *(gDomClient + 0x205d8) = 1
    
    if (*x24 == 0xffffffff)
        int32_t x21_2
        
        if (*(arg1 + 0x11b4) s< 1)
            x21_2 = 0
        else
            int32_t x24_1 = *(gDomClient + 0x2079c)
            int64_t i_3 = 0
            void* __offset(GameSave, 0x70) x25_2 = arg1 + 0x70
            x21_2 = -1
            
            do
                int32_t x8_15 = *(x25_2 - 8)
                
                if (x8_15 != 1)
                    goto label_b9baac
                
                if (*(x25_2 - 4) == *(GetActiveProfile() + 0x42ac))
                label_b9ba64:
                    x21_2 = *x25_2
                    
                    if (x21_2 == x24_1)
                        x21_2 = x24_1
                        goto label_b9bad0
                else
                    x8_15 = *(x25_2 - 8)
                label_b9baac:
                    
                    if ((x8_15 & 0xfffffffe) == 0x3e8)
                        goto label_b9ba64
                
                i_3 += 1
                x25_2 += 0x22c
            while (i_3 s< sx.q(*(arg1 + 0x11b4)))
            
            if (x21_2 == 0xffffffff)
                x21_2 = 0
        
    label_b9bad0:
        SetActiveTurn(zx.q(x21_2))
    
    uint64_t x8_17 = zx.q(*(gDomClient + 0x205e8))
    
    if (x8_17.d != 0)
        void* i_6 = *(gDomClient + 0x205e0)
        void* i_4 = i_6
        
        do
            if (zx.d(*(i_4 + 0x21d2)) != 0)
                while (i_4 != 0xffffffff)
                    if (*(i_4 + 0x2c) == 3)
                        *(i_4 + 0x84) = 0
                        PileAdjustCards(i_4, nullptr, true)
                        i_6 = *(gDomClient + 0x205e0)
                        x8_17 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (i_4 == 0)
                        i_4 = i_6
                    else
                        i_4 += 0x21d8
                    
                    void* x10_6 = i_6 + mulu.dp.d(x8_17.d, 0x21d8)
                    
                    if (i_4 u>= x10_6)
                        break
                    
                    while (zx.d(*(i_4 + 0x21d2)) == 0)
                        i_4 += 0x21d8
                        
                        if (i_4 u>= x10_6)
                            goto label_b9bbac
                
                break
            
            i_4 += 0x21d8
        while (i_4 u< i_6 + x8_17 * 0x21d8)
    
label_b9bbac:
    
    if (*(GameGetPlayer(arg1 + 8, zx.q(*(gDomClient + 0x207a0))) + 0x14) != 3)
        OpenDiscardIfNecessary(gDomClient + 0x20748)
    
    *(gDomClient + 0x2058c) = 2
    result = GetActiveProfile()
    
    if ((x19 & 6) == 0 && zx.d(*(result + 0x4290)) == 0)
        XString::XString()
        void var_58
        
        if ((DomLogGetCampaignEntries(&var_58) & 1) != 0)
            GameDlgManagerShow(0x7e4, 5)
        
        return XString::~XString()

return result
