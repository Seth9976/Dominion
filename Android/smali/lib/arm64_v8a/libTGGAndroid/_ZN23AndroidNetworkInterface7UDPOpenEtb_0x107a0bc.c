// 函数: _ZN23AndroidNetworkInterface7UDPOpenEtb
// 地址: 0x107a0bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int32_t x20 = arg2.d
int32_t fd_1 = socket(2, 2, 0)
int32_t fd = fd_1

if (fd_1 != 0xffffffff)
    fcntl(zx.q(fd), 4, zx.q(fcntl(zx.q(fd), 3, 0)) | 0x800)

int32_t var_48
int32_t entry_x2

if ((entry_x2 & 1) != 0)
    var_48 = 1
    setsockopt(zx.q(fd), 1, 6, &var_48, 4)

if ((x20 & 0xffff) != 0)
    int32_t temp0_1 = _byteswap(x20)
    var_48.w = 2
    int32_t var_44_1 = 0
    var_48:2.w = (temp0_1 u>> 0x10).w
    
    if (bind(zx.q(fd), &var_48, 0x10) == 0xffffffff)
        close(fd)
        fd = -1

if (*(x22 + 0x28) == x8)
    return zx.q(fd)

__stack_chk_fail()
noreturn
