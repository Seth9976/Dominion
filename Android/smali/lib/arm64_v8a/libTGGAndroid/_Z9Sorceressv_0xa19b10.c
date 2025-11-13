// 函数: _Z9Sorceressv
// 地址: 0xa19b10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)

if ((CardAvailable(0x100) & 1) == 0)
    return MoveCardTo(RevealDeckOne(0x3ee, 0x7ad918), 0x3ee, 0x3ea, 3, 0, 0xb, 0) __tailcall

int32_t x0_1 = NameCardInDeckOne(0x1b)
int32_t x0_2 = RevealDeckOne(0x3ee, 0x7ad918)
PauseUI(true)
MoveCardTo(zx.q(x0_2), 0x3ee, 0x3ea, 3, 0, 0xb, 0)

if (x0_1 != 0 && (CardIs(zx.q(x0_2), zx.q(x0_1)) & 1) != 0)
    NotifyResult(1)
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
        0x10) var_50 = _vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>
        + 0x10
    int64_t (* const var_48)() = GainCurse
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
        0x10)* result = &var_50
    OtherPlayers(&var_50)
    int64_t x8_2
    
    if (&var_50 == result)
        x8_2 = *(*result + 0x20)
    else
        if (result == 0)
            return result
        
        x8_2 = *(*result + 0x28)
    
    return x8_2()

return NotifyResult(0) __tailcall
