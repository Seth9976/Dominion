// 函数: _Z13LocalGameSaveRK8GameSavei
// 地址: 0x9e08d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = GameSpecific_ShouldSaveLocalGame(*(arg1 + 0x1c))
int32_t x0_3

if ((x0_1 & 1) != 0)
    XTrace("==save game==")
    x0_3 = LocalGameSaveXML(arg1, arg2)

int32_t x19_1

if ((x0_1 & 1) == 0 || (x0_3 & 1) == 0)
    x19_1 = 0
else
    SaveGameBinHalPath(arg2)
    __builtin_strncpy(arg1 + 0x11b8, "TGG1", 4)
    int32_t var_40
    int32_t var_50 = var_40
    void var_48
    XString::XString(&var_48)
    x19_1 = DefBinWrite(&var_50, arg1 + 0x11b8, *defMapPlayerLogs_Latest)
    XString::~XString()
    XString::~XString()

return zx.q(x19_1) & 1
