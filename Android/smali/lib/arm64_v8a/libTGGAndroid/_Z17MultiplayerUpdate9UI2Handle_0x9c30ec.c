// 函数: _Z17MultiplayerUpdate9UI2Handle
// 地址: 0x9c30ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, MultiplayerClick)
UI2SetHandler(zx.q(x19), MultiplayerCommit)
UI2SetState(zx.q(x19), &data_11cf800, 0xffffffff, 0)
UI2SetState(zx.q(x19), UIS_WIP, 0xffffffff, 0)
ComputeGameSlots(gMultiplayerDlg + 0xc, gMultiplayerDlg + 0x10c, gMultiplayerDlg + 0x110, 
    gMultiplayerDlg + 0x190)

if (*(gMultiplayerDlg + 0x10c) s>= 0x32)
    UI2SetState(zx.q(x19), &data_11cee70, 0xffffffff, 0)

uint64_t x8_1 = zx.q(*gMultiplayerDlg)
int64_t* x1_4

if (x8_1.d u<= 3)
    switch (x8_1)
        case 0
            int64_t i = 0
            void* x24_1 = &data_11d0838
            
            do
                int32_t x0_13
                
                if (*(x24_1 - 0x30) == "tblGames" && *(x24_1 - 0x38) == x19
                        && i == zx.q(*(x24_1 - 0x28)) && *(x24_1 - 0x20) == 0)
                    x0_13 = UI2Exists(zx.q(*x24_1))
                
                uint64_t x0_11
                
                if (*(x24_1 - 0x30) == "tblGames" && *(x24_1 - 0x38) == x19
                        && i == zx.q(*(x24_1 - 0x28)) && *(x24_1 - 0x20) == 0 && (x0_13 & 1) != 0)
                    x0_11 = zx.q(*x24_1)
                    
                    if (x0_11.d != 0)
                        UI2SetState(x0_11, &data_11cf4b8, 0xffffffff, 0)
                else
                    x0_11 = UI2GetHandle(zx.q(x19), "tblGames", i.d)
                    *x24_1 = x0_11.d
                    
                    if (x0_11.d != 0)
                        *(x24_1 - 0x30) = "tblGames"
                        *(x24_1 - 0x38) = x19
                        *(x24_1 - 0x28) = i.d
                        *(x24_1 - 0x20) = 0
                        UI2SetState(x0_11, &data_11cf4b8, 0xffffffff, 0)
                i += 1
                x24_1 += 0x40
            while (i != 7)
            
            UI2SetState(zx.q(x19), &data_11cf7e8, 0xffffffff, 0)
            int32_t var_34
            int32_t x0_17 = AsyncMatchmakingGetState(&var_34)
            
            if (x0_17 == 0)
                x1_4 = &data_11cf818
                goto label_9c33bc
            
            if (x0_17 == 1)
                x1_4 = &data_11cf830
                goto label_9c33bc
        case 1
            UpdateGameList(zx.q(x19), 0x11d0800, "tblGames", 7, 0)
            x1_4 = &data_11cf7d0
        label_9c33bc:
            UI2SetState(zx.q(x19), x1_4, 0xffffffff, 0)
            int32_t x0_20
            
            if (data_11ce560 == "inp_code" && data_11ce4e8 == x19 && zx.d(data_11ce470) != 0)
                x0_20 = UI2Exists(zx.q(data_11ce4f0))
            
            uint64_t x0_21
            
            if (data_11ce560 != "inp_code" || data_11ce4e8 != x19 || zx.d(data_11ce470) == 0
                    || (x0_20 & 1) == 0)
                x0_21 = UI2GetHandle(zx.q(x19), "inp_code")
                data_11ce4f0 = x0_21.d
                
                if (x0_21.d != 0)
                    data_11ce560 = "inp_code"
                    data_11ce4e8 = x19
                    data_11ce470 = 1
            else
                x0_21 = zx.q(data_11ce4f0)
            
            int32_t x0_23 = UI2HasFocus(x0_21)
            int32_t x0_25
            
            if ((x0_23 & 1) == 0)
                x0_25 = XString::IsEmpty()
            
            if ((x0_23 & 1) != 0 || (x0_25 & 1) == 0)
                UI2SetState(zx.q(x19), &data_11cf878, 0xffffffff, 0)
            
            UI2SetText(zx.q(x19), &data_11cf848, gMultiplayerDlg + 0x198, 0xffffffff)
            XString::XString()
            void var_48
            
            if ((UI2TextboxActive(zx.q(x19), &var_48) & 1) == 0)
                XString::operator=(&var_48)
            
            char* x0_31 = XString::operator char const*()
            
            if (strlen(x0_31) != 4)
                UI2SetState(zx.q(x19), &data_11cf860, 0xffffffff, 0)
            else
                uint32_t x8_13 = zx.d(*x0_31)
                
                if (x8_13 - 0x30 u< 0xa || (x8_13 & 0xffffffdf) - 0x41 u<= 0x19)
                    uint32_t x8_16 = zx.d(x0_31[1])
                    
                    if (x8_16 - 0x30 u< 0xa || (x8_16 & 0xffffffdf) - 0x41 u<= 0x19)
                        uint32_t x8_19 = zx.d(x0_31[2])
                        
                        if (x8_19 - 0x30 u< 0xa || (x8_19 & 0xffffffdf) - 0x41 u<= 0x19)
                            uint32_t x8_22 = zx.d(x0_31[3])
                            
                            if (x8_22 - 0x30 u>= 0xa && (x8_22 & 0xffffffdf) - 0x41 u>= 0x1a)
                                UI2SetState(zx.q(x19), &data_11cf860, 0xffffffff, 0)
                        else
                            UI2SetState(zx.q(x19), &data_11cf860, 0xffffffff, 0)
                    else
                        UI2SetState(zx.q(x19), &data_11cf860, 0xffffffff, 0)
                else
                    UI2SetState(zx.q(x19), &data_11cf860, 0xffffffff, 0)
            
            if (*(GetClient() + 0x7778) != 0)
                UI2SetState(zx.q(x19), &data_11ceeb8, 0xffffffff, 0)
            
            if (*(GetActiveProfile() + 0x7560) == 1)
                UI2SetState(zx.q(x19), &data_11ceed0, 0xffffffff, 0)
            
            return XString::~XString()
        case 2
            UpdateGameList(zx.q(x19), 0x11d0800, "tblGames", 7, 1)
            x1_4 = &data_11cf7b8
            goto label_9c33bc
        case 3
            int64_t i_1 = 0
            void* x24_2 = &data_11d0838
            
            do
                int32_t x0_9
                
                if (*(x24_2 - 0x30) == "tblGames" && *(x24_2 - 0x38) == x19
                        && i_1 == zx.q(*(x24_2 - 0x28)) && *(x24_2 - 0x20) == 0)
                    x0_9 = UI2Exists(zx.q(*x24_2))
                
                uint64_t x0_7
                
                if (*(x24_2 - 0x30) == "tblGames" && *(x24_2 - 0x38) == x19
                        && i_1 == zx.q(*(x24_2 - 0x28)) && *(x24_2 - 0x20) == 0 && (x0_9 & 1) != 0)
                    x0_7 = zx.q(*x24_2)
                    
                    if (x0_7.d != 0)
                        UI2SetState(x0_7, &data_11cf4b8, 0xffffffff, 0)
                else
                    x0_7 = UI2GetHandle(zx.q(x19), "tblGames", i_1.d)
                    *x24_2 = x0_7.d
                    
                    if (x0_7.d != 0)
                        *(x24_2 - 0x30) = "tblGames"
                        *(x24_2 - 0x38) = x19
                        *(x24_2 - 0x28) = i_1.d
                        *(x24_2 - 0x20) = 0
                        UI2SetState(x0_7, &data_11cf4b8, 0xffffffff, 0)
                i_1 += 1
                x24_2 += 0x40
            while (i_1 != 7)
            
            x1_4 = &data_11cf7a0
            goto label_9c33bc
pthread_kill(pthread_self(), 6)
GameProfile* x0_40
XString* x1_7
x0_40, x1_7 = XNoReturn()
return CalcEmailState(x0_40, x1_7) __tailcall
