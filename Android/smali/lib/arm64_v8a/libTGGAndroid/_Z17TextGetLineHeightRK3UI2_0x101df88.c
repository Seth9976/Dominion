// 函数: _Z17TextGetLineHeightRK3UI2
// 地址: 0x101df88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v8
v8.d = *(arg1 + 0x175c)
int64_t v9
v9.d = UI2PropDynamic<float>::Eval(GameGetTimeSimulation()) f* *(arg1 + 0x16b0)
char var_28
XString::XString(&var_28)
DrawStringGetHeightFancy(&var_28, *(arg1 + 0x1548), *(gUI2 + 0x68), nullptr, v8.d, v9.d)
return XString::~XString()
