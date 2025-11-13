// 函数: _Z11RevealUntilPFb6CardIDE
// 地址: 0xac46d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardIDs* entry_x8
*(entry_x8 + 0xc80) = 0
int64_t result

do
    result = RevealDeckOne(0x3ee, 0x7eae90)
    
    if (result.d == 0)
        break
    
    int32_t x22_1 = result.d
    operator+=(entry_x8, zx.q(x22_1))
    result = arg1(zx.q(x22_1))
while ((result.d & 1) == 0)

return result
