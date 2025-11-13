// 函数: _Z13Quartermasterv
// 地址: 0xaa2840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1

if ((HaveElderPower() & 1) == 0)
    x0_1 = -1
else
    x0_1 = ThisTurnID()

FromSingleInt(x0_1)
void var_c98
return Forever(1, sub_aad98c, nullptr, 0, &var_c98, 1)
