// 函数: _Z8Catapultv
// 地址: 0xa6ce8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(1, 0, false)
void* __offset(
    vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
    0x10)* result = TrashOne(7, 0)

if (result.d != 0)
    int32_t x0 = CostAtLeast(result, 3)
    result = CardIs(zx.q(result.d), 2)
    int32_t x19_2 = result.d
    
    if ((result.d & 1) != 0)
        result = NotifyResult(1)
    
    if ((x0 & 1) != 0)
        void* __offset(
            vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
            0x10) var_50 = _vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>
            + 0x10
        int64_t (* const var_48_1)() = GainCurse
        void* __offset(
            vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
            0x10)* result_2 = &var_50
        OtherPlayers(&var_50)
        result = result_2
        
        if (&var_50 == result)
            result = (*(*result + 0x20))()
        else if (result != 0)
            result = (*(*result + 0x28))()
    
    if ((x19_2 & 1) != 0)
        void* var_80 = &_vtable_for_std::__ndk1::__function::__func<Catapult()::$_16, std::__ndk1::allocator<Catapult()::$_16>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        void** result_1 = &var_80
        OtherPlayers(&var_80)
        result = result_1
        
        if (&var_80 == result)
            return (*(*result + 0x20))()
        
        if (result != 0)
            return (*(*result + 0x28))()

return result
