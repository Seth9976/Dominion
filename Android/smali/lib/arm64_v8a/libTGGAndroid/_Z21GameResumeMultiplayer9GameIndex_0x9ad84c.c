// 函数: _Z21GameResumeMultiplayer9GameIndex
// 地址: 0x9ad84c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int64_t x20 = *(GetClient() + 0x5080)
uint64_t x21 = zx.q(x19) & 0xffff
char const* const x1

if (*(x20 + mulu.dp.d(x21.d, 0x1338) + 0x30) s>= GameMinimumVersion(GameSpecific_GameType(), true))
    if (*(x20 + mulu.dp.d(x21.d, 0x1338) + 0x30)
            s<= GameLatestVersion(GameSpecific_GameType(), true))
        int32_t* x22_3 = x20 + x21 * 0x1338
        int32_t x23_1 = *x22_3
        int32_t* x8_1 = GetClient() + 0x7778
        
        if (*x8_1 != 0 && x8_1[1] == x23_1)
            *(GetClient() + 0x7778) = 0
            GameDlgManagerDismiss(9, false)
        
        if (*(x20 + x21 * 0x1338 + 0x11c0) == 0)
            GameDlgManagerShow(0x1c, 5)
            int32_t x8_5 = *x22_3
            
            if (x8_5 != 0)
                int32_t var_38 = x8_5
                void* x0_10 = GetClient()
                
                if (*(x0_10 + 0x18) == 3)
                    NetworkSendMessage(zx.q(*(x0_10 + 0x14)), 0xf42af, 4, &var_38)
        else
            *(GetClient() + 0x5044) = 6
        
        *(GetClient() + 0x5070) = 2
        void* result = GetClient()
        *(result + 0x5074) = x19
        return result
    
    x1 = "dom_msg_app_out_of_date_body"
else
    x1 = "dom_msg_game_out_of_date_body"

return GameMsgBoxTranslated("dom_msg_out_of_date_header", x1, 0x20, nullptr, nullptr, nullptr, 
    nullptr) __tailcall
