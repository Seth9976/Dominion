// 函数: _ZN5Botan2OS24get_memory_locking_limitEv
// 地址: 0xd976e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
__builtin_strncpy(&var_28, "*BOTAN_MLOCK_POOL_SIZE", 0x17)
int64_t x0_1 = Botan::OS::read_env_variable_sz(&var_28, 0x200)
int64_t x19

x19 = x0_1 u< 0x200 ? x0_1 : 0x200

if (x19 == 0)
    return 0

getrlimit(__RLIMIT_MEMLOCK)
int64_t x8 = var_28.q
int120_t var_27
int64_t x9 = var_27:7.q

if (x8 u< x9)
    var_28.q = x9
    setrlimit(__RLIMIT_MEMLOCK)
    getrlimit(__RLIMIT_MEMLOCK)
    x8 = var_28.q

int64_t x9_1 = x19 << 0xa

if (x9_1 u< x8)
    return x9_1

return x8
