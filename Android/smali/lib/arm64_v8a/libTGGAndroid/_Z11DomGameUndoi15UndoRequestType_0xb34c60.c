// 函数: _Z11DomGameUndoi15UndoRequestType
// 地址: 0xb34c60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetClient()
int32_t x8 = *(result + 0x5068)

if (x8 == 1)
    DomMinimizePileAny()
    GameDlgManagerDismiss(2, false)
    GameDlgManagerDismiss(5, (not.d(GameDlgManagerDialogActive(0x29, 5))).b & 1)
    GameUndo(ActiveGame(), arg1)
    return LocalGameSaveInGame(ActiveGame(), *(result + 0x506c))

if (x8 != 2)
    pthread_kill(pthread_self(), 6)
    int32_t x0_6
    int64_t x1_3
    x0_6, x1_3 = XNoReturn()
    return DomGameUndoRequest(x0_6, x1_3) __tailcall

if (*(result + 0x18) != 3)
    return result

int32_t x8_2 = *ActiveGame()
int32_t var_48 = arg2
int32_t var_44_1 = x8_2
int32_t var_40_1 = arg1
return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42b6, 0xc, &var_48)
