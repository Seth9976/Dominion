// 函数: _Z23DomOpponentLayoutUpdate9UI2Handle9PlayerWho
// 地址: 0xb364b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t x19 = arg1
int32_t x0
int32_t x21_1

if (*(gDomClient + 0x2079c) == arg2)
    x21_1 = *(gDomClient + 0x207a0)
    x0 = LocalWho()

if (*(gDomClient + 0x2079c) == arg2 && x21_1 != x0 && zx.d(*(gDomClient + 0x22134)) == 0)
    void* x0_1 = ActiveGame()
    uint64_t i_4 = zx.q(*(x0_1 + 0x11b4))
    
    if (i_4.d s>= 1)
        void* x9_1 = x0_1 + 0x74
        uint64_t i
        
        do
            int32_t x12_2 = *x9_1 - 0x3e9
            
            if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
                goto label_b3656c
            
            i = i_4
            i_4 -= 1
            x9_1 += 0x22c
        while (i != 1)
    
    UI2SetState(zx.q(x19), &data_182ec38, 0xffffffff, 0)
    
    if (*(ActiveGame() + 0x11b4) == 6)
        goto label_b3657c
    
    goto label_b365cc

label_b3656c:

if (*(ActiveGame() + 0x11b4) != 6)
label_b365cc:
    
    if (*(ActiveGame() + 0x11b4) == 5 && NearestAspectRatio() == 0)
        goto label_b3657c
else
label_b3657c:
    
    if (*(gDomClient + 0x3c) != x20)
        UI2SetState(zx.q(x19), &data_182eef0, 0xffffffff, 0)

void* x0_8 = GetActiveProfile()
GameSave* x0_9 = ActiveGame()

if ((zx.d(*(x0_8 + 0x4344)) & 4) == 0 && (zx.d(*(x0_9 + 0x20)) & 4) != 0)
    UI2SetState(zx.q(x19), &data_182eec0, 0xffffffff, 0)

if (*(gDomClient + 0x3c) == x20)
    UI2SetState(zx.q(x19), &data_182ed58, 0xffffffff, 0)

XString::XString()
XString::XString()
XString::XString()
XString var_78
XString var_70
void var_68
int32_t x0_13 = ShouldShowGained(zx.q(x20), &var_68, &var_70, &var_78)
UI2SetText(zx.q(x19), &data_182ed28, &var_68, 0xffffffff)
UI2SetText(zx.q(x19), &data_182ed40, &var_78, 0xffffffff)
UI2SetText(zx.q(x19), &data_182ed10, &var_70, 0xffffffff)
UI2SetText(zx.q(x19), &data_182ecf8, &var_68, 0xffffffff)
int64_t* x1_1

if ((x0_13 & 1) != 0)
    x1_1 = &data_182ece0
else
    x1_1 = &data_182ecc8

UI2SetState(zx.q(x19), x1_1, 0xffffffff, 0)
PlayerConfig_V1* x0_20 = GameGetPlayer(x0_9 + 8, zx.q(x20))
int32_t var_7c
PlayerGetNameAvatar(x0_9 + 8, x0_20, &var_7c)
UI2StateDecl* x0_23 = GameAvatarGet(zx.q(var_7c))
void var_88

if (*(ActiveGame() + 0x11b4) s>= 5 && *(gDomClient + 0x3c) != x20)
    GetPlayerInitialUncolored(x0_9, x20)
    XString::operator=(&var_88)
    XString::~XString()

UI2SetState(zx.q(x19), x0_23, 0xffffffff, 0)
UI2SetText(zx.q(x19), &data_182ec08, &var_88, 0xffffffff)
int32_t var_94
int32_t var_90

if ((IsWinner(x0_9, zx.q(x20), &var_90, &var_94) & 1) != 0)
    UI2SetState(zx.q(x19), &data_182ee48, 0xffffffff, 0)

int64_t (* x24)()

if (x20 == 0xffffffff)
    x24 = gDomClient + 0x48
else
    x24 = gDomClient + 0x48 + muls.dp.d(x20, 0x4d48)

XStringFromInt(*(x24 + 0x24))
UI2SetText(zx.q(x19), &data_182ec20, &var_90, 0xffffffff)
XString::~XString()
int32_t x8_12 = *(gDomClient + 0x38)
uint64_t x1_7

if (x8_12 == 0xffffffff)
    x1_7 = 0
else
    x1_7 = zx.q(x8_12)

int32_t x0_35 = PlayerWhoToSeat(zx.q(x20), x1_7)
int32_t x8_13 = *(ActiveGame() + 0x11b4)
int64_t* x1_8

if (x8_13 == 2)
    x1_8 = &data_182ee18
