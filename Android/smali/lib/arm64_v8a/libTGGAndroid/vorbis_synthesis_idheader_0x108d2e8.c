// 函数: vorbis_synthesis_idheader
// 地址: 0x108d2e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)

if (arg1 != 0)
    void var_58
    oggpack_readinit(&var_58, *arg1, zx.q(arg1[1].d))
    
    if (arg1[2] != 0 && oggpack_read(&var_58, 8) == 1)
        char var_30 = oggpack_read(&var_58, 8)
        char var_2f_1 = oggpack_read(&var_58, 8)
        char var_2e_1 = oggpack_read(&var_58, 8)
        char var_2d_1 = oggpack_read(&var_58, 8)
        char var_2c_1 = oggpack_read(&var_58, 8)
        char var_2b_1 = oggpack_read(&var_58, 8)
        memcmp(&var_30, "vorbis", 6)

if (*(x20 + 0x28) == x8)
    return 

__stack_chk_fail()
noreturn
