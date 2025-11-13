// 函数: _Z11TitleUpdate9UI2Handle
// 地址: 0x9ca4bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, TitleButtons)
void* x0 = GetClient()
void* x0_1 = GetActiveProfile()
int32_t x24 = *(x0_1 + 0x4330)

if (x24 != 0)
    UI2SetState(zx.q(x19), &data_11cea38, 0xffffffff, 0)
    void* x0_3 = GetClient()
    
    if (*(x0_3 + 0x63d8) != 1 || *(x0_3 + 0x63dc) != x24)
        *(x0_3 + 0x63d8) = 1
        *(x0_3 + 0x63dc) = x24
        LocalGameLoadSetup(x0_3 + 0x63d8, x0_3 + 0x63e0)
    
    if (*(x0_3 + 0x6408) s< GameLatestVersion(GameSpecific_GameType(), false))
        UI2SetState(zx.q(x19), &data_11cea68, 0xffffffff, 0)

int32_t x22_3 = *(x0_1 + 0x4344)

if ((x22_3 & 1) == 0)
    UI2SetState(zx.q(x19), &data_11cea20, 0xffffffff, 0)

int64_t var_180
int32_t x0_10 = GetOwnedExpansionSources(&var_180)
int32_t var_178

if (x0_10 == 1)
label_9ca5dc:
    UI2SetState(zx.q(x19), &data_11ceab0, 0xffffffff, 0)
    
    if ((x22_3 & 1) != 0)
        UI2SetState(zx.q(x19), &data_11cea98, 0xffffffff, 0)
else if (x0_10 == 2 && var_178 == 0x13)
    goto label_9ca5dc
XString::operator char const*()
char var_188
XString::XString(&var_188)

if ((XString::IsEmpty() & 1) == 0)
    UI2SetText(zx.q(x19), &data_11ce9f0, &var_188, 0xffffffff)
    
    if ((HaveAnyActiveGames() & 1) != 0)
        UI2SetState(zx.q(x19), &data_11d0418, 0xffffffff, 0)
else
    UI2SetState(zx.q(x19), &data_11cea08, 0xffffffff, 0)
    
    if ((HaveAnyActiveGames() & 1) != 0)
        UI2SetState(zx.q(x19), &data_11d0418, 0xffffffff, 0)

UI2SetState(zx.q(x19), GameAvatarGet(zx.q(*(x0_1 + 0x10))), 0xffffffff, 0)
int32_t x8_4 = *(GetActiveProfile() + 0x4324)
int64_t* x1_4

if (x8_4 == 0)
    if (*(GetClient() + 0x1c) != 6)
        if (*(GetClient() + 0x1c) == 8)
            x1_4 = &data_11ce948
        else
            x1_4 = &data_11ce930
    else
        x1_4 = &data_11ce948
    
    goto label_9ca768

if (x8_4 == 1)
    UI2SetState(zx.q(x19), &data_11ce930, 0xffffffff, 0)
    UI2SetState(zx.q(x19), &data_11ce8e8, 0xffffffff, 0)
    x1_4 = &data_11ce918
