// 函数: _Z17GameStartTutorialv
// 地址: 0x9ae184
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
GameSetup var_11f0
memset(&var_11f0, 0, 0x11b0)
XString::XString()
XString::XString()
XString::XString()
int32_t var_1190 = 0x3e8
int32_t var_118c = *(GetActiveProfile() + 0x4320)
int32_t x0_4 = GameSpecific_TutorialPlayers(*(x0 + 0x505c))

if (x0_4 s>= 2)
    uint64_t x8_1 = zx.q(x0_4)
    int64_t x9_1
    
    if (x8_1 - 1 u>= 2)
        int64_t i_4 = (x8_1 - 1) & 0xfffffffffffffffe
        x9_1 = (x8_1 - 1) | 1
        void var_d38
        void* x12_1 = &var_d38
        int64_t i_3 = i_4
        int64_t i
        
        do
            i = i_3
            i_3 -= 2
            *(x12_1 - 0x22c) = 0x300000003
            *x12_1 = 0x300000003
            x12_1 += 0x458
        while (i != 2)
        
        if (x8_1 - 1 != i_4)
            goto label_9ae268
    else
        x9_1 = 1
    label_9ae268:
        int64_t i_2 = x8_1 - x9_1
        int64_t* x9_3 = &var_11f0 + x9_1 * 0x22c + 0x60
        int64_t i_1
        
        do
            *x9_3 = 0x300000003
            i_1 = i_2
            i_2 -= 1
            x9_3 += 0x22c
        while (i_1 != 1)

int32_t var_11dc = *(x0 + 0x505c)
int32_t var_11c8 = GameLatestVersion(4, false)
int32_t var_44 = x0_4
*(x0 + 0x5068) = 0x7fffffff00000001
*(x0 + 0x50a8) = 0x7fffffff
LocalGameInitNew(&var_11f0, x0 + 0x50a8, x0_4, 0xffffffff, 0)
GameSpecific_Load(x0 + 0x50a8, LOAD_START, 0)
LocalGameSave(x0 + 0x50a8, 0x7fffffff)
XString::~XString()
XString::~XString()
return XString::~XString()
