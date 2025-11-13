// 函数: _Z23GameCreateUpdatePlayers9UI2HandleR9GameSetupbbbiii
// 地址: 0x9b9cdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg4.d & 1
int32_t x8_1

if (x21 != 0)
    x8_1 = 2
else
    x8_1 = arg3.d & 1

int32_t var_b0 = arg5.d
int32_t var_9c = arg4.d
int32_t x25 = arg1
GameProfile* x0 = GetActiveProfile()
int32_t var_80[0x4]
int32_t x8_5

if (x21 == 0)
    x8_5 = ProfileHasEntitlementForExpansion(3, &var_80) & (var_80[0] != 0x63 ? 1 : 0)
else
    if (*(arg2 + 0x11ac) s<= 4)
        UI2SetState(zx.q(x25), &data_11cedb0, 0xffffffff, 0)
    
    x8_5 = 1

void* result = GetActiveProfile()
uint64_t x8_6 = zx.q(*(arg2 + 0x11ac))
int32_t var_64
void* __offset(GameSetup, 0x4c) x21_1

if (x8_6.d s< 1)
label_9b9dd4:
    x21_1 = nullptr
    var_64 = 0xffffffff
    
    if (arg8 s>= 1)
    label_9b9e14:
        int32_t x26_1 = 0
        
        while (true)
            int32_t x8_13 = x26_1
            
            if (x26_1 u< 2)
                goto label_9b9e94
            
            if (x26_1 u> 3)
                if (x26_1 == 4)
                    x8_13 = 2
                    goto label_9b9e94
                
                if (x26_1 == 5)
                    x8_13 = 5
                    goto label_9b9e94
            else
                x8_13 = x26_1 + 1
            label_9b9e94:
                int32_t x9_2 = *(arg2 + 0x11ac)
                uint64_t fp_1
                
                if (x9_2 - 1 u< 4)
                    fp_1 = zx.q(x26_1)
                else
                    fp_1 = zx.q(x8_13)
                
                uint64_t x0_3
                UI2StateDecl* x1_1
                int32_t x2
                
                if ((((fp_1.d s< x9_2 ? 1 : 0) | (var_9c ^ 1)) & 1) == 0)
                    *(&data_11a7550 + (fp_1 << 2)) = 0xffffffff
                    x0_3 = zx.q(x25)
                    x1_1 = &data_11ce768
                    x2 = fp_1.d
                label_9b9e4c:
                    result = UI2SetState(x0_3, x1_1, x2, 0)
                label_9b9e50:
                    x26_1 += 1
                    
                    if (x26_1 == arg8)
                        break
                    
                    continue
                else
                    result = GetTablePlayer(zx.q(x25), fp_1.d, arg8, arg3 & 1, 
                        arg2 + fp_1 * 0x22c + 0x4c, x0, &var_64)
                    int32_t var_84_1 = result.d
                    
                    if (result.d == 0)
                        goto label_9b9e50
                    
                    if (x8_5 == 0 && x26_1 u>= 4 && (var_9c & 1) == 0)
                        x0_3 = zx.q(var_84_1)
                        x2 = -1
                        x1_1 = &data_11ced98
                        goto label_9b9e4c
                    
                    if (fp_1.d == 0)
                        UI2SetState(zx.q(var_84_1), &data_11ce7e0, 0xffffffff, 0)
                        UI2SetState(zx.q(var_84_1), &data_11ce798, 0xffffffff, 0)
                        
                        if (x21_1 == arg2 + fp_1 * 0x22c + 0x4c)
                            UI2SetState(zx.q(var_84_1), &data_11ce7b0, 0xffffffff, 0)
                    else if (x21_1 == arg2 + fp_1 * 0x22c + 0x4c)
                        UI2SetState(zx.q(var_84_1), &data_11ce7b0, 0xffffffff, 0)
                    
                    int32_t var_68
                    PlayerGetNameAvatar(arg2, arg2 + fp_1 * 0x22c + 0x4c, &var_68)
                    int32_t x8_19 = var_68
                    
                    if (x8_19 != 0xffffffff)
                        *(&data_11a7550 + (fp_1 << 2)) = x8_19
                        strcpy(&data_11cd950 + (fp_1 << 8), XString::operator char const*())
                    
                    XString::XString(&var_80)
                    UI2SetText(zx.q(var_84_1), &data_11ce678, &var_80, 0xffffffff)
                    XString::~XString()
                    int32_t* x20_2 = arg2 + fp_1 * 0x22c + 0x60
                    uint64_t x8_20 = zx.q(*x20_2)
                    uint64_t x0_10
                    UI2StateDecl* x1_6
                    
                    if (x8_20.d u> 3)
                        if (x8_20.d == 0x3e8)
                        label_9ba0b4:
                            x0_10 = zx.q(var_84_1)
                            x1_6 = &data_11ce720
                            goto label_9ba124
                        
                        if (x8_20.d == 0x3e9)
                            UI2SetState(zx.q(var_84_1), &data_11ce780, 0xffffffff, 0)
                            UI2SetState(zx.q(var_84_1), &data_11ce720, 0xffffffff, 0)
                        label_9ba138:
                            
                            if (fp_1.d == arg6 && (var_b0 & 1) != 0)
                                UI2SetState(zx.q(var_84_1), &data_11ce840, 0xffffffff, 0)
                            
                            uint64_t x0_21 = zx.q(*(&data_11a7550 + (fp_1 << 2)))
                            
                            if (x0_21.d != 0xffffffff)
                                UI2SetState(zx.q(var_84_1), GameAvatarGet(x0_21), 0xffffffff, 0)
                            
                            int64_t* x1_11
                            
                            if ((var_b0 & 1) == 0)
                                data_11ce449 = 0
                                UI2SetState(zx.q(x25), &data_11ced20, 0xffffffff, 0)
                                
                                if (zx.d(data_11ce448) == 1)
                                    x1_11 = &data_11cecf0
                                else
                                    x1_11 = &data_11cecc0
                            else
                                int64_t* x1_10
                                
                                if ((zx.d(data_11ce449) & 1) == 0)
                                    UI2SetState(zx.q(x25), &data_11ced38, 0xffffffff, 0)
                                    x1_10 = &data_11ced20
                                else
                                    x1_10 = &data_11ced08
                                
                                UI2SetState(zx.q(x25), x1_10, 0xffffffff, 0)
                                data_11ce449 = 1
                                
                                if (arg6 == 3 || arg6 == 0)
                                    data_11ce448 = 1
                                    x1_11 = &data_11cecf0
                                else
                                    data_11ce448 = 0
                                    x1_11 = &data_11cecc0
                            
                            UI2SetState(zx.q(x25), x1_11, 0xffffffff, 0)
                            int32_t x0_29 = IsOnlyRealPlayer(arg6)
                            
                            if (x8_1 == 0)
                                UI2SetState(zx.q(x25), &data_11ced80, 0xffffffff, 0)
                                UI2SetState(zx.q(x25), &data_11ceba0, 0, 0)
                                UI2SetState(zx.q(x25), &data_11cebb8, 1, 0)
                                
                                if (arg7 == 1)
                                    UI2SetState(zx.q(x25), &data_11cebd0, 1, 0)
                                    int32_t x0_50 = NumProfiles()
                                    int32_t x22_5
                                    
                                    if (x0_50 s< 1)
                                        x22_5 = 0
                                    else
                                        int32_t x23_3 = 0
                                        x22_5 = 0
                                        
                                        do
                                            GameProfile* x0_52 = GetProfileBySlot(x23_3)
                                            
                                            if (*(x0_52 + 0x4320) != *(x0 + 0x4320))
                                                CreateGameAddProfileButton(zx.q(x25), x22_5, x0_52)
                                                x22_5 += 1
                                            
                                            x23_3 += 1
                                        while (x0_50 != x23_3)
                                    
                                    UI2SetState(zx.q(x25), &data_11cec90, x22_5, 0)
                                    UI2SetInt(zx.q(x25), &data_11ced50, x22_5 + 1, 0xffffffff)
                                else if (arg7 == 0)
                                    UI2SetState(zx.q(x25), &data_11cebd0, 0, 0)
                                    UI2SetState(zx.q(x25), &data_11cec30, 0, 0)
                                    UI2SetState(zx.q(x25), &data_11cec48, 1, 0)
                                    UI2SetState(zx.q(x25), &data_11cec60, 2, 0)
                                    UI2SetState(zx.q(x25), &data_11cec78, 3, 0)
                                    UI2SetInt(zx.q(x25), &data_11ced50, 4, 0xffffffff)
                            else if (x8_1 == 1)
                                UI2SetState(zx.q(x25), &data_11ced68, 0xffffffff, 0)
                                UI2SetState(zx.q(x25), &data_11ceb88, 0, 0)
                                UI2SetState(zx.q(x25), &data_11ceb70, 1, 0)
                                
                                if (arg7 == 1)
                                    UI2SetState(zx.q(x25), &data_11cebd0, 0, 0)
                                    void* x0_48 = GetClient()
                                    uint64_t x8_35 = zx.q(*(x0_48 + 0x5028))
                                    int32_t i
                                    
                                    if (x8_35.d s>= 1)
                                        uint64_t x10_6 = zx.q(*(arg2 + 0x11ac))
                                        
                                        if (x10_6.d s<= 0)
                                            i = 0
                                            void* x10_7 = x0_48 + 0x3c
                                            int64_t x11_2 = 1
                                            
                                            do
                                                if (*x10_7 - 1 u<= 1)
                                                    var_80[sx.q(i)] = *(x10_7 - 0x10)
                                                    i += 1
                                                
                                                if (x11_2 u>= x8_35)
                                                    break
                                                
                                                x10_7 += 0x20
                                                x11_2 += 1
                                            while (i != 3)
                                        else
                                            int64_t x11_1 = 0
                                            
                                            for (i = 0; i != 3; )
                                                void* x12_1 = x0_48 + (x11_1 << 5)
                                                
                                                if (*(x12_1 + 0x3c) - 1 u<= 1)
                                                    int32_t j = *(x12_1 + 0x2c)
                                                    int64_t x13_3 = 0
                                                    int32_t x14_1 = 1
                                                    void* __offset(GameSetup, 0x64) x15_1 =
                                                        arg2 + 0x64
                                                    
                                                    while (*(x15_1 - 4) != 1 || *x15_1 != j)
                                                        x13_3 += 1
                                                        x14_1 = x13_3 u< x10_6 ? 1 : 0
                                                        x15_1 += 0x22c
                                                        
                                                        if (x10_6 == x13_3)
                                                            break
                                                    
                                                    if ((x14_1 & 1) == 0)
                                                        var_80[sx.q(i)] = j
                                                        i += 1
                                                
                                                x11_1 += 1
                                                
                                                if (x11_1 u>= x8_35)
                                                    break
                                    
                                    uint64_t i_1
                                    
                                    if (x8_35.d s< 1 || i s< 1)
                                        i_1 = 0
                                    else
                                        int64_t x23_4 = 0
                                        i_1 = zx.q(i)
                                        
                                        do
                                            CreateGameAddFriendButton(zx.q(x25), x23_4.d, 
                                                zx.q(var_80[x23_4]))
                                            x23_4 += 1
                                        while (i_1 != x23_4)
                                    
                                    UI2SetState(zx.q(x25), &data_11ceca8, i_1.d, 0)
                                    UI2SetInt(zx.q(x25), &data_11ced50, i_1.d + 1, 0xffffffff)
                                else if (arg7 == 0)
                                    UI2SetState(zx.q(x25), &data_11cebd0, 1, 0)
                                    UI2SetState(zx.q(x25), &data_11cebe8, 0, 0)
                                    UI2SetState(zx.q(x25), &data_11cec00, 1, 0)
                                    
                                    if ((x0_29 & 1) != 0)
                                        UI2SetState(zx.q(x25), &data_11ceae0, 1, 0)
                                    
                                    UI2SetInt(zx.q(x25), &data_11ced50, 2, 0xffffffff)
                            
                            if (fp_1.d u>= 2 && (var_9c & 1) == 0 && *x20_2 != 0)
                                UI2SetState(zx.q(var_84_1), &data_11ce870, 0xffffffff, 0)
                            
                            result = XString::~XString()
                            goto label_9b9e50
                    else
                        switch (x8_20)
                            case 0
                                x0_10 = zx.q(var_84_1)
                                x1_6 = &data_11ce768
                            label_9ba124:
                                UI2SetState(x0_10, x1_6, 0xffffffff, 0)
                                goto label_9ba138
                            case 1
                                if (*(arg2 + fp_1 * 0x22c + 0x6c) == 1)
                                    UI2SetState(zx.q(var_84_1), &data_11ce6c0, 0xffffffff, 0)
                                
                                goto label_9ba0b4
                            case 2
                                UI2StateDecl* x1_7
                                
                                if (*(arg2 + fp_1 * 0x22c + 0x64) == 1)
                                    x1_7 = &data_11ce750
                                else
                                    x1_7 = &data_11ce738
                                
                                UI2SetState(zx.q(var_84_1), x1_7, 0xffffffff, 0)
                                strcpy(&data_11cd950 + (fp_1 << 8), XString::operator char const*())
                                goto label_9ba138
                            case 3
                                x0_10 = zx.q(var_84_1)
                                x1_6 = &data_11ce6f0
                                goto label_9ba124
            
            pthread_kill(pthread_self(), 6)
            return LocalDLCState(XNoReturn()) __tailcall
else
    x21_1 = arg2 + 0x4c
    
    while (*(x21_1 + 0x14) != 1 || *(x21_1 + 0x18) != *(result + 0x42ac))
        uint64_t temp0_1 = x8_6
        x8_6 -= 1
        x21_1 += 0x22c
        
        if (temp0_1 == 1)
            goto label_9b9dd4
    
    var_64 = 0xffffffff
    
    if (arg8 s>= 1)
        goto label_9b9e14
return result
