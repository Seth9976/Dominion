// 函数: _ZN5Botan10DataSource12discard_nextEm
// 地址: 0xe8b54c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t entry_i
int64_t i = entry_i
int64_t result = 0
int128_t var_80
__builtin_memset(&var_80, 0, 0x40)

while (i != 0)
    int64_t i_1
    
    i_1 = i u< 0x40 ? i : 0x40
    
    int64_t x0_1 = (**arg1)(arg1, &var_80, i_1)
    result += x0_1
    i -= x0_1
    
    if (x0_1 == 0)
        break

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
