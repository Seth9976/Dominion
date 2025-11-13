// 函数: _Z16AddStandardPilesR7DomGameR10ExtraSetupb
// 地址: 0xbbffb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_80 = data_71c630
int32_t x8
int32_t x22

if ((arg3.d & 1) == 0)
    x8 = 6
    x22 = 0x103
else
    x8 = 8
    x22 = 0x601
    int64_t var_68_1 = 0x10400000101
    var_80 = var_80
    var_80.q = 0x60000000601

uint64_t x21 = zx.q(x8)
AddPileNoSetup(arg1, 7, zx.q(x22), arg2, 0, 0)
RunPileSetup(arg1, zx.q(x22), arg2, 0)
int64_t x23 = 1

do
    int32_t x22_1 = *(&var_80 + (x23 << 2))
    AddPileNoSetup(arg1, zx.q(x23.d + 7), zx.q(x22_1), arg2, 0, 0)
    RunPileSetup(arg1, zx.q(x22_1), arg2, 0)
    x23 += 1
while (x21 != x23)

return zx.q(x21.d)
