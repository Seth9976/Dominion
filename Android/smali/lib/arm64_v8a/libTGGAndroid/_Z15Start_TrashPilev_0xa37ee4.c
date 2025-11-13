// 函数: _Z15Start_TrashPilev
// 地址: 0xa37ee4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ThisWhat()
void* x0_1 = DomGetContext()
int128_t var_70
__builtin_memset(&var_70, 0, 0x50)
AddPileWhere(*(x0_1 + 8), 2, zx.q(x0), &var_70, 0, 0)
AddExtraPiles(*(x0_1 + 8), &var_70)
RunSetupAfterFns()
int32_t var_78 = 0
int32_t var_80 = 0
return NotifyLog(*(x0_1 + 8), 0x43, 0xffffffff, 0, nullptr, 0, zx.q(x0), 2)
