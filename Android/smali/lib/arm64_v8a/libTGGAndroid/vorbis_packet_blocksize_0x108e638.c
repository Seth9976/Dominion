// 函数: vorbis_packet_blocksize
// 地址: 0x108e638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
void* x20 = *(arg1 + 0x30)
int64_t result

if (x20 == 0 || *(x20 + 0x10) s< 1)
    result = -0x81
else
    void var_50
    oggpack_readinit(&var_50, *arg2, zx.q(arg2[1].d))
    
    if (oggpack_read(&var_50, 1) == 0)
        int64_t x0_6 = oggpack_read(&var_50, zx.q(ov_ilog(zx.q(*(x20 + 0x10) - 1))))
        int32_t* x8_7
        
        if (x0_6.d != 0xffffffff)
            x8_7 = *(x20 + (x0_6 << 0x20 s>> 0x1d) + 0x28)
        
        if (x0_6.d == 0xffffffff || x8_7 == 0)
            result = -0x88
        else
            result = *(x20 + (sx.q(*x8_7) << 3))
    else
        result = -0x87

if (*(x19 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
