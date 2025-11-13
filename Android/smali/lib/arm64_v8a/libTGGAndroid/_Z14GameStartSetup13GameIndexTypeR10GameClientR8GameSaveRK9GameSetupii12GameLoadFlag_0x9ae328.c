// 函数: _Z14GameStartSetup13GameIndexTypeR10GameClientR8GameSaveRK9GameSetupii12GameLoadFlag
// 地址: 0x9ae328
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = GetActiveProfile() + 0x4330
int32_t x11 = x8[1]
int32_t x9 = x8[2]
int32_t x10 = *x8
int32_t x9_1

x9_1 = x9 s> 1 ? x9 : 1

int32_t x12

x12 = x11 s> x10 ? x10 : x11

if (x9_1 s<= neg.d(x12))
    if (x11 s<= x10)
        x9_1 = neg.d(x11)
    else
        x9_1 = neg.d(x10)

int32_t x24 = neg.d(x9_1)
x8[2] = x9_1 + 1
*(arg2 + 0x5068) = 1
*(arg2 + 0x506c) = x24
*arg3 = x24
LocalGameInitNew(arg4, arg3, GameSpecific_MaxPlayers(), arg5, arg6)
GameStartSmartplays(arg3)
GameSpecific_Load(arg3, LOAD_START, zx.q(arg7))
LocalGameSave(arg3, x24)
return zx.q(x24)
