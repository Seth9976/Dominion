// 函数: _Z16LocalGameSaveXMLRK8GameSavei
// 地址: 0x9e05a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_2

if ((GameSpecific_ShouldSaveLocalGame(*(arg1 + 0x1c)) & 1) == 0)
    x19_2 = 0
else
    void* x8_1 = *(gGameSettings + 0x10)
    uint64_t x12_1 = zx.q(*(x8_1 + 0x1f2e0))
    void* x15_1 = x8_1 + 0x4320
    uint64_t x13_1
    
    x13_1 = x12_1.d u> 1 ? x12_1 : 1
    
    void* x12_2 = x8_1
    
    while (*x15_1 != *(x8_1 + 0x1f2e4))
        x12_2 += 0x7cb8
        uint64_t temp0_1 = x13_1
        x13_1 -= 1
        x15_1 += 0x7cb8
        
        if (temp0_1 == 1)
            x12_2 = x8_1
            *(x8_1 + 0x1f2e4) = *(x8_1 + 0x4320)
            break
    
    *(x12_2 + 0x30) = 0
    *(x12_2 + 0x4320)
    XGetSaveGameFolder(false)
    XFormatString("%sgamelocal_%d_%d.xml")
    int128_t v0_1
    v0_1.q = 0
    v0_1:8.q = 0
    int128_t var_220
    __builtin_memset(&var_220, 0, 0x1c0)
    int128_t var_a0
    var_a0:8.d = *(arg1 + 0x10)
    var_a0:0xc.q = *(arg1 + 0x14)
    int128_t var_90 = *(arg1 + 0x1c)
    v0_1.q = *(arg1 + 0x2c)
    int128_t var_80
    var_80:4.q = v0_1.q
    var_80:0xc.d = *(arg1 + 0x34)
    int128_t var_70
    var_70.q = XString::GetString()
    int64_t x0_6
    int128_t v0_2
    x0_6, v0_2 = XString::GetString()
    var_70:8.q = x0_6
    var_220.q = arg1 + 0x54
    var_a0.d = *(arg1 + 0x11b4)
    var_220 = *(arg1 + 0x64)
    int128_t var_200
    var_200.q = arg1 + 0x7c
    int128_t var_210
    var_210:8.d = *(arg1 + 0x74)
    int128_t var_1f0
    var_1f0.q = arg1 + 0x280
    var_200:8.d = *(arg1 + 0x27c)
    var_1f0 = *(arg1 + 0x290)
    int128_t var_1d0
    var_1d0.q = arg1 + 0x2a8
    int128_t var_1e0
    var_1e0:8.d = *(arg1 + 0x2a0)
    int128_t var_1c0
    var_1c0.q = arg1 + 0x4ac
    var_1d0:8.d = *(arg1 + 0x4a8)
    var_1c0 = *(arg1 + 0x4bc)
    int128_t var_1a0
    var_1a0.q = arg1 + 0x4d4
    int128_t var_1b0
    var_1b0:8.d = *(arg1 + 0x4cc)
    int128_t var_190
    var_190.q = arg1 + 0x6d8
    var_1a0:8.d = *(arg1 + 0x6d4)
    var_190 = *(arg1 + 0x6e8)
    int128_t var_170
    var_170.q = arg1 + 0x700
    int128_t var_180
    var_180:8.d = *(arg1 + 0x6f8)
    int128_t var_160
    var_160.q = arg1 + 0x904
    var_170:8.d = *(arg1 + 0x900)
    var_160 = *(arg1 + 0x914)
    int128_t var_140
    var_140.q = arg1 + 0x92c
    int128_t var_150
    var_150:8.d = *(arg1 + 0x924)
    int128_t var_130
    var_130.q = arg1 + 0xb30
    var_140:8.d = *(arg1 + 0xb2c)
    var_130 = *(arg1 + 0xb40)
    int128_t var_120
    var_120:8.d = *(arg1 + 0xb50)
    int128_t var_110
    var_110.q = arg1 + 0xb58
    var_110:8.d = *(arg1 + 0xd58)
    int128_t var_100
    var_100.q = arg1 + 0xd5c
    int128_t var_f8_1 = *(arg1 + 0xd6c)
    int128_t var_f0
    var_f0:8.d = *(arg1 + 0xd7c)
    int128_t var_e0
    var_e0.q = arg1 + 0xd84
    var_e0:8.d = *(arg1 + 0xf84)
    int128_t var_d0
    var_d0.q = arg1 + 0xf88
    var_d0 = *(arg1 + 0xf98)
    int128_t var_c0
    var_c0:8.d = *(arg1 + 0xfa8)
    int128_t var_b0
    var_b0.q = arg1 + 0xfb0
    var_b0:8.d = *(arg1 + 0x11b0)
    DefParseTree* x0_8 = DefParseTreeMakeFromDefinition(&var_220, *defMapGameSetup_Save)
    int32_t x0_11 = DefXMLWriteFile(x0_8, *defMapGameSetup_Save, XString::operator char const*())
    x19_2 = x0_11
    
    if ((x0_11 & 1) == 0)
        XString::operator char const*()
        XTrace("Failed to write file: '%s'")
    
    DefParseTreeDelete(x0_8)
    XString::~XString()

return zx.q(x19_2) & 1
