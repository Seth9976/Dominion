// 函数: _Z8Goatherdv
// 地址: 0xa8a778
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int32_t x0 = PlayerRight()
int32_t x19_1 = *(*(DomGetContext() + 8) + muls.dp.d(x0, 0x5a30) + 0x181e0)

if (x19_1 s>= 1)
    NotifyResult(1)

MayTrashOne(7, 0)
return Card(x19_1, 0, 0, nullptr) __tailcall
