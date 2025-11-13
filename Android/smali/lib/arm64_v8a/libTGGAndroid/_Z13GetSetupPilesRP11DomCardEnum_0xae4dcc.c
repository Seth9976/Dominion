// 函数: _Z13GetSetupPilesRP11DomCardEnum
// 地址: 0xae4dcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0
CardID* x1
x0, x1 = DomGetContext()
uint64_t x0_1

if (*x0 != 4)
    int32_t x0_2 = ThisCard(false, x1)
    x0_1 = CardWhat(*(DomGetContext() + 8), zx.q(x0_2))
else
    x0_1 = zx.q(x0[7])

DomCardDef* x0_5 = DomDefGet(x0_1, zx.q(*(*(x0 + 8) + 0xd50)))
int32_t var_24
int64_t result = HasRandomExtraPileSetup(x0_5, &var_24, nullptr, nullptr)

if (result.d == 0)
    result = HasGenerateExtraPileSetup(x0_5, &var_24, nullptr, nullptr)

*arg1 = *(x0 + 8) + (zx.q(var_24) << 2) + 0xe6c
return result
