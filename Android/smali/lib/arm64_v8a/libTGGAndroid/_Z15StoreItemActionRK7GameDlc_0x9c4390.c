// 函数: _Z15StoreItemActionRK7GameDlc
// 地址: 0x9c4390
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DLC* result = GameSepcific_TryGetDlcDef(arg1)

if (result != 0)
    DLC* result_1 = result
    
    if (*arg1 != 1)
        result = GameCenterHasDLC(result_1)
    
    if (*arg1 != 1 && (result.d & 1) != 0)
    label_9c441c:
        *arg1
        *(arg1 + 4)
        XTraceAndLog("trying to buy already owned dlc %d %d")
    else
        uint64_t x8_2 = zx.q(*(result_1 + 4))
        
        if (x8_2.d u<= 5)
            switch (x8_2)
                case 0
                    goto label_9c441c
                case 1
                    return GameCenterDLCCheckout(GameSepcific_GetDlcDef(arg1)) __tailcall
                case 2, 5
                    return result
                case 4
                    return XOpenURL(*(GameSepcific_GetDlcDef(arg1) + 0x70)) __tailcall

pthread_kill(pthread_self(), 6)
int64_t x0_9
int64_t x1_4
int64_t x2_4
x0_9, x1_4, x2_4 = XNoReturn()
return GameDialogOpenStore(x0_9, x1_4, x2_4) __tailcall
