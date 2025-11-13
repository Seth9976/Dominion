// 函数: _Z15LocalGameExistsRK10GameHandle
// 地址: 0x9ddd54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SaveGameXMLHalPath(*(arg1 + 4))
void var_48
HalFilePath var_30
int32_t x0_2 = HalOpen(&var_48, &var_30, 0)

if ((x0_2 & 1) != 0)
    HalClose(&var_48)

XString::~XString()
return zx.q(x0_2) & 1
