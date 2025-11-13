// 函数: _Z15PauseMenuUpdate9UI2Handle
// 地址: 0x9c0908
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, PauseMenuClick)

if (*(GetClient() + 0x5068) == 2)
    UI2SetState(zx.q(x19), &data_11cf440, 0xffffffff, 0)

int64_t* x1_1

if (*(GetClient() + 0x5068) == 0)
    x1_1 = &data_11cf488
else
    int32_t x0_4 = GameSpecific_IsGameOver(ActiveGame())
    
    if ((GameSpecific_IsTutorial(*(ActiveGame() + 0x1c)) & 1) != 0)
        UI2SetState(zx.q(x19), &data_11cf458, 0xffffffff, 0)
        x1_1 = &data_11cf470
    else if ((x0_4 & 1) == 0)
        x1_1 = &data_11cf488
    else
        x1_1 = &data_11cf470

UI2SetState(zx.q(x19), x1_1, 0xffffffff, 0)
return GameSpecific_PauseMenuUpdate(zx.q(x19)) __tailcall
