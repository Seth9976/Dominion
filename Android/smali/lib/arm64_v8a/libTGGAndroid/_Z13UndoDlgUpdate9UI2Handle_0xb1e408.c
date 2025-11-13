// 函数: _Z13UndoDlgUpdate9UI2Handle
// 地址: 0xb1e408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, UndoDlgClick)
void* x0 = ActiveGame()
int32_t x8 = *(x0 + 0x1318)
PlayerAvatarType var_30

if (x8 == 0 || x8 == 3)
label_b1e4c8:
    uint64_t x8_5 = zx.q(data_11ad39c)
    XString var_28
    
    if (x8_5.d u<= 5)
        switch (x8_5)
            case 1
                if (*(GetActiveProfile() + 0x42ac) != *(x0 + 0x1324))
                    UI2SetState(zx.q(x19), &data_182ddc8, 0xffffffff, 0)
                    data_182a72c
                    XFormatString("%s has requested to undo %d decisions.")
                else
                    UI2SetState(zx.q(x19), &data_182ddb0, 0xffffffff, 0)
                    data_182a72c
                    XFormatString("You requested to undo %d decisions.")
                
                UI2SetText(zx.q(x19), &data_182de28, &var_28, 0xffffffff)
                int64_t result = XString::~XString()
                
                if (*(x0 + 0x11b4) s< 3)
                    return result
                
                *(x0 + 0x1328)
                XFormatString("%d/%d")
                UI2SetText(zx.q(x19), &data_182de40, &var_28, 0xffffffff)
                return XString::~XString()
            case 2
                UI2SetState(zx.q(x19), &data_182dde0, 0xffffffff, 0)
                data_182a72c
                XFormatString("%s has requested to undo %d decisions.")
                UI2SetText(zx.q(x19), &data_182de28, &var_28, 0xffffffff)
                
                if (*(x0 + 0x11b4) s>= 3)
                    *(x0 + 0x1328)
                    XFormatString("%d/%d")
                    UI2SetText(zx.q(x19), &data_182de40, &var_30, 0xffffffff)
                    XString::~XString()
                
                return XString::~XString()
            case 4
                UI2SetState(zx.q(x19), &data_182ddf8, 0xffffffff, 0)
                XFormatString("%s canceled their undo request.")
                UI2SetText(zx.q(x19), &data_182de28, &var_28, 0xffffffff)
                return XString::~XString()
            case 5
                UI2SetState(zx.q(x19), &data_182de10, 0xffffffff, 0)
                XFormatString("The undo request has been declined.")
                UI2SetText(zx.q(x19), &data_182de28, &var_28, 0xffffffff)
                return XString::~XString()
else
    data_11ad39c = x8
    uint64_t x8_1 = zx.q(*(x0 + 0x11b4))
    
    if (x8_1.d s>= 1)
        PlayerConfig_V1* x1_1 = x0 + 0x54
        
        while (*(x1_1 + 0x14) != 1 || *(x1_1 + 0x18) != *(x0 + 0x1324))
            uint64_t temp0_1 = x8_1
            x8_1 -= 1
            x1_1 += 0x22c
            
            if (temp0_1 == 1)
                goto label_b1e6fc
        
        PlayerGetNameAvatar(x0 + 8, x1_1, &var_30)
        strcpy(&data_1836958, XString::operator char const*())
        data_182a72c = DomLogGetCurrentDecision() - *(x0 + 0x1320) + 1
        XString::~XString()
        goto label_b1e4c8
label_b1e6fc:
pthread_kill(pthread_self(), 6)
return UndoDisplayUpdate(XNoReturn()) __tailcall
