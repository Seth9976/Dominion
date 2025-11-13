// 函数: _Z7Archivev
// 地址: 0xa6c8cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int32_t var_28 = 0
int64_t result = TopDeckCard()
void var_ca8

if (result.d != 0)
    MoveCardTo(result, 0x3eb, 0x3ee, 5, 0, 0xb, 0)
    operator+=(&var_ca8, zx.q(result.d))
    result = TopDeckCard()
    
    if (result.d != 0)
        MoveCardTo(result, 0x3eb, 0x3ee, 5, 0, 0xb, 0)
        operator+=(&var_ca8, zx.q(result.d))
        result = TopDeckCard()
        
        if (result.d != 0)
            MoveCardTo(result, 0x3eb, 0x3ee, 5, 0, 0xb, 0)
            result = operator+=(&var_ca8, zx.q(result.d))

if (var_28 == 0)
    return result

void* x0_3 = DomGetContext()
int32_t var_cb8_1 = 0
int32_t var_cc0_1 = 0
NotifyLog(*(x0_3 + 8), 0x3c, zx.q(*(x0_3 + 0x18)), 0, nullptr, 0, 0, 0)
return Archive_GetCard(&var_ca8)
