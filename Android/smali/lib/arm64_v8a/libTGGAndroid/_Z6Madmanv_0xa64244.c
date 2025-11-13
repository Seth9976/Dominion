// 函数: _Z6Madmanv
// 地址: 0xa64244
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(2, 0)
int64_t result = ReturnThisToBoard(0x3e9)

if ((result.d & 1) == 0)
    return result

return Card(CountHand(), 0, 0, nullptr) __tailcall
