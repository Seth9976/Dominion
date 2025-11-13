// 函数: _Z20DeclareTwitterPlayer9UI2HandleRK19TwitterLayoutPlayer9PlayerWho
// 地址: 0xbaaa08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetText(arg1, &data_1832fb8, arg2, 0xffffffff)
DeclarePlayerColor(zx.q(x19), zx.q(arg3))
XStringFromInt(*(arg2 + 8))
void var_28
UI2SetText(zx.q(x19), &data_1832fd0, &var_28, 0xffffffff)
XString::~XString()
XStringFromInt(*(arg2 + 0xc))
UI2SetText(zx.q(x19), &data_1832fe8, &var_28, 0xffffffff)
int64_t result = XString::~XString()

if (zx.d(*(arg2 + 0x11)) != 0)
    result = UI2SetState(zx.q(x19), &data_1833018, 0xffffffff, 0)

if (zx.d(*(arg2 + 0x10)) == 0)
    return result

return UI2SetState(zx.q(x19), &data_1833000, 0xffffffff, 0)
