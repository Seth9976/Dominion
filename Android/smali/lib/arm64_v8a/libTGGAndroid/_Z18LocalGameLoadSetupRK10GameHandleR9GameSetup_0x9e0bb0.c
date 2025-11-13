// 函数: _Z18LocalGameLoadSetupRK10GameHandleR9GameSetup
// 地址: 0x9e0bb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SaveGameXMLHalPath(*(arg1 + 4))
void var_220
void var_210
int32_t x0_2 = DefXMLReadFileIntoDefinition(*defMapGameSetup_Save, &var_220, &var_210)

if ((x0_2 & 1) != 0)
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = ToSetup(&var_210)
    int64_t var_13d0
    *arg2 = var_13d0
    int64_t var_13a8
    *(arg2 + 0x28) = var_13a8
    int128_t var_13b8
    *(arg2 + 0x18) = var_13b8
    int128_t var_13c8
    *(arg2 + 8) = var_13c8
    XString::operator=(arg2 + 0x30)
    XString::operator=(arg2 + 0x38)
    XString::operator=(arg2 + 0x40)
    void var_1388
    memcpy(arg2 + 0x48, &var_1388, 0x1168)
    XString::~XString()
    XString::~XString()
    XString::~XString()

XString::~XString()
return zx.q(x0_2) & 1
