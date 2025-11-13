// 函数: _ZN5Botan12Stateful_RNG23randomize_with_ts_inputEPhm
// 地址: 0xccdb30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t var_40 = 0
int64_t var_48 = 0
int64_t var_50 = Botan::OS::get_high_resolution_clock()
Botan::system_rng()
(*(data_23ecbc0 + 0x10))(&data_23ecbc0, &var_48, 0xc)
uint8_t* entry_x2
int64_t result = Botan::Stateful_RNG::randomize_with_input(arg1, arg2, entry_x2, &var_50)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
