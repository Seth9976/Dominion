// 函数: _Z11ReplacePileR7DomGame8DomWhere11DomCardEnum
// 地址: 0xa3b7f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t var_88 = 0
int32_t var_90 = 0
NotifyLog(arg1, 0x3c, 0xffffffff, 0, nullptr, 0, 0, 0)
RemovePile(arg1, zx.q(x20))
RemovePileFinalize(arg1)
int128_t var_70
__builtin_memset(&var_70, 0, 0x50)
AddPileWhere(arg1, zx.q(x20), zx.q(arg3), &var_70, 0, 0)
AddExtraPiles(arg1, &var_70)
RunSetupAfterFns()
int64_t var_78 = 0
int32_t var_80 = 0
int32_t var_88_1 = 0
int32_t var_90_1 = 0
return NotifyEffect(arg1, 0x2e, 0xffffffff, 0, 0, 0, 0, 0)
