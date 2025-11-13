// 函数: _Z12ClearKingdomR9GameSetup
// 地址: 0xb2ba60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsetClear(*(gDomClient + 0x82e30))
int32_t x8_1 = *(arg1 + 0x18)
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = x8_1 & 0xffffffcf
GetKingdomConfig(arg1)
DomSetupConfig var_19b0
DomClearKingdom(&var_19b0)
return SaveSetupData(arg1, &var_19b0)
