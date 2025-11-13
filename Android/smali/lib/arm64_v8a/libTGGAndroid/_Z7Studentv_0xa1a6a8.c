// 函数: _Z7Studentv
// 地址: 0xa1a6a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
MayRotatePile(0x1032)
int64_t result = TrashOne(7, 0)

if (result.d != 0)
    result = CardIs(result, 2)
    
    if ((result.d & 1) != 0)
        Favor(1, 0)
        NotifyResult(1)
        return MoveToTopDeck(ThisCard(false, nullptr), 0x3e9, 0xb) __tailcall

return result
