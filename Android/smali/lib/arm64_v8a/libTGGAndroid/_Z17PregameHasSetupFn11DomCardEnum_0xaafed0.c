// 函数: _Z17PregameHasSetupFn11DomCardEnum
// 地址: 0xaafed0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomCardDef* x0_2 = DomDefGet(zx.q(arg1), zx.q(*PregameContextGet()))

if ((HasSetupFn(x0_2) & 1) != 0)
    return 1

ExtraPileSlot var_14

if (HasRandomExtraPileSetup(x0_2, &var_14, nullptr, nullptr) == 0)
    return zx.q(HasGenerateExtraPileSetup(x0_2, &var_14, nullptr, nullptr) != 0 ? 1 : 0)

return 1
