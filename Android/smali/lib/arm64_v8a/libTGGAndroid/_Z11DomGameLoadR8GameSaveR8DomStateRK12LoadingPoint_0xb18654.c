// 函数: _Z11DomGameLoadR8GameSaveR8DomStateRK12LoadingPoint
// 地址: 0xb18654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x28 = GetClient() + 0x75b0
*x28 = 0xffffffff
memset(arg2, 0, 0x60d20)
int64_t x0_3
int64_t x1
x0_3, x1 = RandomPCGSet(sx.q(*(arg1 + 0x10)), 0)
*arg2 = x0_3
*(arg2 + 8) = x1
int32_t x8 = *(arg1 + 0x30)
int32_t x8_1

x8_1 = x8 s< 0x18 ? x8 : 0x18

*(arg2 + 0xd50) = x8_1
*(arg2 + 0xd40) = *(arg1 + 0x11b4)
*(arg2 + 0xd48) = *(arg1 + 0x1c)
*(arg2 + 0xd4c) = *(arg1 + 0x20)
int32_t var_3380
void var_2e0

if ((XString::IsEmpty() & 1) != 0)
    DomSetupConfigFromString(XString::operator char const*(), *(arg2 + 0xd50))
    int32_t var_2e4
    int32_t x24_1
    
    if (var_2e4 == 0)
        x24_1 = *(arg1 + 0x34)
    else
        x24_1 = var_2e4
    
    DomSetupConfigFromString(XString::operator char const*(), *(arg2 + 0xd50))
    RandomizeStartingCards(zx.q(*(arg1 + 0x30)), &var_3380, x24_1)
    void var_38b8
    ToKingdomString(&var_38b8)
    XString::operator=(arg1 + 0x40)
    uint64_t x10_1
    int32_t x12_1
    x10_1, x12_1 = XString::~XString()
    int64_t i = 0
    void var_181c
    void* x9_2 = &var_181c
    int128_t var_3ac0
    __builtin_memset(&var_3ac0, 0, 0x200)
    
    do
        int32_t x11_1 = *(x9_2 - 0x14)
        int32_t x13_1
        
        if (x11_1 != 1)
            x13_1 = *(x9_2 - 4)
            
            if (x13_1 == 1)
                goto label_b18828
            
            goto label_b18804
        
        x10_1 = zx.q(*(x9_2 - 0x10))
        x13_1 = *(x9_2 - 4)
        
        if (x13_1 == 1)
        label_b18828:
            x12_1 = *x9_2
            
            if (x11_1 != 1)
                goto label_b1880c
            
            goto label_b18834
        
    label_b18804:
        
        if (x11_1 == 1)
        label_b18834:
            *(&var_3ac0 + i) = x10_1.d
            
            if (x13_1 == 1)
                x10_1 = &var_3ac0 + i
                *(x10_1 + 4) = x12_1
        else
        label_b1880c:
            
            if (x13_1 == 1)
                x10_1 = &var_3ac0 + i
                *(x10_1 + 4) = x12_1
        
        i += 8
        x9_2 += 0x20
    while (i != 0x200)
    
    ToExtrasString(&var_2e0, &var_3ac0)
    
    if ((XString::IsEmpty() & 1) == 0)
        XString::GetString()
        XString::GetString()
        XFormatString("-k %s -x %s")
        XString::operator=(arg1 + 0x40)
        XString::~XString()
    
    *(arg1 + 0x34) = x24_1
    DomSetupConfigFromString(XString::operator char const*(), XString::operator char const*(), 
        *(arg1 + 0x30))
    DomSetupConfig var_5458
    RandomizeStartingCards(zx.q(*(arg1 + 0x30)), &var_5458, x24_1)
    void var_5990
    
    if (memcmp(&var_38b8, &var_5990, 0x534) != 0)
        ToKingdomString(&var_5990)
        XString::GetString()
        XString::GetString()
        XTraceAndLog("error regenerating kingdom\n  %s\n  %s")
        pthread_kill(pthread_self(), 6)
        int64_t x0_61
        int64_t x1_19
        x0_61, x1_19 = XNoReturn()
        return GameSepcific_NotifyGameEnd(x0_61, x1_19) __tailcall
    
    if (*(GetClient() + 0x5068) == 1)
        LocalGameSaveXML(arg1, *arg1)
    
    XString::~XString()

DomSetupConfigFromString(XString::operator char const*(), XString::operator char const*(), 
    *(arg1 + 0x30))
void var_19f0
memcpy(gDomClient + 0x81450, &var_19f0, 0x1990)
RandomizeStartingCards(zx.q(*(arg1 + 0x30)), gDomClient + 0x81450, *(arg1 + 0x34))
memcpy(arg2 + 0xd54, &var_3380, 0x534)
memcpy(arg2 + 0x1288, &var_2e0, 0x280)
*(arg2 + 0x150c) = 2
*(arg2 + 0x1510) = *arg3
*(arg2 + 0x60d20) = co_call(DomGameStart, arg2)
co_resume(arg2 + 0x60d20)
int32_t x8_8 = *(arg2 + 0x1a28)
*(arg2 + 0x150c) = 1
int64_t result
int32_t* entry_x8

