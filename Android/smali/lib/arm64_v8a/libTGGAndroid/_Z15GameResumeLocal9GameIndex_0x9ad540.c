// 函数: _Z15GameResumeLocal9GameIndex
// 地址: 0x9ad540
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
int32_t* x20 = GetClient() + 0x5068
*x20 = 1
x20[1] = x21
x20[0x10] = x21

if ((LocalGameLoad(x20, &x20[0x10]) & 1) != 0)
    if (x20[0x1c] s< GameMinimumVersion(GameSpecific_GameType(), false))
        GameMsgBoxTranslated("dom_msg_out_of_date_header", "dom_msg_game_out_of_date_body", 0x20, 
            nullptr, nullptr, nullptr, nullptr)
        return 1
    
    GameSpecific_Load(&x20[0x10], LOAD_ALL, 0)
    int32_t var_38
    
    if (var_38 != 1)
        return 1

return 0
