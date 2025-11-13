// 函数: _Z19TimeRemainingUpdate9UI2Handle
// 地址: 0xb38f24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
GameSave* result = GetClient()

if (*(result + 0x5068) == 2)
    result = ActiveGame()
    
    if (*(result + 0x2c) == 1)
        GameSave* result_1 = result
        
        if (*(result + 0x11b4) s>= 1)
            int32_t i = 0
            
            do
                int32_t var_64
                result = GameGetTimeRemaining(result_1, zx.q(i), &var_64)
                
                if ((result.d & 1) != 0)
                    int32_t x8_5
                    
                    if (var_64 s> 0)
                        int32_t x0_1 = LocalWho()
                        x8_5 = *(gDomClient + 0x38)
                        
                        if (i == x0_1)
                            goto label_b39008
                        
                        goto label_b39074
                    
                    var_64 = 0
                    int32_t x0_2 = LocalWho()
                    x8_5 = *(gDomClient + 0x38)
                    XString var_70
                    uint64_t x0_6
                    UI2StateDeclText* x1_2
                    XString* x2_2
                    int32_t x3_1
                    
                    if (i != x0_2)
                    label_b39074:
                        uint64_t x1_3
                        
                        if (x8_5 == 0xffffffff)
                            x1_3 = 0
                        else
                            x1_3 = zx.q(x8_5)
                        
                        int32_t fp_1 = PlayerWhoToSeat(zx.q(i), x1_3) - 1
                        UI2SetState(zx.q(x19), &data_182f6e8, fp_1, 0)
                        
                        if (*(result_1 + 0x28) == 5)
                            UI2SetState(zx.q(x19), &data_182f700, fp_1, 0)
                        
                        SecondsToTimeString(var_64)
                        x2_2 = &var_70
                        x0_6 = zx.q(x19)
                        x1_2 = &data_182f718
                        x3_1 = fp_1
                    else
                    label_b39008:
                        int32_t x9_1
                        
                        x9_1 = x8_5 == 0xffffffff ? 0 : x8_5
                        
                        if (i != x9_1)
                            goto label_b39074
                        
                        UI2SetState(zx.q(x19), &data_182f730, 0xffffffff, 0)
                        
                        if (*(result_1 + 0x28) == 5)
                            UI2SetState(zx.q(x19), &data_182f748, 0xffffffff, 0)
                        
                        SecondsToTimeString(var_64)
                        x2_2 = &var_70
                        x3_1 = -1
                        x0_6 = zx.q(x19)
                        x1_2 = &data_182f760
                    
                    UI2SetText(x0_6, x1_2, x2_2, x3_1)
                    result = XString::~XString()
                    
                    if (var_64 == 0)
                        result = ActiveGame()
                        
                        if (*(result + 0x2c) != 0x3e8)
                            *(ActiveGame() + 0x2c) = 0x3e8
                            char* x0_14 = GameGetPlayer(result_1 + 8, zx.q(i))
                            XString::XString()
                            XString::XString()
                            XString var_78
                            GameDismissDlgStrings(1, (i == LocalWho() ? 1 : 0).b, x0_14, &var_70, 
                                &var_78)
                            int32_t x0_16 = LocalWho()
                            char* x0_17 = XString::operator char const*()
                            char* x0_18 = XString::operator char const*()
                            int64_t (* x5_1)()
                            
                            x5_1 = i == x0_16 ? sub_bad074 : sub_bad0a8
                            
                            GameMsgBoxTranslated(x0_17, x0_18, 0x20, nullptr, nullptr, x5_1, 
                                nullptr)
                            XString::~XString()
                            result = XString::~XString()
                
                i += 1
            while (i s< *(result_1 + 0x11b4))

return result