if (x8_8 == 0)
    int32_t x23_2
    
    if (*(arg1 + 0x11b4) s< 1)
        x23_2 = 0
    else
        int32_t x22_1 = *(arg2 + 0x74)
        int64_t i_1 = 0
        void* __offset(GameSave, 0x70) x26_2 = arg1 + 0x70
        x23_2 = -1
        
        do
            int32_t x8_17 = *(x26_2 - 8)
            
            if (x8_17 != 1)
                goto label_b18b24
            
            if (*(x26_2 - 4) == *(GetActiveProfile() + 0x42ac))
            label_b18adc:
                x23_2 = *x26_2
                
                if (x23_2 == x22_1)
                    x23_2 = x22_1
                    goto label_b18b4c
            else
                x8_17 = *(x26_2 - 8)
            label_b18b24:
                
                if ((x8_17 & 0xfffffffe) == 0x3e8)
                    goto label_b18adc
            
            i_1 += 1
            x26_2 += 0x22c
        while (i_1 s< sx.q(*(arg1 + 0x11b4)))
        
        if (x23_2 == 0xffffffff)
            x23_2 = 0
    
label_b18b4c:
    int32_t x22_2
    
    x22_2 = x23_2 == 0xffffffff ? 0 : x23_2
    
    *x28 = x22_2
    
    if (*(arg2 + 0x78) != x22_2)
        SetDisplayWho(zx.q(x22_2))
    else
        SetDisplayWho(zx.q(*(arg2 + 0x74)))
        
        if (*(arg2 + 0x19d8) != *(arg2 + 0x19d4))
            *(gDomClient + 0x24) = 2
    
    if (x23_2 != 0xffffffff)
        SetActiveTurn(zx.q(x22_2))
    
    int32_t var_337c_1 = *(gDomClient + 0x22150)
    int32_t x9_6 = *(gDomClient + 0x220fc)
    int32_t x10_3 = *(gDomClient + 0x207a0)
    int32_t x11_3 = *(gDomClient + 0x22114)
    int32_t var_3378_1 = x9_6
    int32_t x8_24 = (*(gDomClient + 0x22110) - 1) s/ *(gDomClient + 0x21468) + 1
    var_3380 = 0
    int32_t var_3374_1 = x10_3
    int32_t var_3370_1 = x11_3
    int32_t var_336c_1 = x8_24
    
    if (x9_6 != x10_3 || (zx.d(*(gDomClient + 0x20798)) & 8) != 0)
        var_3370_1 = 0xffffffff
    
    uint64_t x9_8 = zx.q(*(arg1 + 0x11b4))
    
    if (x9_8.d s< 1)
    label_b18c68:
        
        if (*(GetClient() + 0x5068) == 2 && *(arg2 + 0x78) != LocalWho())
            ClientSendWaitingMessage(zx.q(*arg1), &var_3380)
    else
        void* __offset(GameSave, 0x74) x8_26 = arg1 + 0x74
        
        while (true)
            int32_t x10_4 = *x8_26
            int32_t x22_4
            
            if (x10_4 - 0x3ec u< 2)
                x22_4 = 6
            else if (x10_4 == 0x3e9)
                x22_4 = 5
            else
                uint64_t temp0_1 = x9_8
                x9_8 -= 1
                x8_26 += 0x22c
                
                if (temp0_1 == 1)
                    goto label_b18c68
                
                continue
            
            int32_t x23_3 = *(x8_26 - 4)
            int32_t var_59b8_1 = 0
            int32_t var_59c0_1 = 0
            NotifyLog(gDomClient + 0x20728, 7, zx.q(x23_3), 0, nullptr, 0, 0, 0)
            int32_t var_59b8_2 = 0
            int32_t var_59c0_2 = 0
            NotifyLog(gDomClient + 0x20728, 9, zx.q(x23_3), 0, nullptr, 0, zx.q(x22_4), 0)
            
            if (LocalWho() == x23_3)
                DomSoundGameMessage(0xffffffff, 5)
            
            break
    
    char x23_4 = 1
    void* __offset(DomState, 0x159c) x22_5 = arg2 + 0x159c
    
    for (int64_t i_2 = 7; i_2 != 0x48; )
        uint64_t x0_51 = zx.q(*x22_5)
        
        if (x0_51.d != 0 && (PregameCardIs(x0_51, 0x40000) & 1) != 0)
            break
        
        bool cond:4_1 = i_2 u< 0x47
        i_2 += 1
        x23_4 = (cond:4_1 ? 1 : 0).b
        x22_5 += 0x10
    
    *(gDomClient + 0x20598) = x23_4 & 1
    int64_t* x8_29 = *(GetBackground(arg1, arg2) + 0x28)
    
    if (x8_29 == 0)
        uint64_t x8_30 = zx.q(*(arg1 + 0x34))
        x8_29 = (&data_114f730)[zx.q(x8_30.d - ((x8_30 * 0xcccccccd) u>> 0x22).d * 5)]
    
    int128_t v0_1
    result, v0_1 = MusicPlay(*x8_29, nullptr)
    v0_1 = var_3380.o
    *(entry_x8 + 0x10) = var_3370_1.q
    *entry_x8 = v0_1
else
    result = ActiveGame()
    int32_t x8_9 = *(gDomClient + 0x22150)
    *entry_x8 = 1
    entry_x8[1] = x8_9
    int32_t x9_3 = *(gDomClient + 0x220fc)
    int32_t x10_2 = *(gDomClient + 0x207a0)
    int32_t x12_2 = *(gDomClient + 0x22110)
    int32_t x8_10 = *(gDomClient + 0x21468)
    int32_t x11_2 = *(gDomClient + 0x22114)
    entry_x8[2] = x9_3
    entry_x8[3] = x10_2
    entry_x8[4] = x11_2
    entry_x8[5] = (x12_2 - 1) s/ x8_10 + 1
    
    if (x9_3 != x10_2 || (zx.d(*(gDomClient + 0x20798)) & 8) != 0)
        entry_x8[4] = 0xffffffff
return result
