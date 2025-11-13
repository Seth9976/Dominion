// 函数: _Z19GetOfficialCampaign12DomExpansionRi
// 地址: 0xa30770
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8

x8 = arg1 == 4 ? 6 : arg1

*arg2 = x8

if (arg1 - 8 u<= 0xa && (0x743 u>> (arg1 - 8) & 1) != 0)
    *arg2 = x8 + *(&data_7e1b80 + (sx.q(arg1 - 8) << 2))

return *(muls.dp.d(arg1, 0xa8) + 0x1135110)
