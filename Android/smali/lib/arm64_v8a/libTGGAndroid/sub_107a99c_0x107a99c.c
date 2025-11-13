// 函数: sub_107a99c
// 地址: 0x107a99c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int64_t x8_1

if (arg1 != 0)
    x8_1 = *(arg5 + 8)

int32_t x22

if (arg1 == 0 || x8_1 == 0)
    x22 = -1
else
    x22 = x8_1(arg1, 0, 1)

int64_t var_60 = 0
int32_t var_64 = 0
memset(&arg2[1], 0, 0x3a8)
*arg2 = arg1
*(arg2 + 0x390) = *arg5
int128_t v0 = arg5[1]
*(arg2 + 0x3a0) = v0
ogg_sync_init(&arg2[4], v0)

if (arg3 != 0)
    memcpy(ogg_sync_buffer(&arg2[4], arg4), arg3, arg4)
    ogg_sync_wrote(&arg2[4], arg4)

if (x22 != 0xffffffff)
    arg2[1].d = 1

arg2[8].d = 1
arg2[0xd] = calloc(1, 0x38)
arg2[0xe] = calloc(1, 0x20)
ogg_stream_init(&arg2[0x15], 0xffffffff)
int32_t x0_11 = sub_107e3e8(arg2, arg2[0xd], arg2[0xe], &var_60, &var_64, nullptr)
int64_t x21_1

if ((x0_11 & 0x80000000) != 0)
    *arg2 = 0
    ov_clear(arg2)
    x21_1 = var_60
    
    if (x21_1 != 0)
        free(x21_1)
else
    int64_t x23_2 = sx.q(var_64)
    int64_t* x0_13 = calloc(x23_2 + 2, 8)
    int64_t x8_2 = arg2[0x44]
    arg2[0xb] = x0_13
    arg2[0x11] = x8_2
    x21_1 = var_60
    *x0_13 = x8_2
    x0_13[1] = x23_2
    memcpy(&x0_13[2], x21_1, x23_2 << 3)
    arg2[9] = calloc(1, 8)
    int64_t* x0_16 = calloc(1, 8)
    int64_t x8_3 = arg2[2]
    arg2[0xa] = x0_16
    *x0_16 = x8_3
    arg2[0x10].d = 1
    
    if (x21_1 != 0)
        free(x21_1)

if (*(x25 + 0x28) == x8)
    return zx.q(x0_11)

__stack_chk_fail()
noreturn
