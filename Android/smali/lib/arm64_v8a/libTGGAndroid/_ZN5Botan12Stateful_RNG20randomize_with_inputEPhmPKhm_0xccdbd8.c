// 函数: _ZN5Botan12Stateful_RNG20randomize_with_inputEPhmPKhm
// 地址: 0xccdbd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0)
    return 

uint8_t const* x22 = arg3
uint64_t x23 = arg2
std::__ndk1::recursive_mutex::lock()
uint8_t* x0_2 = (*(*arg1 + 0x68))(arg1)
int64_t entry_x4

if (x0_2 == 0)
    Botan::Stateful_RNG::reseed_check()
    (*(*arg1 + 0x70))(arg1, x23, x22, arg4, entry_x4)
else
    uint8_t const* x26_1
    uint8_t const* temp0_1
    
    do
        x26_1 = x22 u< x0_2 ? x22 : x0_2
        
        Botan::Stateful_RNG::reseed_check()
        (*(*arg1 + 0x70))(arg1, x23, x26_1, arg4, entry_x4)
        temp0_1 = x22
        x22 -= x26_1
        x23 = &x26_1[x23]
    while (temp0_1 != x26_1)
return std::__ndk1::recursive_mutex::unlock() __tailcall
