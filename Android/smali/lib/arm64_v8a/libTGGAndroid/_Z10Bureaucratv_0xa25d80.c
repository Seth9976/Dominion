// 函数: _Z10Bureaucratv
// 地址: 0xa25d80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GainCard(0x105, 0x3eb, 0, 0, 4)
void* __offset(
    vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>, 
    0x10) var_40 = _vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>
    + 0x10
int64_t (* const var_38)() = ReturnVictoryToTopOfDeck
void* __offset(
    vtable_for_std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void ()>, 
    0x10)* result = &var_40
OtherPlayers(&var_40)
int64_t x8_2

if (&var_40 == result)
    x8_2 = *(*result + 0x20)
else
    if (result == 0)
        return result
    
    x8_2 = *(*result + 0x28)

return x8_2()
