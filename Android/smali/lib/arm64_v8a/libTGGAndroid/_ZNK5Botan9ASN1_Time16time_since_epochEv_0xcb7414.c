// 函数: _ZNK5Botan9ASN1_Time16time_since_epochEv
// 地址: 0xcb7414
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int128_t var_30 = *(entry_x0 + 8)
int64_t var_20 = *(entry_x0 + 0x18)
int64_t x8 = (muls.dp.q(Botan::calendar_point::to_std_timepoint(), 0x431bde82d7b634db) u>> 0x40).q
return (x8 s>> 0x12) + (x8 u>> 0x3f)
