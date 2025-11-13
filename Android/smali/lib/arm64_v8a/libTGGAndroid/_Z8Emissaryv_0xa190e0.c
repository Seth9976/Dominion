// 函数: _Z8Emissaryv
// 地址: 0xa190e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x21 = *(*(x0 + 8) + sx.q(*(x0 + 0x18)) * 0x5a30 + 0x18204)
Card(3, 0, 0, nullptr)
void* result = DomGetContext()

if (x21 == *(*(result + 8) + sx.q(*(result + 0x18)) * 0x5a30 + 0x18204))
    return result

NotifyResult(1)
Action(1, 0)
return Favor(2, 0) __tailcall
