// 函数: _Z26GameSpecific_GeneralActionRK10ControllerRK9HitResult9ClickType
// 地址: 0xb349c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3

if (arg3 u<= 8 && (1 << x19 & 0x181) != 0 && *(arg2 + 8) == 2)
    int32_t x8_3 = *(arg2 + 0x24)
    
    if (x8_3 u<= 0x4e20 && x8_3 != 0x2e7e)
        goto label_b34a24
    
    return 

label_b34a24:

if (*(GetClient() + 0x5068) == 0)
    return 

int32_t* x0 = ActiveGame()
arg1 = GameDlgManagerDialogActive(0x7f3, 5)

if ((arg1.d & 1) != 0)
label_b34a58:
    
    if (*(arg2 + 8) != 2)
        if (x19 == 0)
            GameDlgManagerDismiss(5, false)
            return 
    else if ((zx.d(x0[8].b) & 4) == 0)
        int32_t var_2c
        arg1 = IsCampaignMission(zx.q(*x0), &var_2c)
        
        if ((arg1.d & 1) == 0 && x19 == 0)
            GameDlgManagerDismiss(5, false)
            return 
else
    arg1 = GameDlgManagerDialogActive(0x7f4, 5)
    
    if ((arg1.d & 1) != 0)
        goto label_b34a58

if (x19 == 0 && zx.d(*gKV) != 0)
    if (*(gKV + 0x3a20) s>= 1)
        int64_t i = 0
        int64_t (* x19_1)() = gKV + 0x24
        
        do
            UI2Free(x19_1)
            i += 1
            x19_1 += 0x74
        while (i s< sx.q(*(gKV + 0x3a20)))
    
    *gKV = 0
    *(gKV + 0x3a20) = 0
    return 

if ((GameDlgManagerDialogActive(0x7ec, 5) & 1) != 0)
    GameDlgManagerDismiss(5, false)
    return 

if (*(gDomClient + 0x84318) != 0)
    if (*(arg2 + 8) != 2)
        *(gDomClient + 0x84318) = 0
        *(gDomClient + 0x1d000) = 0
    else
        int32_t x8_12 = *(arg2 + 0x24)
        
        if (x8_12 u<= 0x4e20 && x8_12 != 0x2e7e)
            *(gDomClient + 0x84318) = 0
            *(gDomClient + 0x1d000) = 0

int32_t x8_13 = *(GetClient() + 0x5068)
int64_t var_28

if (x8_13 == 1)
    arg1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)

if (x8_13 == 1 && *(gDomClient + 0x205cc) s< arg1.d && var_28 != 0)
    return 

if (x19 == 4)
    ZoomSwipe(1)
    return 

if (x19 == 3)
    ZoomSwipe(0)