label_b36888:
    UI2SetState(zx.q(x19), x1_8, 0xffffffff, 0)
    int32_t x8_14 = *(x24 + 0x4d3c)
    
    if (x8_14 == 0)
        goto label_b36928
    
    if (x8_14 == 2)
        UI2SetState(zx.q(x19), &data_182ee78, 0xffffffff, 0)
        UI2SetState(zx.q(x19), &data_182eea8, 0xffffffff, 0)
    label_b36928:
        uint64_t x10_1 = zx.q(*(gDomClient + 0x205e8))
        int64_t x27_1 = sx.q(x20)
        int32_t var_98_1
        int32_t x23_3
        int32_t x24_1
        PlayerConfig_V1* x26_1
        
        if (x10_1.d == 0)
            x26_1 = x0_20
            x24_1 = 0
            var_98_1 = 0
            x23_3 = 0
        else
            void* i_5 = *(gDomClient + 0x205e0)
            void* i_3 = i_5
            int64_t x10_2 = i_5 + x10_1 * 0x21d8
            void* i_1 = i_5
            
            while (true)
                if (zx.d(*(i_1 + 0x21d2)) == 0)
                    i_1 += 0x21d8
                    
                    if (i_1 u< x10_2)
                        continue
                else if (i_1 != 0xffffffff)
                    var_98_1 = 0
                    
                    do
                        if (*(i_1 + 0x2c) == 0 && *(i_1 + 0xa0) == x20 && *(i_1 + 0xa4) == 0x3ec)
                            int32_t x15_6
                            
                            if (*(i_1 + 0xc8) == 0)
                                x15_6 = var_98_1 + 1
                            else
                                x15_6 = var_98_1
                            
                            var_98_1 = x15_6
                        
                        if (i_1 == 0)
                            i_1 = i_5
                        else
                            i_1 += 0x21d8
                        
                        if (i_1 u>= x10_2)
                            break
                        
                        while (zx.d(*(i_1 + 0x21d2)) == 0)
                            i_1 += 0x21d8
                            
                            if (i_1 u>= x10_2)
                                goto label_b36a0c
                    while (i_1 != 0xffffffff)
                    
                    break
                
                var_98_1 = 0
                break
            
        label_b36a0c:
            void* i_2 = i_3
            
            while (true)
                if (zx.d(*(i_2 + 0x21d2)) == 0)
                    i_2 += 0x21d8
                    
                    if (i_2 u< x10_2)
                        continue
                else if (i_2 != 0xffffffff)
                    x24_1 = 0
                    
                    do
                        if (*(i_2 + 0x2c) == 0 && *(i_2 + 0xa0) == x20 && *(i_2 + 0xa4) == 0x3eb
                                && *(i_2 + 0xc8) == 0)
                            x24_1 += 1
                        
                        if (i_2 == 0)
                            i_2 = i_5
                        else
                            i_2 += 0x21d8
                        
                        if (i_2 u>= x10_2)
                            break
                        
                        while (zx.d(*(i_2 + 0x21d2)) == 0)
                            i_2 += 0x21d8
                            
                            if (i_2 u>= x10_2)
                                goto label_b36ab8
                    while (i_2 != 0xffffffff)
                    
                    break
                
                x24_1 = 0
                break
            
        label_b36ab8:
            
            while (zx.d(*(i_3 + 0x21d2)) == 0)
                i_3 += 0x21d8
                
                if (i_3 u>= x10_2)
                    goto label_b36b58
            
            if (i_3 == 0xffffffff)
            label_b36b58:
                x26_1 = x0_20
                x23_3 = 0
            else
                x23_3 = 0
                
                do
                    if (*(i_3 + 0x2c) == 0 && *(i_3 + 0xa0) == x20 && *(i_3 + 0xa4) == 0x3ea
                            && *(i_3 + 0xc8) == 0)
                        x23_3 += 1
                    
                    if (i_3 == 0)
                        i_3 = i_5
                    else
                        i_3 += 0x21d8
                    
                    if (i_3 u>= x10_2)
                        break
                    
                    while (zx.d(*(i_3 + 0x21d2)) == 0)
                        i_3 += 0x21d8
                        
                        if (i_3 u>= x10_2)
                            goto label_b36b4c
                while (i_3 != 0xffffffff)
                
            label_b36b4c:
                x26_1 = x0_20
        
        int32_t x0_44
        
        if (*((x27_1 << 6) + 0x18345e0) == "tbl_opponent_deck" && *((x27_1 << 6) + 0x18345d8) == x19
                && *((x27_1 << 6) + 0x18345e8) == 0xffffffff)
            x0_44 = UI2Exists(zx.q(*((x27_1 << 6) + 0x1834610)))
        
        uint64_t x0_45
        
        if (*((x27_1 << 6) + 0x18345e0) != "tbl_opponent_deck" || *((x27_1 << 6) + 0x18345d8) != x19
                || *((x27_1 << 6) + 0x18345e8) != 0xffffffff || (x0_44 & 1) == 0)
            x0_45 = UI2GetHandle(zx.q(x19), "tbl_opponent_deck")
            *((x27_1 << 6) + 0x1834610) = x0_45.d
            
            if (x0_45.d != 0)
                *((x27_1 << 6) + 0x18345e0) = "tbl_opponent_deck"
                *((x27_1 << 6) + 0x18345d8) = x19
                *((x27_1 << 6) + 0x18345e8) = 0xffffffff
        else
            x0_45 = zx.q(*((x27_1 << 6) + 0x1834610))
        
        SetPodCounter(x0_45, x24_1, false)
        int32_t x0_48
        
        if (*((x27_1 << 6) + 0x1834760) == "tbl_opponent_discard"
                && *((x27_1 << 6) + 0x1834758) == x19 && *((x27_1 << 6) + 0x1834768) == 0xffffffff)
            x0_48 = UI2Exists(zx.q(*((x27_1 << 6) + 0x1834790)))
        
        int32_t x24_3
        
        if (*((x27_1 << 6) + 0x1834760) != "tbl_opponent_discard"
                || *((x27_1 << 6) + 0x1834758) != x19 || *((x27_1 << 6) + 0x1834768) != 0xffffffff
                || (x0_48 & 1) == 0)
            int32_t x0_50 = UI2GetHandle(zx.q(x19), "tbl_opponent_discard")
            x24_3 = x0_50
            *((x27_1 << 6) + 0x1834790) = x0_50
            
            if (x0_50 != 0)
                *((x27_1 << 6) + 0x1834760) = "tbl_opponent_discard"
                *((x27_1 << 6) + 0x1834758) = x19
                *((x27_1 << 6) + 0x1834768) = 0xffffffff
        else
            x24_3 = *((x27_1 << 6) + 0x1834790)
        
        SetPodCounter(zx.q(x24_3), var_98_1, false)
        UI2SetState(zx.q(x24_3), &data_182ee60, 0xffffffff, 0)
        int32_t x0_54
        
        if (*((x27_1 << 6) + 0x18348e0) == "tbl_opponent_hand" && *((x27_1 << 6) + 0x18348d8) == x19
                && *((x27_1 << 6) + 0x18348e8) == 0xffffffff)
            x0_54 = UI2Exists(zx.q(*((x27_1 << 6) + 0x1834910)))
        
        int32_t x24_5
        
        if (*((x27_1 << 6) + 0x18348e0) != "tbl_opponent_hand" || *((x27_1 << 6) + 0x18348d8) != x19
                || *((x27_1 << 6) + 0x18348e8) != 0xffffffff || (x0_54 & 1) == 0)
            int32_t x0_56 = UI2GetHandle(zx.q(x19), "tbl_opponent_hand")
            x24_5 = x0_56
            *((x27_1 << 6) + 0x1834910) = x0_56
            
            if (x0_56 != 0)
                *((x27_1 << 6) + 0x18348e0) = "tbl_opponent_hand"
                *((x27_1 << 6) + 0x18348d8) = x19
                *((x27_1 << 6) + 0x18348e8) = 0xffffffff
        else
            x24_5 = *((x27_1 << 6) + 0x1834910)
        
        SetPodCounter(zx.q(x24_5), x23_3, false)
        int64_t* x1_12
        
        if (x23_3 s<= 4)
            x1_12 = (&data_1149d68)[sx.q(x23_3)]
        else
            x1_12 = &data_182ef80
        
        UI2SetState(zx.q(x24_5), x1_12, 0xffffffff, 0)
        DeclarePlayerColor(zx.q(x19), zx.q(x20))
        int64_t* x1_14
        
        if (*(x26_1 + 0x14) != 1)
            x1_14 = &data_182ec80
        else if (GameClientPresence(zx.q(*(x26_1 + 0x18))) == 1)
            x1_14 = &data_182ec50
        else
            x1_14 = &data_182ec68
        
        UI2SetState(zx.q(x19), x1_14, 0xffffffff, 0)
        GetClient()
        uint64_t x8_32 = zx.q(*(gDomClient + 0x82b48))
        
        if (x8_32.d u<= 4)
            switch (x8_32)
                case 0, 3
                    if (var_98_1 == 0 || 0 != 0)
                        UI2SetState(zx.q(x19), &data_182eed8, 0xffffffff, 0)
                case 1, 2
                    UI2SetState(zx.q(x19), &data_182eed8, 0xffffffff, 0)
                case 4
                    if (var_98_1 == 0 || *(gDomClient + 0x82b4c) - 1 u< 2)
                        UI2SetState(zx.q(x19), &data_182eed8, 0xffffffff, 0)
            
            XString::~XString()
            XString::~XString()
            XString::~XString()
            return XString::~XString()
    else if (x8_14 == 1)
        UI2SetState(zx.q(x19), &data_182ee78, 0xffffffff, 0)
        XStringFromInt(*(x24 + 0x4d40))
        UI2SetText(zx.q(x19), &data_182ee90, &var_90, 0xffffffff)
        XString::~XString()
        goto label_b36928
else
    if (x8_13 == 3)
        if (x0_35 != 1)
        label_b36870:
            x1_8 = &data_182ee30
            goto label_b36888
        
    label_b3685c:
        x1_8 = &data_182ee00
        goto label_b36888
    
    int32_t x9_3 = x0_35 << 1
    
    if (x9_3 == x8_13)
        x1_8 = &data_182ee18
        goto label_b36888
    
    if (x9_3 s< x8_13)
        goto label_b3685c
    
    if (x9_3 s> x8_13)
        goto label_b36870
pthread_kill(pthread_self(), 6)
return PlayerGetName(XNoReturn()) __tailcall
