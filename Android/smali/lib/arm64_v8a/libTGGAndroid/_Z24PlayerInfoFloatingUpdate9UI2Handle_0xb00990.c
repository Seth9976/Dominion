// 函数: _Z24PlayerInfoFloatingUpdate9UI2Handle
// 地址: 0xb00990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, PlayerInfoFloatingClick)
int32_t v0
float v1
int32_t v2
float v3
v0, v1, v2, v3 = UI2SubBoundary(*UI2_TAPTIP_PLAYER)
uint64_t x0_1 = zx.q(*gPlayerInfoPopup)

if (x0_1.d == 0xffffffff)
    x0_1 = zx.q(data_11ad38c)
else
    data_11ad38c = x0_1.d

int64_t v10
v10.d = v2 f- v0
int32_t x8 = *(gDomClient + 0x38)
uint64_t x1_1

if (x8 == 0xffffffff)
    x1_1 = 0
else
    x1_1 = zx.q(x8)

int32_t x0_2 = PlayerWhoToSeat(x0_1, x1_1)
int32_t x0_3 = GameMainUI()
uint64_t x0_4
float v8

if (x0_2 == 0)
    int32_t x0_6
    
    if (data_182ab40 == "btn_playerAvatar" && data_182a768 == x0_3 && data_182a770 == 0xffffffff)
        x0_6 = UI2Exists(zx.q(data_182a778))
    
    if (data_182ab40 != "btn_playerAvatar" || data_182a768 != x0_3 || data_182a770 != 0xffffffff
            || (x0_6 & 1) == 0)
        x0_4 = UI2GetHandle(zx.q(x0_3), "btn_playerAvatar")
        data_182a778 = x0_4.d
        
        if (x0_4.d == 0)
            v8 = float.s(0x443f8000)
        else
            data_182ab40 = "btn_playerAvatar"
            data_182a768 = x0_3
            data_182a770 = 0xffffffff
            v8 = float.s(0x443f8000)
    else
        x0_4 = zx.q(data_182a778)
        v8 = float.s(0x443f8000)
else
    v8 = v3 - v1
    
    if (data_182ab40 != "tbl_opponents" || data_182a768 != x0_3 || data_182a770 != x0_2 - 1
            || data_182ab48 != "btn_avatar" || zx.d(data_182a620) == 0)
        x0_4 = UI2GetHandle(zx.q(x0_3), "tbl_opponents", x0_2 - 1)
        data_182a778 = x0_4.d
        
        if (x0_4.d != 0)
            x0_4 = UI2GetHandle(x0_4, "btn_avatar")
            data_182a778 = x0_4.d
            data_182a768 = x0_3
            data_182ab40 = "tbl_opponents"
            data_182a770 = x0_2 - 1
            data_182ab48 = "btn_avatar"
            data_182a620 = 1
    else
        x0_4 = zx.q(data_182a778)

int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3_1
v0_1, v1_1, v2_1, v3_1 = UI2GetRect(x0_4)
int32_t var_70 = v0_1
int32_t var_6c = v1_1
int32_t var_68 = v2_1
int32_t var_64 = v3_1
UI2GetTransform(GameMainUI())
uint64_t var_a0 = *V20
uint64_t v1_2
v1_2.d = fconvert.s(1f)
int32_t var_98 = v10.d
float var_94 = v8
int64_t var_d0 = 0
int64_t var_c8 = 0
float var_90
ComputeTaptipTransform(&var_70, 0, &var_a0, &var_d0, var_90, v1_2.d)
void var_c0
UI2SetTransform(zx.q(x19), &var_c0)
int32_t* x0_12 = ActiveGame()
PlayerConfig_V1* x0_14 = GameGetPlayer(&x0_12[2], zx.q(data_11ad38c))

if (*(x0_14 + 0x14) == 1)
    if ((GameCanAddFriend(x0_14) & 1) == 0)
        goto label_b00cec
    
    goto label_b00c00

UI2SetState(zx.q(x19), &data_182bcf8, 0xffffffff, 0)

if ((GameCanAddFriend(x0_14) & 1) != 0)
label_b00c00:
    
    if ((GameCanBlock(x0_14) & 1) == 0)
        UI2SetState(zx.q(x19), &data_182bcc8, 0xffffffff, 0)
else
label_b00cec:
    UI2SetState(zx.q(x19), &data_182bcb0, 0xffffffff, 0)
    
    if ((GameCanBlock(x0_14) & 1) == 0)
        UI2SetState(zx.q(x19), &data_182bcc8, 0xffffffff, 0)

if (*(GameGetPlayer(&x0_12[2], zx.q(data_11ad38c)) + 0x14) == 3)
    int64_t x8_11 = sx.q(*(x0_14 + 0x18))
    
    if (x8_11.d u>= 4)
    label_b00d68:
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        UI2SetState(zx.q(x19), &data_182bdb8, 0xffffffff, 0)
    else
        int32_t x23_1 = -1
        UI2SetState(zx.q(x19), (&data_1153bb0)[x8_11], 0xffffffff, 0)
        
        if ((zx.d(x0_12[8].b) & 4) == 0)
            if ((IsCampaignMission(zx.q(*x0_12), &var_d0) & 1) != 0)
                goto label_b00d38
            
            goto label_b00c7c
        
        x23_1 = *(GetActiveProfile() + 0x75a0)
        UI2SetState(zx.q(x19), &data_182bd70, 0xffffffff, 0)
        uint64_t x8_13
        
        if ((IsCampaignMission(zx.q(*x0_12), &var_d0) & 1) == 0)
        label_b00c7c:
            x8_13 = zx.q(x23_1 + 1)
            
            if (x8_13.d u> 4)
                goto label_b00d68
        else
        label_b00d38:
            int32_t x23_2 = *(GetActiveProfile() + 0x3588)
            UI2SetState(zx.q(x19), &data_182bd70, 0xffffffff, 0)
            x8_13 = zx.q(x23_2 + 1)
            
            if (x8_13.d u> 4)
                goto label_b00d68
        
        switch (x8_13)
            case 1
                UI2SetState(zx.q(x19), &data_182bda0, 0xffffffff, 0)
            case 2
                UI2SetState(zx.q(x19), &data_182bdb8, 0xffffffff, 0)
            case 3
                UI2SetState(zx.q(x19), &data_182bdd0, 0xffffffff, 0)
            case 4
                UI2SetState(zx.q(x19), &data_182bd88, 0xffffffff, 0)

int32_t var_54
PlayerGetNameAvatar(&x0_12[2], x0_14, &var_54)
UI2SetState(zx.q(x19), GameAvatarGet(zx.q(var_54)), 0xffffffff, 0)
UI2SetText(zx.q(x19), &data_182bce0, &var_d0, 0xffffffff)
DeclarePlayerColor(zx.q(x19), zx.q(data_11ad38c))
return XString::~XString()
