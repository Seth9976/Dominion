// 函数: _ZNK5Botan6Filter8get_nextEv
// 地址: 0xd79704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x8 = *(entry_x0 + 0x20)
int64_t x9 = *(entry_x0 + 0x38)

if (x9 u>= (*(entry_x0 + 0x28) - x8) s>> 3)
    return 0

return *(x8 + (x9 << 3))