label_9ca768:
    UI2SetState(zx.q(x19), x1_4, 0xffffffff, 0)
    
    if (*(x0 + 0x7778) != 0)
        UI2SetState(zx.q(x19), &data_11ceaf8, 0xffffffff, 0)
    
    XString::XString()
    UI2StateDecl* var_198
    XString var_190
    ServerStatusMsg(&var_198, &var_190)
    UI2SetText(zx.q(x19), &data_11ce9a8, &var_190, 0xffffffff)
    
    if ((operator!=(&var_190, &data_793a18) & 1) != 0)
        UI2SetState(zx.q(x19), &data_11ce9c0, 0xffffffff, 0)
    
    UI2StateDecl* x1_6 = var_198
    
    if (x1_6 != 0)
        UI2SetState(zx.q(x19), x1_6, 0xffffffff, 0)
    
    void* x0_40 = GetActiveProfile()
    int32_t* x8_10 = *(*(x0_40 + 0x7580) + ((zx.q(*(x0_40 + 0x7588)) & 0xfffffffffffffdff) << 3))
    
    if (x8_10 == 0)
    label_9ca84c:
        UI2SetState(zx.q(x19), &data_11cea80, 0xffffffff, 0)
        UI2SetState(zx.q(x19), &data_11cee28, 0xffffffff, 0)
    else
        while (*x8_10 != 0xffffd8f1)
            x8_10 = *(x8_10 + 8)
            
            if (x8_10 == 0)
                goto label_9ca84c
    
    GetActiveProfile()
    
    if ((XString::IsEmpty() & 1) == 0)
        UI2SetState(zx.q(x19), &data_11d0430, 0xffffffff, 0)
    
    void* x0_47 = GetClient()
    int64_t x8_11 = *(x0_47 + 0x75f8)
    int32_t x9_2 = *(x0_47 + 0x7600)
    var_180 = x8_11
    int32_t var_178_1 = x9_2
    uint64_t x0_52
    int64_t* x1_7
    
    if ((x8_11.d & 0xffffffff) == 0)
        x1_7 = &data_11d0370
    label_9ca920:
        x0_52 = zx.q(x19)
    label_9ca984:
        UI2SetState(x0_52, x1_7, 0xffffffff, 0)
        XString::~XString()
        return XString::~XString()
    
    int32_t x0_49 = GetDailyImage(&var_180)
    
    if (x0_49 u<= 1 && (DailyInProgress() & 1) != 0)
        UI2SetState(zx.q(x19), &data_11d0448, 0xffffffff, 0)
    
    int64_t* x20_2
    
    switch (x0_49)
        case 0, 1, 7, 0x10, 0x11
            XString::~XString()
            return XString::~XString()
        case 2
            x1_7 = &data_11d03d0
            goto label_9ca920
        case 8
            x20_2 = &data_11d0358
        label_9ca970:
            UI2SetState(zx.q(x19), &data_11d03a0, 0xffffffff, 0)
            x0_52 = zx.q(x19)
            x1_7 = x20_2
            goto label_9ca984
        case 9
            x20_2 = &data_11d0340
            goto label_9ca970
        case 0xa
            x20_2 = &data_11d0328
            goto label_9ca970
        case 0xb
            x20_2 = &data_11d0310
            goto label_9ca970
        case 0xc
            UI2SetState(zx.q(x19), &data_11d03a0, 0xffffffff, 0)
            UI2SetState(zx.q(x19), &data_11d0358, 0xffffffff, 0)
            x1_7 = &data_11d03b8
            goto label_9ca920
        case 0xd
            UI2SetState(zx.q(x19), &data_11d03a0, 0xffffffff, 0)
            UI2SetState(zx.q(x19), &data_11d0340, 0xffffffff, 0)
            x1_7 = &data_11d03b8
            goto label_9ca920
        case 0xe
            UI2SetState(zx.q(x19), &data_11d03a0, 0xffffffff, 0)
            UI2SetState(zx.q(x19), &data_11d0328, 0xffffffff, 0)
            x1_7 = &data_11d03b8
            goto label_9ca920
        case 0xf
            UI2SetState(zx.q(x19), &data_11d03a0, 0xffffffff, 0)
            UI2SetState(zx.q(x19), &data_11d0310, 0xffffffff, 0)
            x1_7 = &data_11d03b8
            goto label_9ca920
else if (x8_4 == 2)
    UI2SetState(zx.q(x19), &data_11ce930, 0xffffffff, 0)
    UI2SetState(zx.q(x19), &data_11ce8e8, 0xffffffff, 0)
    x1_4 = &data_11ce900
    goto label_9ca768

pthread_kill(pthread_self(), 6)
XNoReturn()
return GetMatchmakingState() __tailcall
