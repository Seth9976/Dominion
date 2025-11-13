// 函数: _Z9Tricksterv
// 地址: 0xaa2a20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(
    vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
    0x10) var_50 = _vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>
    + 0x10
int64_t (* const var_48)() = GainCurse
void* __offset(
    vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
    0x10)* var_30 = &var_50
OtherPlayers(&var_50)

if (&var_50 == var_30)
    (*(*var_30 + 0x20))()
else if (var_30 != 0)
    (*(*var_30 + 0x28))()

int32_t var_cd8 = 0
return ThisTurnOnce(4, sub_aae3b0, sub_aae470, 3, &var_cd8, 0x3a, nullptr, 0xffffffff)
