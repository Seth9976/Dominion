// 函数: _Z15DomClientUpdateR9DomClient
// 地址: 0xb1ebb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_60 = v8

if (zx.d(*doUpdate) == 0)
    return 

if ((zx.d(data_180f5a0) & 1) == 0)
    CampaignDialogPreload()
    data_180f5a0 = 1

if ((GameDlgManagerDialogActive(0x7ee, 7) & 1) == 0)
    DomMapUpdate(zx.q(*(gCampaignDlg + 8)))

DotAnimationUpdate()

if (zx.d(*(gTwitterExport + 1)) != 0 && (MutexTryLock(gTwitterExport + 4) & 1) != 0)
    XShareImage(XString::operator char const*())
    *(gTwitterExport + 1) = 0
    MutexUnlock(gTwitterExport + 4)

PreloadCardArtUpdate()

if ((HasActiveGame().d & 1) == 0)
    return 

GameSave* x0_7 = ActiveGame()

if (*(gDomClient + 0x84418) != 0)
    v8.d = *gSecondsPerUpdate
    int64_t x0_8 = GameDlgMangerGetUI(0x7e8, 8, true)
    
    if (zx.d(*(gDomClient + 0x84384)) == 0)
        *(gDomClient + 0x84384) = 1
        *(gDomClient + 0x84388) = 0x404ccccd
        UI2SetStateEffect(x0_8, "notification", 1, false)
    else
        float v0_1 = *(gDomClient + 0x84388) f- v8.d
        *(gDomClient + 0x84388) = v0_1
        
        if (not(v0_1 > 0f))
            memcpy(gDomClient + 0x84378, gDomClient + 0x8438c, 
                sx.q(*(gDomClient + 0x84418)) * 0x14 - 1)
            *(gDomClient + 0x84418) -= 1

TableAutoScrollUpdate()
int32_t x8_8 = *(x0_7 + 0x1318)

if (zx.d(*(gDomClient + 0x20591)) == 0)
    if (x8_8 != 0)
        *(gDomClient + 0x20591) = 1
        GameDlgManagerShow(0x7e9, 5)
else if (x8_8 == 3)
    *(gDomClient + 0x20591) = 0
    GameDlgManagerDismiss(5, false)
    *(x0_7 + 0x1318) = 0

if (zx.d(*(gDomClient + 0x20)) == 0 && *(gDomClient + 0x8444c) != 0)
    ProcessModifyAI()

if (*(gDomClient + 0x205a0) != 0)
    int64_t x0_10 = Now()
    int64_t x8_12 = *(gDomClient + 0x205a0)
    int64_t x9_3 = sx.q(*(gDomClient + 0x205a8))
    
    if (*(x8_12 + x9_3 * 0x18 + 8) s<= x0_10 - *(gDomClient + 0x205b0))
        int64_t x27_1
        
        for (int32_t i = *(x8_12 + x9_3 * 0x18 + 4); i != 0xffffffff; 
                i = *(x27_1 + sx.q(i) * 0x18 + 4))
            int64_t x0_11 = Now()
            x27_1 = *(gDomClient + 0x205a0)
            *(gDomClient + 0x205b0) = x0_11
            *(gDomClient + 0x205a8) = i
            void* x28_1 = x27_1 + muls.dp.d(i, 0x18)
            (*(x28_1 + 0x10))()
            
            if (*(x28_1 + 8) != 0)
                goto label_b1eea4
        
        *(gDomClient + 0x205a0) = 0

label_b1eea4:
int32_t x22_1

if (*(GameGetPlayer(x0_7 + 8, zx.q(*(arg1 + 0x207a0))) + 0x14) != 3)
    void* x0_16 = LogGet(x0_7, zx.q(*(arg1 + 0x207a0)))
    
    if (*(x0_16 + 0x14) s>= *(x0_16 + 0x10))
        x22_1 = 0
    else
        x22_1 = DomGameContinue(arg1 + 0x20728, arg1 + 0x20698, x0_7, 1)
        
        if (*(arg1 + 0x22150) != 0)
            GameUndo(x0_7, *(arg1 + 0x2214c) - 1)
else
    x22_1 = 1
    DomGameContinue(arg1 + 0x20728, arg1 + 0x20698, x0_7, 1)

float v0_2 = *(gDomClient + 0x1d004)
float v1_1 = *(gDomClient + 0x1d008)

if (not(v0_2 == v1_1))
    float v5_1 = fconvert.s(-1f)
    v0_2 = v1_1 + v0_2 * fconvert.s(4f) * *gSecondsPerUpdate
    float temp0_1 = vmin_f32(v0_2, fconvert.s(1f))
    
    v0_2 = v0_2 < v5_1 ? v5_1 : temp0_1
    
    *(gDomClient + 0x1d008) = v0_2

UpdateEffects()
UpdatePods()
KingdomViewUpdate(*gSecondsPerUpdate)
DomGfxUpdate(GameMainUI(), arg1, arg1 + 0x20728)

if ((IsPassAndPlay() & 1) != 0)
    int32_t x0_22 = LocalWho()
    uint64_t x1_8 = zx.q(*(arg1 + 0x207a0))
    
    if (x0_22 != x1_8.d && *(GameGetPlayer(x0_7 + 8, x1_8) + 0x14) != 3
            && *(gDomClient + 0x20640) == 0)
        SetActiveTurn(zx.q(*(arg1 + 0x207a0)))
        int32_t x8_24 = *(gDomClient + 0x38)
        uint64_t x0_26 = zx.q(*(arg1 + 0x2079c))
        int32_t x8_25
        
        x8_25 = x8_24 == 0xffffffff ? 0 : x8_24
        
        if (x8_25 != x0_26.d)
            SetDisplayWho(x0_26)

if (*(GameGetPlayer(x0_7 + 8, zx.q(*(arg1 + 0x207a0))) + 0x14) != 3 && ((x22_1 ^ 1) & 1) == 0)
    OpenDiscardIfNecessary(arg1 + 0x20748)

if (*(arg1 + 0x20690) s>= 1)
    int32_t x20_3 = 0
    
    while (true)
        ParticleSystem* x0_31 = ParticleTryToGet(zx.q(*(arg1 + (sx.q(x20_3) << 2) + 0x20650)))
        
        if (x0_31 != 0)
            ParticleUpdate(x0_31)
            x20_3 += 1
            
            if (x20_3 s>= *(arg1 + 0x20690))
                break
        else
            int64_t x8_32 = sx.q(*(arg1 + 0x20690)) - 1
            *(arg1 + 0x20690) = x8_32.d
            *(arg1 + (sx.q(x20_3) << 2) + 0x20650) = *(arg1 + (x8_32 << 2) + 0x20650)
            
            if (x20_3 s>= *(arg1 + 0x20690))
                break

TaptipUpdate()
