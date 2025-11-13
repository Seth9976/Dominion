// 函数: _Z23GameProfileAccountClickRK12UI2ClickInfo
// 地址: 0x9bc11c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
char var_28
XString::XString(&var_28)
int32_t x0_2 = operator==(x20, &var_28)
XString::~XString()

if ((x0_2 & 1) == 0)
    char* x20_2 = *(arg1 + 8)
    XString::XString(&var_28)
    int32_t x0_8 = operator==(x20_2, &var_28)
    XString::~XString()
    
    if ((x0_8 & 1) == 0)
        char* x20_4 = *(arg1 + 8)
        XString::XString(&var_28)
        int32_t x0_13 = operator==(x20_4, &var_28)
        XString::~XString()
        
        if ((x0_13 & 1) == 0)
            char* x20_7 = *(arg1 + 8)
            XString::XString(&var_28)
            int32_t x0_21 = operator==(x20_7, &var_28)
            XString::~XString()
            
            if ((x0_21 & 1) == 0)
                char* x20_9 = *(arg1 + 8)
                XString::XString(&var_28)
                int32_t x0_29 = operator==(x20_9, &var_28)
                XString::~XString()
                
                if ((x0_29 & 1) == 0)
                    char* x20_11 = *(arg1 + 8)
                    XString::XString(&var_28)
                    
                    if ((operator==(x20_11, &var_28) & 1) == 0)
                        int32_t x20_12 = *(arg1 + 0x20)
                        XString::~XString()
                        
                        if (x20_12 == 2)
                            goto label_9bc3f8
                        
                        char* x20_13 = *(arg1 + 8)
                        XString::XString(&var_28)
                        int32_t x0_41 = operator==(x20_13, &var_28)
                        XString::~XString()
                        
                        if ((x0_41 & 1) == 0)
                            char* x19_3 = *(arg1 + 8)
                            XString::XString(&var_28)
                            int32_t x0_44 = operator==(x19_3, &var_28)
                            XString::~XString()
                            
                            if ((x0_44 & 1) != 0)
                                GameProfileAccountOK()
                        else
                            *(gGameDlgManager + 0xc8) = 0x1e
                    else
                        XString::~XString()
                    label_9bc3f8:
                        
                        if (*gProfileAccount == 1)
                            *gProfileAccount = 0
                        else if (*(gProfileAccount + 0x18) != 1)
                            *(gGameDlgManager + 0xc8) = 5
                        else
                            *(gProfileAccount + 0x18) = 0
                else
                    XString::XString()
                    
                    if ((XClipboardPasteText(&var_28) & 1) != 0)
                        int64_t (* x19_2)()
                        
                        if (*gProfileAccount != 1)
                            if (*(gProfileAccount + 0x18) != 1)
                                pthread_kill(pthread_self(), 6)
                                uint64_t x0_46
                                int64_t x1_24
                                bool x2_2
                                x0_46, x1_24, x2_2 = XNoReturn()
                                return GameDlgMangerGetUI(x0_46, x1_24, x2_2) __tailcall
                            
                            x19_2 = gProfileAccount + 0x10
                            
                            if (XString::Length() s>= 0xa)
                                XString::SetAsciiChar(&var_28, 9)
                        else
                            x19_2 = gProfileAccount + 8
                            
                            if (XString::Length() s>= 0x41)
                                XString::SetAsciiChar(&var_28, 0x40)
                        
                        XString::operator=(x19_2)
                    
                    XString::~XString()
            else
                void* x0_22 = GetActiveProfile()
                XString::operator=(x0_22 + 8)
                XString::operator=(gProfileAccount + 8)
                *gProfileAccount = 1
                *(x0_22 + 0x42c0) &= 0xfffffffe
                
                if (*(gGameDlgManager + 0xcc) != 7)
                    goto label_9bc314
                
                UI2QueueAutoFocusTextbox(zx.q(*(gGameDlgManager + 0xd0)))
        else
            XString::operator=(gProfileAccount + 0x10)
            XString::operator=(gProfileAccount + 8)
            *(gProfileAccount + 0x18) = 0
            *gProfileAccount = 0
            void* x0_16 = GetActiveProfile()
            XString::operator=(x0_16 + 8)
            XString::operator=(x0_16 + 0x42b8)
            *(x0_16 + 0x42c0) &= 0xfffffffe
            SaveProfiles()
    else
        XString::operator=(gProfileAccount + 0x10)
        *(gProfileAccount + 0x18) = 1
        
        if (*(gGameDlgManager + 0xcc) != 7)
        label_9bc314:
            uint64_t x0_25
            
            if (*(gGameDlgManager + 0xdc) == 7)
                x0_25 = zx.q(*(gGameDlgManager + 0xe0))
            else
                x0_25 = 0
            
            UI2QueueAutoFocusTextbox(x0_25)
        else
            UI2QueueAutoFocusTextbox(zx.q(*(gGameDlgManager + 0xd0)))
else
    GetActiveProfile()
    GameClientSetEmail(XString::operator char const*(), true)

return 0
