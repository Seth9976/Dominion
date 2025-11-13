// 函数: _Z20UI2FocusHandlesInputR9InputDataRb
// 地址: 0x103bfcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = false
int32_t x8 = *(gUI2 + 0x50)
int32_t x22

if (x8 == 0)
    x22 = 0
else
    uint64_t x23_1 = zx.q(x8.w)
    
    if (x23_1.d u>= *(gUI2 + 8))
        x22 = 0
    else
        int64_t x24_1 = *gUI2
        
        if (*(x24_1 + x23_1 * 0x19a8 + 0x19a0) != x8)
            x22 = 0
        else
            UI2* i = x24_1 + x23_1 * 0x19a8
            
            if (*(i + 0x167c) != 3)
                x22 = 0
            else
                uint64_t x8_2 = zx.q(*arg1)
                x22 = 0
                int32_t var_80
                int128_t var_70
                
                if (x8_2.d u<= 0x19)
                    switch (x8_2)
                        case 0, 2, 0x19
                        label_103c068:
                            void* x26_1 = x24_1 + x23_1 * 0x19a8
                            UITextBox::ProcessInput(x26_1 + 0x17e0, arg1.b, nullptr)
                            
                            if (zx.d(*(x26_1 + 0x15b5)) != 0)
                                int32_t x8_4 = *arg1
                                
                                if (x8_4 == 0x19 || x8_4 == 0)
                                    XString::XString()
                                    var_80 = *(gUI2 + 0x50)
                                    int64_t x0_1 = *(x24_1 + x23_1 * 0x19a8 + 0x15d8)
                                    
                                    if (x0_1 == 0)
                                        x0_1 = XString::GetString()
                                    
                                    int64_t var_78_1 = x0_1
                                    XString::operator=(&var_70)
                                    char var_64_1 = 0
                                    int32_t var_68_1 = *(x24_1 + x23_1 * 0x19a8 + 0x1740)
                                    
                                    do
                                        int64_t x8_10 = *(i + 0x1998)
                                        
                                        if (x8_10 != 0)
                                            x8_10(&var_80)
                                            break
                                        
                                        i = *(i + 0x17d0)
                                    while (i != 0)
                                    
                                    XString::~XString()
                            
                            x22 = 1
                            *arg2 = true
                        case 1
                            int32_t x8_11 = *(arg1 + 4)
                            
                            if (x8_11 s> 0x55)
                                if (x8_11 != 0x56)
                                    if (x8_11 != 0x6f)
                                        goto label_103c068
                                    
                                    goto label_103c190
                                
                                if (*(arg1 + 8) != 2)
                                    goto label_103c068
                                
                                __builtin_memset(&var_80, 0, 0x28)
                                void* const var_78_2 = &data_793a18
                                int64_t var_60
                                var_60.d = 9
                                var_70:4.d = 7
                                x22 = 1
                                
                                if ((UI2TriggerClick(i, &var_80, true, false) & 1) == 0)
                                    goto label_103c068
                                
                                *arg2 = true
                            else
                                if (x8_11 != 0x3d && x8_11 != 0x42)
                                    goto label_103c068
                                
                            label_103c190:
                                AndroidDisplayKeyboard(false)
                                InputClearKeyboardButtons()
                                void* x8_12 = x24_1 + x23_1 * 0x19a8
                                x22 = 1
                                *(x8_12 + 0x17f0) = *(x8_12 + 0x17e8)
                                *(x8_12 + 0x1859) = 0
                                UI2ClearFocus(zx.q(*(gUI2 + 0x50)), 
                                    (*(arg1 + 4) == 0x42 ? 1 : 0).b, true)
                                *arg2 = true

return zx.q(x22)
