// 函数: _Z19UIStateLoadSubstateRK9UIElementR14UIStateElementRK5Vec2IP6XAsset
// 地址: 0x1054ed8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x0

if (arg4 == 0)
    x0 = *(arg1 + 0xc8)
else
    x0 = arg4

int64_t result = UIStateLoad(x0)
void* x8_2 = *(gUISystem + 0x28) + mulu.dp.d(result.d & 0xffff, 0x458)
*(x8_2 + 0x18) = arg2
*(x8_2 + 0x20) = *arg3
return result
