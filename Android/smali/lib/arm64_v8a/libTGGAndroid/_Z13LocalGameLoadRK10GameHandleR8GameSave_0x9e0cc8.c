// 函数: _Z13LocalGameLoadRK10GameHandleR8GameSave
// 地址: 0x9e0cc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SaveGameXMLHalPath(*(arg1 + 4))
void var_220
void var_210
int32_t x19_1

if ((DefXMLReadFileIntoDefinition(*defMapGameSetup_Save, &var_220, &var_210) & 1) == 0)
    x19_1 = 0
else
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = ToSetup(&var_210)
    int64_t var_13d0
    *(arg2 + 8) = var_13d0
    int64_t var_13a8
    *(arg2 + 0x30) = var_13a8
    int128_t var_13c8
    *(arg2 + 0x10) = var_13c8
    int128_t var_13b8
    *(arg2 + 0x20) = var_13b8
    XString::operator=(arg2 + 0x38)
    XString::operator=(arg2 + 0x40)
    XString::operator=(arg2 + 0x48)
    void var_1388
    memcpy(arg2 + 0x50, &var_1388, 0x1168)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    SaveGameBinHalPath(*(arg1 + 4))
    int32_t var_13e0
    
    if ((HalOpen(&var_13d0, &var_13e0, 0) & 1) == 0)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return GetServerSettings() __tailcall
    
    int32_t x0_12 = HalGetFileSize(&var_13d0)
    HalClose(&var_13d0)
    void* x0_15 = XCalloc(x0_12)
    int32_t var_13f0 = var_13e0
    void var_13e8
    XString::XString(&var_13e8)
    
    if ((DefBinRead(&var_13f0, x0_15, *defMapPlayerLogs_V1) & 1) == 0 || zx.d(*x0_15) != 0x54
            || zx.d(*(x0_15 + 1)) != 0x47 || zx.d(*(x0_15 + 2)) != 0x47)
        XString::~XString()
    label_9e0ef4:
        void* x0_23 = XCalloc(x0_12)
        int32_t var_1400 = var_13e0
        void var_13f8
        XString::XString(&var_13f8)
        int32_t x0_26 = DefBinRead(&var_1400, x0_23, *defMapPlayerLogs_V0)
        XString::~XString()
        XFree(x0_23)
        
        if ((x0_26 & 1) == 0)
            XFree(x0_15)
        
        x19_1 = 0
    else
        uint32_t x25_1 = zx.d(*(x0_15 + 3))
        XString::~XString()
        
        if (x25_1 != 0x31)
            goto label_9e0ef4
        
        if (*(arg2 + 0x11b4) s>= 1)
            int64_t i = 0
            void* x23_1 = x0_15 + 0x14
            void* __offset(GameSave, 0x11d4) x25_2 = arg2 + 0x11d4
            
            do
                *(x25_2 - 4) = *(x23_1 + 4)
                int32_t x8_9 = *x23_1
                *x25_2 = 0
                int32_t x0_19
                
                x0_19 = x8_9 s> 0x1000 ? x8_9 : 0x1000
                
                *(x25_2 - 0xc) = x0_19
                *(x25_2 - 8) = x8_9
                int64_t x0_20 = XMalloc(x0_19)
                *(x25_2 - 0x14) = x0_20
                memcpy(x0_20, *(x23_1 - 0xc), sx.q(*x23_1))
                i += 1
                x25_2 += 0x18
                x23_1 += 0x18
            while (i s< sx.q(*(arg2 + 0x11b4)))
        
        XFree(x0_15)
        x19_1 = 1
    
    XString::~XString()

XString::~XString()
return zx.q(x19_1)
