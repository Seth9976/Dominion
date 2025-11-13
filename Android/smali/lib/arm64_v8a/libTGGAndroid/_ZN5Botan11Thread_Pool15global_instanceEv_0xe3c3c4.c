// 函数: _ZN5Botan11Thread_Pool15global_instanceEv
// 地址: 0xe3c3c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_23eca08) & 1) == 0 && __cxa_guard_acquire(&data_23eca08) != 0)
    char var_28
    __builtin_strncpy(&var_28, ",BOTAN_THREAD_POOL_SIZE", 0x18)
    Botan::OS::read_env_variable_sz(&var_28, 0)
    Botan::Thread_Pool::Thread_Pool(&data_23ed040)
    __cxa_atexit(Botan::Thread_Pool::~Thread_Pool, &data_23ed040, &data_1122730)
    __cxa_guard_release(&data_23eca08)

return &data_23ed040
