// 函数: _Z8BlackCatv
// 地址: 0xa8a3fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
int32_t x0 = CurrentWho()
void* __offset(
    vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
    0x10)* result = CurrentTurnWho()

if (x0 != result.d)
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
        0x10) var_40 = _vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>
        + 0x10
    int64_t (* const var_38_1)() = GainCurse
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
        0x10)* result_1 = &var_40
    OtherPlayers(&var_40)
    result = result_1
    
    if (&var_40 == result)
        return (*(*result + 0x20))()
    
    if (result != 0)
        return (*(*result + 0x28))()

return result
