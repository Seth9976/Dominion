// 函数: _Z6LogAddR8GameSave9PlayerWhoRK8DomYield
// 地址: 0xb17f48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
void* result = GetClient()
int32_t x8 = *(result + 0x5068)

if (x8 != 2)
    if (x8 == 1)
        DomLogWriteAction(LogGet(arg1, zx.q(x20)), arg3)
        LocalGameSaveInGame(arg1, *(result + 0x506c))
        result = GameGetPlayer(arg1 + 8, zx.q(x20))
        
        if (*(result + 0x14) != 3)
            return AnalyticsSendEvent(*arg1, "single-player-choice") __tailcall
    
    return result

PlayerLog* x0_7 = LogGet(arg1, zx.q(x20))
*(x0_7 + 0x10)
XTrace("submit network action who:%d pos:%d")
void* x0_8 = GetClient()
int64_t x24_1 = sx.q(*(x0_7 + 0x10))
DomLogWriteAction(x0_7, arg3)
int32_t x8_3 = *(x0_7 + 0x10)
int64_t x9_2 = *x0_7
int32_t x11_2 = *(x0_8 + 0xc) + 1
*(x0_8 + 0xc) = x11_2
int32_t x10_3 = *arg1
int32_t var_60_1 = x20
int32_t var_5c_1 = x24_1.d
int64_t var_58_1 = x9_2 + x24_1
int32_t var_50_1 = x8_3 - x24_1.d
int32_t var_4c_1 = 0
int32_t var_68 = x11_2
int32_t var_64_1 = x10_3
int32_t var_48_1 = *arg3
NetworkSendDef(zx.q(*(x0_8 + 0x14)), 0xf42b0, *defMapGameMoveMsg, &var_68)
return AnalyticsSendEvent(*arg1, "multiplayer-choice")
